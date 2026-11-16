// sub_18501FD60
// rva 0x0501fd60  size 422  section .text  group text
// window base 0x18501fd60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501FD60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int i; // ebx
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+10h] [rbp-28h]
  __int64 v18; // [rsp+18h] [rbp-20h]
  int v19; // [rsp+24h] [rbp-14h]
  int v20; // [rsp+28h] [rbp-10h]
  int v21; // [rsp+2Ch] [rbp-Ch]
  int v22; // [rsp+30h] [rbp-8h]
  unsigned int v23; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    v23 = a2;
    v22 = a5;
    v11 = MEMORY[0x181EB84E0]();
    goto LABEL_19;
  }
  if ( a6 <= (int)a5 )
  {
    v23 = a2;
    v17 = a1;
    v22 = a5;
    v18 = a3;
    goto LABEL_4;
  }
  v11 = a6 - a5;
  if ( a3 == v6 )
  {
LABEL_19:
    v23 = a2;
    v22 = a5;
    v18 = a3;
    MEMORY[0x182771080](a1, a2, a3: v11);
LABEL_20:
    MEMORY[0x182771080](a1: v9, a2: v8, a3: v13);
    goto LABEL_21;
  }
  v23 = a2;
  v17 = a1;
  v21 = a6;
  v12 = *(_DWORD *)(a3 + 8) >> 1;
  v18 = a3;
  v22 = a5;
  v20 = a6 - a5;
  v19 = v12;
  MEMORY[0x186329C40](a1: v6 + 376643464, a2, a3: a5, a4: v12, a5: v11, a6: (unsigned int)v12);
  a6 = v21;
LABEL_4:
  if ( a6 <= v22 )
  {
    v8 = v23;
    v9 = v17;
    result = v18;
LABEL_6:
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v9, a2: v8);
    return result;
  }
  v9 = v17;
  result = v18;
  v13 = (unsigned int)*(__int16 *)(v18 + 2 * v22 + 12);
  v8 = v23 + 1;
  if ( v17 == v6 )
    goto LABEL_20;
  v14 = *(unsigned int *)(v17 + 8);
  if ( (unsigned int)v14 > v23 )
  {
    *(_WORD *)(v17 + 2LL * v23 + 12) = *(_WORD *)(v18 + 2 * v22 + 12);
    for ( i = v22 + 1; a6 > i; ++i )
    {
      if ( (unsigned int)v14 <= (unsigned int)v8 )
        goto LABEL_22;
      *(_WORD *)(v9 + 2 * v8 + 12) = *(_WORD *)(result + 2 * i + 12);
      v8 = (unsigned int)(v8 + 1);
    }
    goto LABEL_6;
  }
LABEL_21:
  MEMORY[0x182771220](a1: v9, a2: v8, a3: v23, a4: v14, a5: (unsigned int)v14);
LABEL_22:
  MEMORY[0x182771220](a1: v9, a2: v8, a3: (unsigned int)v8, a4: v14, a5: (unsigned int)v14);
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
  return sub_18501FF20();
}
