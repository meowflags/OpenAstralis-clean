// sub_185021480
// rva 0x05021480  size 235  section .text  group text
// window base 0x185021480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185021480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_21;
  }
  if ( HIWORD(a5) >= 0x11u )
  {
LABEL_3:
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 0xFFFFFFFFLL;
  }
  v9 = (unsigned __int16)((a5 >> 10) - 10304);
  v10 = (a5 & 0x3FF) + 56320;
  if ( a3 == v6 )
  {
LABEL_21:
    MEMORY[0x182771080](a1, a2, a3, a4: v9);
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
    return sub_185021580();
  }
  if ( (*(_DWORD *)(a3 + 8) >> 1) - 2 < a6 )
    JUMPOUT(0x30A03C4E6LL);
  v11 = a6;
  if ( a6 < 0 )
    goto LABEL_3;
  if ( (unsigned __int16)(a5 >> 10) - 10304 != *(_WORD *)(a3 + (unsigned int)(2 * a6) + 12)
    || (_DWORD)(v12 = *(unsigned __int16 *)(a3 + (unsigned int)(2 * (a6 + 1)) + 12)) != v10 )
  {
    v11 = a6 - 1;
    while ( v11 >= 0 )
    {
      a1 = (unsigned int)(v11 - 1);
      if ( (unsigned __int16)(a5 >> 10) - 10304 == *(_WORD *)(a3 + 2 * v11 + 12) )
      {
        v12 = *(unsigned __int16 *)(a3 + 2 * (v11 + 1) + 12);
        if ( (_DWORD)v12 == v10 )
          goto LABEL_17;
        --v11;
      }
      else
      {
        --v11;
      }
    }
    goto LABEL_3;
  }
LABEL_17:
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280](a1, a2: v12, a3, a4: v9);
  return (unsigned int)v11;
}
