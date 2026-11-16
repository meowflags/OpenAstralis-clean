// sub_181ED3660
// rva 0x01ed3660  size 485  section .text  group text
// window base 0x181ed3660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED3660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  char v25; // [rsp+0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+8h] [rbp-20h]
  _DWORD *v27; // [rsp+10h] [rbp-18h]
  _DWORD *v28; // [rsp+18h] [rbp-10h]
  unsigned int v29; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v8 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v25);
LABEL_16:
    MEMORY[0x182771080]();
LABEL_17:
    v20 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v20 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v20 = sub_181EAA920(a1: v11, a2: v12, a3: 34090048);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v20 + 40;
      *(_DWORD *)v20 = 34090048;
      *(_DWORD *)(v20 + 4) = 0;
      *(_QWORD *)(v20 + 8) = 0;
      *(_QWORD *)(v20 + 16) = 0;
      *(_QWORD *)(v20 + 24) = 0;
      *(_QWORD *)(v20 + 32) = 0;
    }
    *(_DWORD *)(v20 + 20) = 46923644;
    *(_DWORD *)(v20 + 16) = v7[93585974];
    *(_DWORD *)(v20 + 12) = (unsigned __int64)(v20 - (_QWORD)v7) >> 3;
    v26 = v20;
    MEMORY[0x18503B9A0](a1: v11, a2: v12, a3: v20, a4: v13, a5: 0);
    v24 = v26;
    *(_DWORD *)(v26 + 8) = 45798767;
    if ( (*(_DWORD *)v24 & 2) != 0 )
      goto LABEL_22;
    while ( 1 )
    {
      MEMORY[0x182769900](a1: v22, a2: v23, a3: v24, a4: v21, a5: &a7);
LABEL_21:
      v24 = MEMORY[0x18276FC00](a1: v11, a2: v12, a3: v27, a4: v10, a5: v7 + 8521616);
LABEL_22:
      v21 = (v24 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v21) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v21) >> 9) + 0x38) = 0;
    }
  }
  v28 = v7 + 94165114;
  v9 = (_DWORD *)MEMORY[0x185039DE0](a1, a2, a3: v7 + 94165114);
  v27 = v9;
  if ( v9 != v7 && *v9 >> 3 != 4260808 )
    goto LABEL_21;
  if ( v9 == v7 )
    goto LABEL_16;
  v13 = (unsigned int)v9[1];
  if ( (_DWORD)v13 == 0 )
    goto LABEL_17;
  v14 = (unsigned int)(v13 + 127);
  if ( (unsigned int)v14 >= 0x100 )
  {
    v15 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v15 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v29 = v9[1];
      v15 = sub_181EAA920(a1: v11, a2: v12, a3: 34086464);
      v13 = v29;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v15 + 16;
      *(_DWORD *)v15 = 34086464;
      *(_DWORD *)(v15 + 4) = 0;
      *(_QWORD *)(v15 + 8) = 0;
    }
    *(_DWORD *)(v15 + 4) = v13 - 1;
  }
  else
  {
    v15 = (__int64)&v7[2 * v7[v14 + 94088301]];
  }
  v29 = v13;
  result = MEMORY[0x18503A140](a1: v11, a2: v12, a3: v28, a4: v13, a5: v15);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v18, a2: v19, a3: v17, a4: v29);
  return result;
}
