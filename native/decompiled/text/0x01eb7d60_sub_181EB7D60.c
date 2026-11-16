// sub_181EB7D60
// rva 0x01eb7d60  size 230  section .text  group text
// window base 0x181eb7d60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB7D60(__int64 a1, __int64 i, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rbx
  int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r9
  char v15; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v9 + 8) )
  {
    sub_181EB84E0(a1, a2: i, a3, a4, a5, a6, a7: v15);
  }
  else if ( a3 != v8 )
  {
    v10 = 2 * *(__int16 *)(a3 + 64);
    if ( v10 < 1 )
    {
LABEL_14:
      v12 = (unsigned int)a1;
      a1 = a6;
      goto LABEL_11;
    }
    v6 = v8 + 8LL * *(unsigned int *)(a3 + 16);
    v11 = *(__int16 *)(a3 + 62);
    a1 = *(unsigned int *)(v6 + 4 * v11 + 12);
    v7 = *(__int16 *)(a3 + 62);
    if ( (_DWORD)a1 != (_DWORD)a5 )
    {
      for ( i = 2; v10 > (int)i; i = (unsigned int)(i + 2) )
      {
        LODWORD(a1) = 4 * (v7 + i) + 12;
        a6 = *(_DWORD *)(v6 + (int)a1);
        if ( a6 == (_DWORD)a5 )
          break;
      }
      goto LABEL_14;
    }
    v12 = (unsigned int)(4 * v11 + 12);
    i = 0;
LABEL_11:
    v13 = *(int *)(v6 + 4 * (v7 + (int)i + 1) + 12);
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280](a1, a2: i, a3, a4: v12, a5, a6: v13);
    return v13;
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
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_181EB7E60();
}
