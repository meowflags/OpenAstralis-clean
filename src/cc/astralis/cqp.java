package cc.astralis;

import java.awt.Color;


public class cqp {
   private static final long a = 96545418076514L;
   private static final String b;

   public static String gdu() {
      long a = cqp.a ^ 51023890517648L;
      Color ax = ClientSetup.gqy().deo();
      float axx = ax.getRed() / 255.0F;
      float axxx = ax.getGreen() / 255.0F;
      float axxxx = ax.getBlue() / 255.0F;
      float axxxxx = 2.0F;
      return b.formatted(axx, axxx, axxxx, axxxxx);
   }

   static {
      b = "    #version 150\n    uniform sampler2D InSampler;\n    in vec2 texCoord;\n    in vec2 sampleStep;\n    out vec4 fragColor;\n\n    // Improved Gaussian function with normalization\n    float gaussian(float x, float sigma) {\n        return exp(-(x * x) / (2.0 * sigma * sigma)) / (sqrt(2.0 * 3.14159265359) * sigma);\n    }\n\n    // Two-pass blur for better performance and quality\n    vec4 horizontalBlur(float radius, float sigma) {\n        vec4 result = vec4(0.0);\n        float totalWeight = 0.0;\n\n        for (float x = -radius; x <= radius; x += 1.0) {\n            float weight = gaussian(x, sigma);\n            vec2 sampleCoord = texCoord + vec2(sampleStep.x * x, 0.0);\n            result += texture(InSampler, sampleCoord) * weight;\n            totalWeight += weight;\n        }\n\n        return result / totalWeight;\n    }\n\n    vec4 verticalBlur(float radius, float sigma, vec4 horizontalResult) {\n        vec4 result = vec4(0.0);\n        float totalWeight = 0.0;\n\n        for (float y = -radius; y <= radius; y += 1.0) {\n            float weight = gaussian(y, sigma);\n            vec2 sampleCoord = texCoord + vec2(0.0, sampleStep.y * y);\n            result += texture(InSampler, sampleCoord) * weight;\n            totalWeight += weight;\n        }\n\n        // Blend between horizontal and vertical passes for smoother results\n        return mix(result / totalWeight, horizontalResult, 0.5);\n    }\n\n    void main() {\n        float radius = 8.0;  // Increased radius for better glow effect\n        float sigma = radius / 2.0;  // Auto-calculated sigma based on radius\n\n        // Perform two-pass blur\n        vec4 horizontalBlurred = horizontalBlur(radius, sigma);\n        vec4 blurred = verticalBlur(radius, sigma, horizontalBlurred);\n\n        // Color and intensity\n        vec3 glowColor = vec3(%s, %s, %s);\n        float glowStrength = blurred.a * %s;\n\n        // Optional: Add some edge enhancement\n        vec4 original = texture(InSampler, texCoord);\n        float edgeFactor = smoothstep(0.3, 0.7, original.a);\n\n        // Combine glow with original (optional)\n        fragColor = vec4(glowColor * glowStrength, glowStrength);\n\n        // Alternative: Additive blending for stronger glow\n        // fragColor = vec4(glowColor * glowStrength, glowStrength) + original;\n    }\n";
   }

}
