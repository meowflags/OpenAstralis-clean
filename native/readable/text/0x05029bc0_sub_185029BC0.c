// sub_5029BC0
// rva 0x05029bc0  size 126  section .text  group text
// window base 0x185029bc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5029BC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  _QWORD v9[5]; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+2Ch] [rbp-Ch]
  int v11; // [rsp+30h] [rbp-8h]
  int v12; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)v9 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v9[4] = a3;
  if ( a5 == v6 )
    JUMPOUT(0x30A044BDDLL);
  if ( a1 == v6 )
    JUMPOUT(0x30A044BE7LL);
  v9[3] = a5;
  v12 = a6;
  v9[2] = a1;
  v11 = a2;
  v10 = a4;
  result = sub_2836280(a1, a2, a3: a5 + 2LL * a6 + 12, a4, a5: a1 + (int)a2 + 12LL, a6: (unsigned int)a4);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
