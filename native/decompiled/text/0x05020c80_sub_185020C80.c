// sub_185020C80
// rva 0x05020c80  size 373  section .text  group text
// window base 0x185020c80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185020C80(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+8h] [rbp-20h]
  __int64 v21; // [rsp+10h] [rbp-18h]
  unsigned int v22; // [rsp+18h] [rbp-10h]
  unsigned int v23; // [rsp+1Ch] [rbp-Ch]
  unsigned int v24; // [rsp+20h] [rbp-8h]
  unsigned int v25; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    v24 = a1;
    v25 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a6 != v7 )
  {
    v25 = a5;
    v21 = a3;
    v9 = *(_DWORD *)(a6 + 8) >> 1;
    v20 = a6;
    v24 = a1;
    v23 = v9;
    v22 = a2;
    MEMORY[0x186329C40](a1: v7 + 376643464, a2, a3: a1, a4: v7 + 376643464, a5: (unsigned int)a2, a6: v9);
    if ( (int)v22 < 1 )
    {
      v16 = 0;
      v14 = v24;
      v18 = v25;
      v17 = v22;
      v15 = v20;
      result = v21;
LABEL_12:
      if ( *(int *)(v8 + 16) <= 0 )
        return MEMORY[0x18277F280](a1: v14, a2: v17, a3: v10, a4: v16, a5: v18, a6: v15);
      return result;
    }
    result = v21;
    v13 = v25 + 1;
    v14 = v24 + 1;
    if ( v21 == v7 )
      goto LABEL_18;
    v6 = *(_DWORD *)(v21 + 8);
    if ( v6 > v25 )
    {
      v15 = v20;
      *(_WORD *)(v20 + (int)(2 * v24) + 12) = *(unsigned __int8 *)(v21 + v25 + 12);
      v10 = (unsigned int)v13;
      v16 = 1;
      v17 = v22;
      while ( (int)v17 > (int)v16 )
      {
        if ( v6 <= (unsigned int)v10 )
          goto LABEL_20;
        *(_WORD *)(v15 + 2 * (int)v14 + 12) = *(unsigned __int8 *)(result + v10 + 12);
        v16 = (unsigned int)(v16 + 1);
        v10 = (unsigned int)(v10 + 1);
        v14 = (unsigned int)(v14 + 1);
      }
      v18 = (unsigned int)v10;
      goto LABEL_12;
    }
LABEL_19:
    MEMORY[0x182771220](a1: v14, a2: v22, a3: v25, a4: v13, a5: v6, a6: v20);
LABEL_20:
    MEMORY[0x182771220](a1: v14, a2: v17, a3: v10, a4: v16, a5: v6);
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
    return sub_185020E00();
  }
  v25 = a5;
  MEMORY[0x182771080]();
LABEL_18:
  MEMORY[0x182771080](a1: v14, a2: v22, a3: v10, a4: v13, a5: v11, a6: v20);
  goto LABEL_19;
}
