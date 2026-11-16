// sub_277F220
// rva 0x0277f220  size 77  section .text  group text
// window base 0x18277f220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277F220(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  _QWORD v16[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v16 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB83C0();
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_277F280(a1: v14, a2: v15, a3: v13);
  }
  else if ( a3 < 1000000 )
  {
    return sub_18277F251(a1, a2, a3, a4, a5, a6, a7, a8);
  }
  else
  {
    v16[2] = a3;
    result = sub_278AE00(a1, a2, a3: 1);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v11, a2: v12, a3: v10);
  }
  return result;
}
