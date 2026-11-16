// sub_1815A5660
// rva 0x015a5660  size 496  section .text  group text
// window base 0x1815a5660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A5660(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  _DWORD *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rdx
  char v23; // [rsp+0h] [rbp-48h] BYREF
  __int64 v24; // [rsp+10h] [rbp-38h]
  unsigned int v25; // [rsp+1Ch] [rbp-2Ch]
  __int64 v26; // [rsp+20h] [rbp-28h]
  __int64 v27; // [rsp+28h] [rbp-20h]
  _DWORD *v28; // [rsp+30h] [rbp-18h]
  __int64 v29; // [rsp+38h] [rbp-10h]
  int v30; // [rsp+40h] [rbp-8h]
  unsigned int v31; // [rsp+44h] [rbp-4h]

  v29 = a3;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v8 + 8) )
  {
    v27 = a5;
    v15 = MEMORY[0x181EB84E0]();
LABEL_30:
    v26 = v15;
    v15 = MEMORY[0x182771080]();
    goto LABEL_31;
  }
  if ( a5 == v7 )
    v9 = (_DWORD *)(v7 + 376614008);
  else
    v9 = (_DWORD *)a5;
  v28 = v9;
  v10 = *(_DWORD *)((char *)v9 + *(int *)(v7 + 8LL * (*v9 >> 3) + 52));
  v27 = a5;
  if ( v10 == 0 )
  {
    v10 = MEMORY[0x181ED7320](a1, a2, a3: v28);
    a3 = v29;
  }
  v11 = ((v10 ^ (v10 >> 12) ^ (v10 >> 20)) >> 4)
      ^ v10
      ^ (v10 >> 12)
      ^ (v10 >> 20)
      ^ ((v10 ^ (v10 >> 12) ^ (v10 >> 20)) >> 7);
  v31 = v11;
  LODWORD(v6) = a3;
  sub_1815A4C20(a1, a2, a3, a4: v11, a5, a6, a7: v23);
  v13 = v29;
  v14 = *(unsigned int *)(v29 + 12);
  v15 = v7 + 8 * v14;
  if ( (_DWORD)v14 == 0 )
    goto LABEL_30;
  v16 = *(unsigned int *)(v7 + 8 * v14 + 8);
  v17 = *(_DWORD *)(v7 + 8 * v14 + 8) - 1;
  v6 = v17 & v31;
  if ( (unsigned int)v16 <= (unsigned int)v6 )
  {
LABEL_31:
    MEMORY[0x182771220](a1: v13, a2: v15, a3: (unsigned int)v6, a4: v16, a5: (unsigned int)v16, a6: v27);
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
    return sub_1815A5860();
  }
  v18 = *(unsigned int *)(v15 + 4 * v6 + 12);
  v19 = v7 + 8 * v18;
  if ( (_DWORD)v18 == 0 )
  {
    v30 = v17 & v31;
    v26 = v15;
    goto LABEL_21;
  }
  v20 = v31;
  if ( v31 == *(_DWORD *)(v7 + 8 * v18 + 28) )
  {
    v25 = *(_DWORD *)(v15 + 4 * v6 + 12);
    v30 = v17 & v31;
    v26 = v15;
    v24 = v7 + 8 * v18;
    if ( (unsigned int)MEMORY[0x181EBE3A0](a1: v12, a2: v31, a3: v24, a4: v18, a5: v28) != 0 )
    {
      v19 = v24;
      goto LABEL_21;
    }
    v18 = v25;
  }
  else
  {
    v30 = v17 & v31;
    v26 = v15;
  }
  v21 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v18 + 24);
  while ( 1 )
  {
    if ( v21 == v7 )
    {
      v19 = v21;
      goto LABEL_21;
    }
    if ( v31 == *(_DWORD *)(v21 + 28) )
      break;
LABEL_14:
    if ( *(int *)(v8 + 16) <= 0 )
      v21 = MEMORY[0x18277F280]();
    else
      v21 = v7 + 8LL * *(unsigned int *)(v21 + 24);
  }
  v24 = v21;
  if ( (unsigned int)MEMORY[0x181EBE3A0](a1: v12, a2: v20, a3: v21, a4: v31, a5: v28) == 0 )
  {
    v21 = v24;
    goto LABEL_14;
  }
  v19 = v24;
LABEL_21:
  if ( *(int *)(v8 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v19;
}
