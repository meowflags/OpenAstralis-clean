// sub_1815A5420
// rva 0x015a5420  size 551  section .text  group text
// window base 0x1815a5420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A5420(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  _DWORD *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r8
  char v28; // [rsp+0h] [rbp-48h] BYREF
  __int64 v29; // [rsp+10h] [rbp-38h]
  unsigned int v30; // [rsp+1Ch] [rbp-2Ch]
  __int64 v31; // [rsp+20h] [rbp-28h]
  __int64 v32; // [rsp+28h] [rbp-20h]
  _DWORD *v33; // [rsp+30h] [rbp-18h]
  __int64 v34; // [rsp+38h] [rbp-10h]
  int v35; // [rsp+40h] [rbp-8h]
  unsigned int v36; // [rsp+44h] [rbp-4h]

  v34 = a3;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v8 + 8) )
  {
    v32 = a5;
    v15 = MEMORY[0x181EB84E0]();
LABEL_32:
    v31 = v15;
    v15 = MEMORY[0x182771080]();
    goto LABEL_33;
  }
  if ( a5 == v7 )
    v9 = (_DWORD *)(v7 + 376614008);
  else
    v9 = (_DWORD *)a5;
  v33 = v9;
  v10 = *(_DWORD *)((char *)v9 + *(int *)(v7 + 8LL * (*v9 >> 3) + 52));
  v32 = a5;
  if ( v10 == 0 )
  {
    v10 = MEMORY[0x181ED7320](a1, a2, a3: v33);
    a3 = v34;
  }
  v11 = ((v10 ^ (v10 >> 12) ^ (v10 >> 20)) >> 4)
      ^ v10
      ^ (v10 >> 12)
      ^ (v10 >> 20)
      ^ ((v10 ^ (v10 >> 12) ^ (v10 >> 20)) >> 7);
  v36 = v11;
  LODWORD(v6) = a3;
  sub_1815A4C20(a1, a2, a3, a4: v11, a5, a6, a7: v28);
  v14 = *(unsigned int *)(v34 + 12);
  v15 = v7 + 8 * v14;
  if ( (_DWORD)v14 == 0 )
    goto LABEL_32;
  v16 = *(unsigned int *)(v7 + 8 * v14 + 8);
  v17 = *(_DWORD *)(v7 + 8 * v14 + 8) - 1;
  v6 = v17 & v36;
  if ( (unsigned int)v16 <= (unsigned int)v6 )
  {
LABEL_33:
    v35 = v6;
    v31 = v15;
    MEMORY[0x182771220](a1: v12, a2: v13, a3: (unsigned int)v6, a4: v16, a5: (unsigned int)v16);
    goto LABEL_34;
  }
  v18 = *(unsigned int *)(v15 + 4 * v6 + 12);
  if ( (_DWORD)v18 != 0 )
  {
    v19 = v36;
    if ( v36 != *(_DWORD *)(v7 + 8 * v18 + 28) )
    {
      v35 = v17 & v36;
      v31 = v15;
      goto LABEL_11;
    }
    v30 = *(_DWORD *)(v15 + 4 * v6 + 12);
    v35 = v17 & v36;
    v31 = v15;
    v29 = v7 + 8 * v18;
    if ( (unsigned int)MEMORY[0x181EBE3A0](a1: v12, a2: v36, a3: v29, a4: v18, a5: v33) == 0 )
    {
      v18 = v30;
LABEL_11:
      v20 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v18 + 24);
      while ( v20 != v7 )
      {
        if ( v36 == *(_DWORD *)(v20 + 28) )
        {
          v29 = v20;
          if ( (unsigned int)MEMORY[0x181EBE3A0](a1: v12, a2: v19, a3: v20, a4: v36, a5: v33) != 0 )
            goto LABEL_26;
          v20 = v29;
        }
        if ( *(int *)(v8 + 16) <= 0 )
          v20 = MEMORY[0x18277F280]();
        else
          v20 = v7 + 8LL * *(unsigned int *)(v20 + 24);
      }
      goto LABEL_21;
    }
LABEL_26:
    v22 = v29;
    if ( v29 != v7 )
    {
      if ( *(int *)(v8 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v7 + 8LL * *(unsigned int *)(v22 + 20);
    }
LABEL_34:
    MEMORY[0x182771080](a1: v12, a2: v19, a3: v31, a4: v36, a5: v32);
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
    return sub_1815A5660(a1: v25, a2: v26, a3: v23, a4: v24, a5: v27);
  }
  v35 = v17 & v36;
  v31 = v15;
LABEL_21:
  if ( *(int *)(v8 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v7;
}
