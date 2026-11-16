// sub_181E9AD40
// rva 0x01e9ad40  size 117  section .text  group text
// window base 0x181e9ad40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9AD40(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  double v15; // xmm0_8
  char v16; // [rsp+0h] [rbp-18h] BYREF
  __int64 v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    v15 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v16);
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
    return sub_181E9ADC0(a1: v15);
  }
  else
  {
    v17 = v6 + 376612120;
    sub_181EA01E0(a1, a2, a3: v6 + 376654552, a4, a5: v6 + 376612120, a6: 1);
    sub_181EA6700(a1: v9, a2: v10, a3: v6 + 376652784, a4: v8, a5: v17);
    result = sub_181EA01E0(a1: v12, a2: v13, a3: v6 + 376653896, a4: v11, a5: v17, a6: 1);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
