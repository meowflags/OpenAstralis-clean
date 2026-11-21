import org.objectweb.asm.ClassReader;
import org.objectweb.asm.ClassWriter;
import org.objectweb.asm.Opcodes;
import org.objectweb.asm.Type;
import org.objectweb.asm.Handle;
import org.objectweb.asm.ConstantDynamic;
import org.objectweb.asm.tree.*;
import org.objectweb.asm.tree.analysis.Analyzer;
import org.objectweb.asm.tree.analysis.BasicVerifier;
import org.objectweb.asm.util.CheckClassAdapter;

import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.security.MessageDigest;
import java.util.*;
import java.util.stream.Stream;

/**
 * Static inspection cleanup. Parses and rewrites bytes without defining client classes.
 * Native support is always removed. Output requires further reconstruction for gameplay.
 * Usage: java Sanitize <classes-directory> <new-output-directory> [--nonative]
 */
public final class Sanitize {
    private static final String REMOVED = "Removed unsafe or unrecovered implementation";
    private static final Set<String> DISABLED = new HashSet<String>(Arrays.asList(
        "hdl", "dle", "DiscordRpc", "eby", "fz", "fwi", "hht"
    ));
    private static final String[] ENDPOINTS = {
        "serenityutils.club", "discord.com/api/v10/channels", "pastebin.com"
    };

    public static void main(String[] args) throws Exception {
        if (args.length < 2 || args.length > 3
                || (args.length == 3 && !args[2].equals("--nonative"))) {
            throw new IllegalArgumentException(
                "Usage: Sanitize <classes-directory> <new-output-directory> [--nonative]");
        }
        Path input = Paths.get(args[0]).toRealPath();
        Path output = Paths.get(args[1]).toAbsolutePath().normalize();
        if (!Files.isDirectory(input) || output.startsWith(input) || Files.exists(output)) {
            throw new IOException("Use a new output directory outside the input tree");
        }
        Path parent = output.getParent().toRealPath();
        output = parent.resolve(output.getFileName());
        if (output.startsWith(input) || Files.exists(output)) {
            throw new IOException("Resolved output overlaps the input or already exists");
        }
        Path staged = Files.createTempDirectory(parent, ".static-cleanup-");
        boolean published = false;
        try {
            List<Path> files = new ArrayList<Path>();
            try (Stream<Path> walk = Files.walk(input)) {
                Iterator<Path> iterator = walk.iterator();
                while (iterator.hasNext()) {
                    Path file = iterator.next();
                    if (Files.isSymbolicLink(file)) {
                        throw new IOException("Symbolic links are unsupported: " + file);
                    }
                    if (Files.isRegularFile(file) && file.toString().endsWith(".class")) {
                        files.add(file);
                    }
                }
            }
            Collections.sort(files);
            if (files.isEmpty()) throw new IOException("No class files were supplied");
            StringBuilder manifest = new StringBuilder();
            int count = 0;
            for (Path file : files) {
                ClassNode node = new ClassNode();
                new ClassReader(Files.readAllBytes(file)).accept(node, 0);
                if (node.name.startsWith("dev/opalV2/")) continue;
                patch(node);
                byte[] data = checkedBytes(node);
                Path relative = input.relativize(file);
                Path target = staged.resolve(relative);
                Files.createDirectories(target.getParent());
                Files.write(target, data);
                manifest.append(hex(MessageDigest.getInstance("SHA-256").digest(data)));
                manifest.append('\t').append(relative.toString().replace('\\', '/')).append('\n');
                count++;
            }
            if (count == 0) throw new IOException("No inspection classes remain");
            Files.write(staged.resolve("SHA256SUMS.cleaned"),
                manifest.toString().getBytes(StandardCharsets.UTF_8));
            // An unsupported atomic move aborts instead of publishing partial output.
            Files.move(staged, output, StandardCopyOption.ATOMIC_MOVE);
            published = true;
            System.out.println("Wrote " + count + " static inspection classes to " + output);
        } finally {
            if (!published) {
                try (Stream<Path> walk = Files.walk(staged)) {
                    Iterator<Path> iterator = walk.sorted(Comparator.reverseOrder()).iterator();
                    while (iterator.hasNext()) Files.delete(iterator.next());
                }
            }
        }
    }

    static void patch(ClassNode node) {
        String simpleName = node.name.substring(node.name.lastIndexOf('/') + 1);
        boolean client = node.name.startsWith("cc/astralis/") || node.name.startsWith("astralis/");
        boolean disabled = client && DISABLED.contains(simpleName);
        for (FieldNode field : node.fields) {
            if (field.value instanceof String && endpoint((String) field.value)) {
                field.value = "";
            }
        }
        for (MethodNode method : node.methods) {
            boolean nativeMethod = (method.access & Opcodes.ACC_NATIVE) != 0;
            boolean dangerous = nativeMethod || disabled;
            for (AbstractInsnNode instruction : method.instructions) {
                if (instruction instanceof MethodInsnNode) {
                    MethodInsnNode call = (MethodInsnNode) instruction;
                    dangerous |= dangerousCall(call.owner, call.name);
                }
                if (instruction instanceof LdcInsnNode) {
                    LdcInsnNode literal = (LdcInsnNode) instruction;
                    if (literal.cst instanceof String && endpoint((String) literal.cst)) {
                        literal.cst = "";
                    }
                    dangerous |= unsafeConstant(literal.cst);
                }
                if (instruction instanceof InvokeDynamicInsnNode) {
                    InvokeDynamicInsnNode dynamic = (InvokeDynamicInsnNode) instruction;
                    dangerous |= unsafeConstant(dynamic.bsm);
                    for (Object argument : dynamic.bsmArgs) dangerous |= unsafeConstant(argument);
                }
            }
            if (dangerous) {
                method.access &= ~(Opcodes.ACC_NATIVE | Opcodes.ACC_ABSTRACT);
                // Clearing a disabled controller's initializer performs no initialization.
                replaceBody(method, disabled && method.name.equals("<clinit>"));
            }
        }
    }

    private static boolean dangerousCall(String owner, String name) {
        return owner.startsWith("dev/opalV2/")
            || owner.equals("sun/misc/Unsafe")
            || owner.equals("jdk/internal/misc/Unsafe")
            || (owner.equals("java/lang/Runtime") && name.equals("halt"))
            || (owner.equals("java/lang/System")
                && (name.equals("load") || name.equals("loadLibrary")));
    }

    private static boolean endpoint(String value) {
        String lowered = value.toLowerCase(Locale.ROOT);
        for (String endpoint : ENDPOINTS) {
            if (lowered.contains(endpoint)) return true;
        }
        return false;
    }

    private static boolean unsafeConstant(Object constant) {
        if (constant instanceof Handle) {
            Handle handle = (Handle) constant;
            return dangerousCall(handle.getOwner(), handle.getName());
        }
        if (constant instanceof ConstantDynamic) {
            ConstantDynamic dynamic = (ConstantDynamic) constant;
            if (unsafeConstant(dynamic.getBootstrapMethod())) return true;
            for (int i = 0; i < dynamic.getBootstrapMethodArgumentCount(); i++) {
                if (unsafeConstant(dynamic.getBootstrapMethodArgument(i))) return true;
            }
        }
        return false;
    }

    private static void replaceBody(MethodNode method, boolean emptyInitializer) {
        method.instructions.clear();
        method.tryCatchBlocks.clear();
        if (method.localVariables != null) method.localVariables.clear();
        method.visibleLocalVariableAnnotations = null;
        method.invisibleLocalVariableAnnotations = null;
        method.maxLocals = (method.access & Opcodes.ACC_STATIC) == 0 ? 1 : 0;
        for (Type argument : Type.getArgumentTypes(method.desc)) {
            method.maxLocals += argument.getSize();
        }
        if (emptyInitializer) {
            method.instructions.add(new InsnNode(Opcodes.RETURN));
            method.maxStack = 0;
            return;
        }
        method.instructions.add(new TypeInsnNode(Opcodes.NEW, "java/lang/UnsupportedOperationException"));
        method.instructions.add(new InsnNode(Opcodes.DUP));
        method.instructions.add(new LdcInsnNode(REMOVED));
        method.instructions.add(new MethodInsnNode(Opcodes.INVOKESPECIAL,
            "java/lang/UnsupportedOperationException", "<init>", "(Ljava/lang/String;)V", false));
        method.instructions.add(new InsnNode(Opcodes.ATHROW));
        method.maxStack = 3;
    }

    private static byte[] checkedBytes(ClassNode node) throws Exception {
        ClassWriter writer = new ClassWriter(ClassWriter.COMPUTE_MAXS);
        node.accept(new CheckClassAdapter(writer, false));
        byte[] data = writer.toByteArray();
        ClassNode checked = new ClassNode();
        new ClassReader(data).accept(checked, 0);
        for (MethodNode method : checked.methods) {
            if ((method.access & Opcodes.ACC_NATIVE) != 0) {
                throw new IOException("Native method survived cleanup");
            }
            if ((method.access & Opcodes.ACC_ABSTRACT) == 0) {
                // BasicVerifier does no class loading or execution of target code.
                new Analyzer<org.objectweb.asm.tree.analysis.BasicValue>(new BasicVerifier())
                    .analyze(checked.name, method);
            }
            for (AbstractInsnNode instruction : method.instructions) {
                if (instruction instanceof MethodInsnNode) {
                    MethodInsnNode call = (MethodInsnNode) instruction;
                    if (dangerousCall(call.owner, call.name)) {
                        throw new IOException("Unsafe invocation survived cleanup");
                    }
                }
                if (instruction instanceof LdcInsnNode) {
                    Object literal = ((LdcInsnNode) instruction).cst;
                    if (unsafeConstant(literal)) throw new IOException("Unsafe method handle survived cleanup");
                    if (literal instanceof String && endpoint((String) literal)) {
                        throw new IOException("Remote endpoint survived cleanup");
                    }
                }
            }
        }
        return data;
    }

    private static String hex(byte[] bytes) {
        StringBuilder text = new StringBuilder();
        for (byte value : bytes) text.append(String.format("%02x", value & 255));
        return text.toString();
    }

    private Sanitize() { }
}
