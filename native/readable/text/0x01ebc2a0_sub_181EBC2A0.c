// sub_1EBC2A0
// rva 0x01ebc2a0  size 596  section .text  group text
// window base 0x181ebc2a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBC2A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  char *v9; // rdx
  __int64 result; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // [rsp+0h] [rbp-18h] BYREF
  char *v27; // [rsp+8h] [rbp-10h]
  unsigned __int64 v28; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v26);
    goto LABEL_31;
  }
  v8 = *((unsigned int *)v6 + 94153454);
  if ( (_DWORD)v8 != 0 )
  {
    v9 = &v6[8 * v8];
  }
  else
  {
    v28 = (unsigned __int64)(v6 + 376613784);
    v18 = sub_1E9A9A0(a1, a2, a3: (__int64)(v6 + 376613784), a4, a5, a6);
    *((_DWORD *)v6 + 94153454) = (unsigned __int64)(v18 - (_QWORD)v6) >> 3;
    if ( (*(_DWORD *)v28 & 2) != 0 )
    {
      v19 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v19) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v19) >> 9) + 0x38) = 0;
      v9 = (char *)v18;
    }
    else
    {
      v9 = (char *)v18;
    }
  }
  result = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(result + 32) > *(_QWORD *)(v7 + 32) )
  {
    v28 = (unsigned __int64)v9;
    result = sub_1EAA920(a1, a2, a3: 34115016);
    v9 = (char *)v28;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = result + 32;
    *(_DWORD *)result = 34115016;
    *(_DWORD *)(result + 4) = 0;
    *(_QWORD *)(result + 8) = 0;
    *(_QWORD *)(result + 16) = 0;
    *(_QWORD *)(result + 24) = 0;
  }
  v28 = result;
  *(_DWORD *)(result + 16) = *((_DWORD *)v9 + 1);
  *(_DWORD *)(result + 12) = -1;
  *(_DWORD *)(result + 4) = (unsigned __int64)(v9 - v6) >> 3;
  if ( *((_DWORD *)v9 + 3) != 0 )
  {
    v11 = (char *)sub_5782CA0(a1, a2, a3: result);
    if ( v11 == v6 || *(_DWORD *)v11 >> 3 == 4262015 )
    {
      if ( v11 == v6 )
        goto LABEL_32;
      v15 = *((unsigned int *)v11 + 7);
      if ( (_DWORD)v15 != 0 && *(_DWORD *)&v6[8 * v15 + 56] != 47076830 )
      {
LABEL_12:
        v27 = v11;
        sub_1EDBB20(a1: v13, a2: v14, a3: v11);
      }
      while ( 1 )
      {
        result = v28;
        v16 = *(unsigned int *)(v28 + 4);
        if ( (_DWORD)v16 == 0 )
          break;
        if ( *(_DWORD *)(v28 + 8) == *(_DWORD *)&v6[8 * v16 + 12] )
          goto LABEL_20;
        v11 = (char *)sub_5782CA0(a1: v13, a2: v14, a3: v28);
        if ( v11 != v6 && *(_DWORD *)v11 >> 3 != 4262015 )
          goto LABEL_37;
        if ( v11 == v6 )
          goto LABEL_36;
        v17 = *((unsigned int *)v11 + 7);
        if ( (_DWORD)v17 != 0 )
        {
LABEL_33:
          if ( *(_DWORD *)&v6[8 * v17 + 56] != 47076830 )
            goto LABEL_12;
        }
      }
LABEL_31:
      sub_2771080();
LABEL_32:
      v11 = (char *)sub_2771080();
      goto LABEL_33;
    }
    sub_276FC00(a1: v13, a2: v14, a3: v11, a4: v12, a5: v6 + 34096120);
LABEL_36:
    v11 = (char *)sub_2771080();
LABEL_37:
    sub_276FC00(a1: v13, a2: v14, a3: v11, a4: v28, a5: v6 + 34096120);
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
    return sub_1EBC500(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24, a6: v25);
  }
  else
  {
LABEL_20:
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
