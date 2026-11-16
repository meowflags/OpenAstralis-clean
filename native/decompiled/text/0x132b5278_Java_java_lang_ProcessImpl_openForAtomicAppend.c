// Java_java_lang_ProcessImpl_openForAtomicAppend
// rva 0x132b5278  size 141  section .text  group text
// window base 0x1932b5278: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_lang_ProcessImpl_openForAtomicAppend(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi

  v6 = sub_1932B9260(a1: a4, a2, a3: a5, a4, a5: 0, a6);
  if ( v6 == 0 )
    return -1;
  v9 = MEMORY[0x797B0](a1: v7, a2: v6, a3: 1179924, a4: v6, a5: 3, a6: 0);
  MEMORY[0x79AE0](a1: v11, a2: v12, a3: v10, a4: v12);
  if ( v9 == -1 )
    sub_1932B1580(a1: v13, a2: v14, a3: 544408, a4: v13);
  return v9;
}
