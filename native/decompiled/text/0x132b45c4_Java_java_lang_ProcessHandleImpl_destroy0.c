// Java_java_lang_ProcessHandleImpl_destroy0
// rva 0x132b45c4  size 105  section .text  group text
// window base 0x1932b45c4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
bool __fastcall Java_java_lang_ProcessHandleImpl_destroy0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  bool v6; // bl
  __int64 v7; // rax
  int v8; // edx
  int v9; // esi
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi

  v6 = false;
  v7 = MEMORY[0x79498](a1, a2: a6, a3: 0, a4: 4161);
  if ( v7 != 0 )
  {
    v12 = sub_1932B4C98(a1: v7, a2: v9, a3: v8, a4: v7, a5: v10, a6: v11);
    if ( v12 == v15 || v15 == 0 )
      v6 = (unsigned int)MEMORY[0x79488](a1: v14, a2: v15, a3: 1, a4: v14) != 0;
    MEMORY[0x797C8](a1: v14, a2: v15, a3: v13, a4: v14);
  }
  return v6;
}
