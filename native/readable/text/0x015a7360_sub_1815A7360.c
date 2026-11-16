// sub_15A7360
// rva 0x015a7360  size 86  section .text  group text
// window base 0x1815a7360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A7360(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v6 + 8) )
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
    return sub_15A73C0(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15, a6: v16);
  }
  else if ( *(_DWORD *)(a3 + 36) != 0 )
  {
    v18 = a3;
    sub_15A4C20(a1, a2, a3, a4, a5, a6, a7: v17);
    v9 = v18;
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280(a1: v7, a2: v8, a3: v18);
    return *(unsigned int *)(v9 + 36);
  }
  else
  {
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
}
