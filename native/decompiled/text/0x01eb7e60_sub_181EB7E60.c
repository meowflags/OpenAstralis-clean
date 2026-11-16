// sub_181EB7E60
// rva 0x01eb7e60  size 235  section .text  group text
// window base 0x181eb7e60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB7E60(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rsi
  int i; // eax
  unsigned int v12; // r9d
  char v14; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v14);
  }
  else if ( a5 != v6 )
  {
    v8 = 2 * *(__int16 *)(a5 + 64);
    v9 = v6 + 8LL * *(unsigned int *)(a5 + 16);
    v10 = (unsigned int)*(__int16 *)(a5 + 62);
    if ( v8 < 1 )
    {
LABEL_9:
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280](a1, a2: v10);
      return 0;
    }
    a1 = *(unsigned int *)(v9 + 4LL * *(__int16 *)(a5 + 62) + 12);
    if ( (_DWORD)a1 != a3 )
    {
      for ( i = 2; v8 > i; i += 2 )
      {
        a1 = (unsigned int)(4 * (v10 + i) + 12);
        v12 = *(_DWORD *)(v9 + (int)a1);
        if ( v12 == a3 )
        {
          a1 = v12;
          goto LABEL_13;
        }
      }
      goto LABEL_9;
    }
LABEL_13:
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280](a1, a2: v10);
    return 1;
  }
  MEMORY[0x182771080]();
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
  return sub_181EB7F60();
}
