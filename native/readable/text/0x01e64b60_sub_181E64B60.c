// sub_1E64B60
// rva 0x01e64b60  size 125  section .text  group text
// window base 0x181e64b60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E64B60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // eax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h]
  __int64 v14; // [rsp+18h] [rbp-20h]
  __int64 v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+28h] [rbp-10h]
  int v17; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1E64BE0();
  }
  else
  {
    v17 = a6;
    v14 = a5;
    v13 = v6 + 376651168;
    v16 = (int)sub_1E64B00(a1, a2, a3: v6 + 376651168, a4: a5, a5);
    v15 = v17;
    v10 = sub_1E64D20(a1: v8, a2: v9, a3: v13);
    if ( *(int *)(v7 + 16) <= 0 )
      v10 = sub_277F280();
    return v10 * v15 + v16;
  }
}
