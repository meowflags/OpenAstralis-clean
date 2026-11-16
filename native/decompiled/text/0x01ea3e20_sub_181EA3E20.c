// sub_181EA3E20
// rva 0x01ea3e20  size 109  section .text  group text
// window base 0x181ea3e20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA3E20(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  double v9; // xmm0_8
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  char v19; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+10h] [rbp-28h]
  __int64 v21; // [rsp+18h] [rbp-20h]
  __int64 v22; // [rsp+20h] [rbp-18h]
  __int64 v23; // [rsp+28h] [rbp-10h]
  __int64 v24; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v6 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v19);
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
    return sub_181EA3EA0(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18);
  }
  else
  {
    v21 = a6;
    v20 = a3;
    v24 = a5;
    v7 = sub_181EA3E00(a1, a2, a3: a5);
    v8 = *(_QWORD *)(v7 + 24);
    v23 = v7;
    v22 = v8;
    result = sub_181E98F80(a1: v9);
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v12, a2: v13, a3: v11, a4: v22);
  }
  return result;
}
