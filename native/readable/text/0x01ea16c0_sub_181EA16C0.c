// sub_1EA16C0
// rva 0x01ea16c0  size 101  section .text  group text
// window base 0x181ea16c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA16C0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  signed __int64 v10[3]; // [rsp+10h] [rbp-28h] BYREF
  _BYTE *v11; // [rsp+28h] [rbp-10h]
  unsigned __int64 v12; // [rsp+30h] [rbp-8h]

  v12 = a3;
  v11 = a5;
  result = sub_1EA3B40();
  if ( result == 0 )
  {
    v9 = v12;
    *v11 = 1;
    v10[2] = (signed __int64)v10;
    result = sub_1E983E0(a1: v10, a2: v8, a3: v5 + 376656584, a4: v9, a5: v9, a6: v9);
    *(_QWORD *)(v6 + 160) += v12;
  }
  return result;
}
