// sub_185023C20
// rva 0x05023c20  size 467  section .text  group text
// window base 0x185023c20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185023C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // eax
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 i; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  char v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+10h] [rbp-18h]
  unsigned int v23; // [rsp+1Ch] [rbp-Ch]
  unsigned int v24; // [rsp+20h] [rbp-8h]
  int v25; // [rsp+24h] [rbp-4h]

  v22 = a3;
  v25 = a6;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
    v24 = a5;
    v9 = MEMORY[0x181EB84E0]();
    goto LABEL_26;
  }
  v24 = a5;
  v9 = sub_1850217A0(a1, a2, a3: a6, a4, a5, a6, a7: v21);
  if ( (v9 & 0x80000000) != 0 )
  {
LABEL_26:
    MEMORY[0x182770E80](a1: v10, a2: v11, a3: v9);
LABEL_27:
    MEMORY[0x182771080]();
    goto LABEL_28;
  }
  v12 = *(_QWORD *)(v8 + 40);
  v13 = (v9 + 19LL) & 0x1FFFFFFF8LL;
  if ( v13 >= 0x20000 || (v6 = v12 + v13, v12 + v13 > *(_QWORD *)(v8 + 32)) )
  {
    v23 = v9;
    result = MEMORY[0x181EAA840](a1: v10, a2: v11, a3: 34082368, a4: v13, a5: v9);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v6;
    *(_QWORD *)v12 = 34082368;
    *(_DWORD *)(v12 + 8) = v9;
    *(_DWORD *)(v12 + 12) = 0;
    if ( v13 - 16 >= 0x800 )
    {
      v20 = v13 - 16;
      memset((void *)(v12 + 16), 0, v20);
      v10 = v12 + 16 + v20;
      v13 = 0;
    }
    else
    {
      for ( i = 16; v13 > i; i += 8LL )
        *(_QWORD *)(v12 + i) = 0;
    }
    result = v12;
  }
  if ( v25 < 1 )
  {
    v19 = v24;
    v18 = (unsigned int)v25;
    v16 = v22;
LABEL_19:
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v10, a2: v11, a3: v16, a4: v13, a5: v19, a6: v18);
    return result;
  }
  v16 = v22;
  if ( v22 == v7 )
    goto LABEL_27;
  v13 = *(unsigned int *)(v22 + 8);
  if ( (unsigned int)v13 > v24 )
  {
    *(_WORD *)(result + 12) = *(_WORD *)(v22 + 2LL * v24 + 12);
    v6 = v24 + 1;
    v17 = 1;
    v18 = (unsigned int)v25;
    while ( (int)v18 > v17 )
    {
      if ( (unsigned int)v13 <= (unsigned int)v6 )
        goto LABEL_29;
      v11 = 2 * v17;
      *(_WORD *)(result + v11 + 12) = *(_WORD *)(v16 + 2 * v6 + 12);
      v6 = (unsigned int)(v6 + 1);
      ++v17;
    }
    v19 = (unsigned int)v6;
    goto LABEL_19;
  }
LABEL_28:
  MEMORY[0x182771220](a1: v10, a2: v11, a3: v24, a4: v13, a5: (unsigned int)v13);
LABEL_29:
  MEMORY[0x182771220](a1: v10, a2: v16, a3: (unsigned int)v6, a4: v13, a5: (unsigned int)v13);
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
  return sub_185023E00();
}
