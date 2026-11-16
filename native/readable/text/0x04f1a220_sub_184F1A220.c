// sub_4F1A220
// rva 0x04f1a220  size 84  section .text  group text
// window base 0x184f1a220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F1A220(int a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 (*v9)(void); // rax
  __int64 result; // rax
  _QWORD v11[4]; // [rsp+0h] [rbp-28h] BYREF
  int v12; // [rsp+20h] [rbp-8h]
  int v13; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v11 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F1A280();
  }
  else
  {
    v9 = (__int64 (*)(void))(v6 + *(_QWORD *)(v7 + 8LL * (*a3 >> 3) + 224));
    v11[3] = a3;
    v11[2] = a5;
    v13 = a6;
    v12 = a1;
    result = v9();
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
