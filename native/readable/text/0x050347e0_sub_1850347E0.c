// sub_50347E0
// rva 0x050347e0  size 81  section .text  group text
// window base 0x1850347e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50347E0(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r14d
  __int64 v7; // r15
  int v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // r9d
  char v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  __int64 v16; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v16 = a3;
  v15 = a5;
  v14 = sub_5034B40(a1, a2, a3, a4: a5, a5, a6, a7: v13);
  sub_5046F80(a1: v9, a2: v10, a3: v14, a4: v8, a5: v6 + 377212680, a6: v11, a7: v13);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return v14;
}
