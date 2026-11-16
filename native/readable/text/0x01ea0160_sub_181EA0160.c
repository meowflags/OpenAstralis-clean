// sub_1EA0160
// rva 0x01ea0160  size 126  section .text  group text
// window base 0x181ea0160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA0160(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned int v10; // eax
  double v11; // xmm0_8
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+8h] [rbp-20h]
  __int64 v21; // [rsp+10h] [rbp-18h]
  __int64 v22; // [rsp+18h] [rbp-10h]
  unsigned int v23; // [rsp+24h] [rbp-4h]

  v22 = a3;
  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v19);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EA01E0(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18);
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 16);
    v9 = v6 + 8LL * *(unsigned int *)(a3 + 8);
    v10 = *(unsigned __int8 *)(a3 + 52);
    v21 = a5;
    v20 = v9;
    v23 = v10;
    sub_1E98DA0(a1: v10, a2, a3: a5, a4, a5: v8, a6: v9);
    result = sub_1E98F80(a1: v11);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
