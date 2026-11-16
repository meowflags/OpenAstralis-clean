// sub_1EA1F60
// rva 0x01ea1f60  size 104  section .text  group text
// window base 0x181ea1f60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA1F60(int a1, int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // r9d
  double v13; // xmm0_8
  __int64 result; // rax
  double v15; // xmm0_8
  char v16; // [rsp+0h] [rbp-18h] BYREF
  __int64 v17; // [rsp+8h] [rbp-10h]
  __int64 v18; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    v15 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v16);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EA1FE0(a1: v15);
  }
  else
  {
    v18 = a5;
    v8 = v6 + 8LL * *(unsigned int *)(a3 + 12);
    v17 = a3;
    sub_1E9A920(a1, a2, a3: v6 + 366696280, a4: v6 + 366696280, a5: v8, a6);
    sub_1E8CFE0(a1: v10, a2: v11, a3: v6 + 376654936, a4: v9, a5: v18, a6: v12);
    result = sub_1EA1FE0(a1: v13);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
