// sub_181E60980
// rva 0x01e60980  size 198  section .text  group text
// window base 0x181e60980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E60980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+10h] [rbp-28h]
  int v15; // [rsp+1Ch] [rbp-1Ch]
  __int64 v17; // [rsp+28h] [rbp-10h]
  unsigned int v18; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    v18 = a6;
    v15 = a5;
    v14 = a3;
    MEMORY[0x181EB84E0]();
LABEL_8:
    MEMORY[0x18276FC00](a1: v9, a2: v10, a3: v11, a4: v14, a5: v6 + 34096120, a6: v18);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181E60A60();
  }
  v18 = a6;
  v14 = a3;
  v17 = *(_QWORD *)(v6 + 376650688);
  v15 = a5;
  v8 = *(unsigned int *)MEMORY[0x1815A85E0](a1, a2, a3: v17);
  v11 = v6 + 8 * v8;
  if ( (_DWORD)v8 != 0 )
  {
    v8 = *(_DWORD *)(v6 + 8 * v8) >> 3;
    if ( (_DWORD)v8 != 4262015 )
      goto LABEL_8;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v9, a2: v10, a3: v8, a4: v17, a5: v11);
  return v11;
}
