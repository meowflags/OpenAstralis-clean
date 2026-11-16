// sub_181E91240
// rva 0x01e91240  size 198  section .text  group text
// window base 0x181e91240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E91240(int a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 result; // rax
  char v14; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v14);
LABEL_15:
    MEMORY[0x18276EFE0]();
    goto LABEL_16;
  }
  v8 = *(unsigned int *)(a3 + 12);
  v9 = *(unsigned int *)(a3 + 8);
  v10 = *(_DWORD *)(a3 + 24);
  v11 = v6 + 8 * v9;
  if ( v10 < 32 )
  {
    *(_DWORD *)(a3 + 24) = v10 + 1;
  }
  else
  {
    if ( (_DWORD)v9 == 0 )
    {
LABEL_19:
      MEMORY[0x18276EFE0]();
      goto LABEL_20;
    }
    if ( (unsigned int)v8 >= *(_DWORD *)(v6 + 8 * v9 + 8) )
    {
LABEL_20:
      MEMORY[0x18276F0E0]();
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
      return sub_181E91320();
    }
    *(_QWORD *)(a3 + 16) -= *(_QWORD *)(v11 + 8 * v8 + 16);
  }
  v12 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v12 == 0 )
    goto LABEL_15;
  if ( (unsigned int)v8 >= *(_DWORD *)(v6 + 8 * v12 + 8) )
  {
LABEL_16:
    MEMORY[0x18276F0E0]();
    goto LABEL_17;
  }
  *(_QWORD *)(v6 + 8 * v12 + 8 * v8 + 16) = a5;
  if ( (_DWORD)v9 == 0 )
  {
LABEL_17:
    MEMORY[0x18276EFE0]();
  }
  else if ( (unsigned int)v8 < *(_DWORD *)(v6 + 8 * v9 + 8) )
  {
    *(_QWORD *)(v11 + 8 * v8 + 16) = a6;
    *(_QWORD *)(a3 + 16) += a6;
    result = (_DWORD)v8 + 1 - (((_DWORD)v8 + 1) & 0xFFFFFFE0);
    *(_DWORD *)(a3 + 12) = result;
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x18276F0E0]();
  goto LABEL_19;
}
