// Java_java_util_TimeZone_getSystemGMTOffsetID
// rva 0x132b59f0  size 75  section .text  group text
// window base 0x1932b59f0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_TimeZone_getSystemGMTOffsetID(int a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  _BYTE *v6; // rax
  __int64 v7; // rsi
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi

  v6 = (_BYTE *)sub_1932B807C(a1, a2: a4, a3, a4, a5, a6);
  v10 = 0;
  if ( v6 != nullptr )
  {
    v10 = JNU_NewStringPlatform(a1: (__int64)v6, a2: v7, a3: v6, a4: v7, a5: v8, a6: v9);
    MEMORY[0x79AE0](a1: v12, a2: v13, a3: v11, a4: v12);
  }
  return v10;
}
