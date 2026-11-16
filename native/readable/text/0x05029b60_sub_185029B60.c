// sub_5029B60
// rva 0x05029b60  size 81  section .text  group text
// window base 0x185029b60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5029B60(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-38h] BYREF
  int v9; // [rsp+2Ch] [rbp-Ch]
  unsigned int v10; // [rsp+30h] [rbp-8h]
  unsigned int v11; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v8[4] = a3;
  v8[3] = a5;
  v11 = a6;
  v8[2] = a1;
  v10 = a2;
  v9 = a4;
  result = sub_4FEE200(a1: a2, a2: (unsigned int)a4, a3: a5, a4, a5: a6, a6: a1);
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280();
  return result;
}
