// sub_181EA6C40
// rva 0x01ea6c40  size 52  section .text  group text
// window base 0x181ea6c40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA6C40(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v6; // r14d
  __int64 v7; // r15
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // r8d
  int v12; // r9d
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v20);
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
    return sub_181EA6C80(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19);
  }
  else
  {
    sub_181EA3D20(a1, a2, a3, a4, a5, a6);
    result = sub_181E989E0(a1: v9, a2: v10, a3: v6 + 376656584, a4: v8, a5: v11, a6: v12);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
