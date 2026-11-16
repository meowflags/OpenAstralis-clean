// sub_181ED8100
// rva 0x01ed8100  size 462  section .text  group text
// window base 0x181ed8100: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED8100(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int16 v8; // ax
  __int16 v9; // bx
  __int64 result; // rax
  int v11; // ebx
  BOOL v12; // eax
  int v13; // eax
  int i; // ebp
  char v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]
  int v18; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    v18 = a6;
    v16 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v15);
LABEL_28:
    v18 = a6;
    MEMORY[0x182771080]();
    goto LABEL_29;
  }
  if ( (a6 & 4) == 0 )
  {
    result = a3;
    v18 = a6;
    v17 = a5;
    v16 = a3;
    goto LABEL_8;
  }
  if ( a3 == v6 )
    goto LABEL_28;
  if ( a5 == v6 )
  {
LABEL_29:
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
    return sub_181ED82E0();
  }
  v8 = *(_WORD *)(a5 + 62);
  v9 = *(_WORD *)(a3 + 60);
  a4 = v6 + 8LL * *(unsigned int *)(a5 + 16);
  if ( v9 < 0 )
  {
    v11 = *(_DWORD *)(a3 + 40);
    if ( v11 >= 0x10000 )
    {
      v18 = a6;
      v16 = a3;
      a3 = (unsigned int)(2 * *(__int16 *)(a5 + 64));
      for ( i = 0; ; i += 2 )
      {
        if ( (int)a3 <= i )
        {
          result = v16;
          v17 = a5;
          goto LABEL_8;
        }
        a2 = 4 * (v8 + i) + 12;
        if ( v11 == *(_DWORD *)(a4 + a2) )
          break;
      }
      a3 = v16;
      goto LABEL_15;
    }
    a2 = *(_DWORD *)(a5 + 44) & ((unsigned int)v11 >> HIBYTE(*(_DWORD *)(a5 + 44)));
    a4 = (unsigned __int16)*(_DWORD *)(v6
                                     + 8LL * *(unsigned int *)(a5 + 20)
                                     + (int)(4
                                           * (*(_DWORD *)(a5 + 44) & ((unsigned int)v11 >> HIBYTE(*(_DWORD *)(a5 + 44))))
                                           + 12));
    v12 = v11 == a4;
  }
  else
  {
    if ( v8 <= v9 )
    {
      result = a3;
      v18 = a6;
      v17 = a5;
      v16 = a3;
      goto LABEL_8;
    }
    v13 = *(_DWORD *)(a4 + 4LL * (unsigned __int16)v9 + 12);
    a4 = *(unsigned int *)(a3 + 36);
    v12 = a4 == v13;
  }
  if ( v12 )
  {
    v18 = a6;
LABEL_15:
    v17 = a5;
    v16 = a3;
    if ( (unsigned int)sub_181ED82E0() != 0 )
      result = v16;
    else
      result = v17;
    goto LABEL_8;
  }
  result = a3;
  v18 = a6;
  v17 = a5;
  v16 = a3;
LABEL_8:
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280](a1, a2, a3, a4, a5: v17);
  return result;
}
