// sub_18501FF80
// rva 0x0501ff80  size 400  section .text  group text
// window base 0x18501ff80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501FF80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // r9d
  unsigned int v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // r9d
  int v11; // eax
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+8h] [rbp-20h]
  __int64 v17; // [rsp+10h] [rbp-18h]
  unsigned int v18; // [rsp+1Ch] [rbp-Ch]
  int v19; // [rsp+20h] [rbp-8h]
  unsigned int v20; // [rsp+24h] [rbp-4h]

  v17 = a3;
  v16 = a5;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v6 + 8) )
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
LABEL_28:
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
      return sub_185020120();
    }
    v8 = *(_DWORD *)(a3 + 8);
    if ( v7 > v8 )
    {
      if ( *(int *)(v6 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return 0xFFFFFFFFLL;
    }
    else
    {
      v9 = v8 >> 1;
      v10 = v7 >> 1;
      if ( v10 == 1 )
      {
        result = MEMORY[0x1828310E0](a1: 0, a2: *(unsigned __int16 *)(a5 + 12), a3, a4, a5: 12, a6: v9);
      }
      else
      {
        v20 = v10;
        v11 = v9 - v10 + 2;
        v19 = v11;
        v12 = 0;
        while ( 1 )
        {
          if ( v11 <= (int)v12 )
          {
            result = 0xFFFFFFFFLL;
            goto LABEL_20;
          }
          result = MEMORY[0x182832D20](
                     a1: v12,
                     a2: *(unsigned __int16 *)(a5 + 12),
                     a3,
                     a4: *(unsigned __int16 *)(a5 + 14),
                     a5: 12,
                     a6: (unsigned int)v11);
          if ( (int)result < 0 )
          {
            result = 0xFFFFFFFFLL;
            goto LABEL_20;
          }
          if ( v20 == 2 )
            goto LABEL_20;
          v18 = result;
          if ( (unsigned int)MEMORY[0x18282FBC0](
                               a1: 12,
                               a2: v20,
                               a3: v17,
                               a4: v14,
                               a5: 2LL * (unsigned int)result + 12,
                               a6: v16) != 0 )
            break;
          v12 = v18 + 1;
          v11 = v19;
          a5 = v16;
          a3 = v17;
        }
        result = v18;
      }
LABEL_20:
      if ( *(int *)(v6 + 16) <= 0 )
        return MEMORY[0x18277F280]();
    }
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_28;
}
