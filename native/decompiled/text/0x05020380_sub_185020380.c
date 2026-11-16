// sub_185020380
// rva 0x05020380  size 427  section .text  group text
// window base 0x185020380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185020380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+10h] [rbp-28h]
  __int64 v16; // [rsp+18h] [rbp-20h]
  unsigned int v17; // [rsp+24h] [rbp-14h]
  int v18; // [rsp+28h] [rbp-10h]
  unsigned int v19; // [rsp+2Ch] [rbp-Ch]
  unsigned int v20; // [rsp+30h] [rbp-8h]
  unsigned int v21; // [rsp+34h] [rbp-4h]

  v16 = a3;
  v15 = a5;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v5 )
  {
    v7 = *(_DWORD *)(a5 + 8);
    if ( v7 == 0 )
    {
      if ( *(int *)(v6 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return 0;
    }
    if ( a3 == v5 )
    {
LABEL_30:
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
      return sub_185020540();
    }
    v8 = *(_DWORD *)(a3 + 8) >> 1;
    if ( v7 > v8 )
    {
      if ( *(int *)(v6 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return 0xFFFFFFFFLL;
    }
    else
    {
      if ( v7 == 1 )
      {
        result = MEMORY[0x1828310E0](a1: 0, a2: *(unsigned __int8 *)(a5 + 12), a3, a4, a5: 12);
      }
      else if ( (int)v8 <= (int)(v7 - 2) )
      {
        result = 0xFFFFFFFFLL;
      }
      else
      {
        v21 = *(_DWORD *)(a5 + 8);
        v9 = *(unsigned __int8 *)(a5 + 12);
        v20 = v9;
        v10 = *(unsigned __int8 *)(a5 + 13);
        v19 = v10;
        v18 = v8 - (v7 - 2);
        v11 = 0;
        while ( 1 )
        {
          result = MEMORY[0x182832D20](a1: v11, a2: v9, a3, a4: v10, a5: 12);
          if ( (int)result < 0 )
          {
            result = 0xFFFFFFFFLL;
            goto LABEL_21;
          }
          if ( v21 == 2 )
            goto LABEL_21;
          v17 = result;
          if ( (unsigned int)MEMORY[0x18282FB40](
                               a1: 12,
                               a2: v21,
                               a3: v16,
                               a4: v13,
                               a5: 2LL * (unsigned int)result + 12,
                               a6: v15) != 0 )
          {
            result = v17;
            goto LABEL_21;
          }
          if ( v18 <= (int)(v17 + 1) )
            break;
          v11 = v17 + 1;
          v10 = v19;
          v9 = v20;
          a3 = v16;
        }
        result = 0xFFFFFFFFLL;
      }
LABEL_21:
      if ( *(int *)(v6 + 16) <= 0 )
        return MEMORY[0x18277F280]();
    }
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_30;
}
