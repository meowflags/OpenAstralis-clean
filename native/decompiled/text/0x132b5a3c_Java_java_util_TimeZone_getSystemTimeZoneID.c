// Java_java_util_TimeZone_getSystemTimeZoneID
// rva 0x132b5a3c  size 144  section .text  group text
// window base 0x1932b5a3c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_TimeZone_getSystemTimeZoneID(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // edx
  int v8; // edi
  int v9; // esi
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r14
  _BYTE *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // r8d
  int v17; // r9d
  _BYTE *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi

  v5 = 0;
  if ( a5 == 0 )
    return 0;
  v6 = sub_1932B0228(a1: a5, a2: a4, a3: a5, a4, a5: 0);
  v12 = v6;
  if ( v6 == 0 )
    return 0;
  v13 = (_BYTE *)sub_1932B7FF0(a1: v8, a2: v9, a3: v7, a4: v6, a5: v10, a6: v11);
  v18 = v13;
  if ( v13 != nullptr )
  {
    v5 = JNU_NewStringPlatform(a1: v14, a2: v15, a3: v13, a4: v15, a5: v16, a6: v17);
    MEMORY[0x79AE0](a1: v20, a2: v21, a3: v19, a4: v18);
  }
  sub_1932B110C(a1: v14, a2: v15, a3: v14, a4: v15, a5: v12);
  return v5;
}
