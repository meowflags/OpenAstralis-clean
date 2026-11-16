// sub_181ED2380
// rva 0x01ed2380  size 1082  section .text  group text
// window base 0x181ed2380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_181ED2380(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9)
{
  unsigned int v9; // ebp
  _DWORD *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rcx
  _DWORD *v19; // rbx
  unsigned int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdi
  char v33; // bp
  int v34; // ecx
  char *v35; // rdx
  char v36; // al
  __int64 v37; // rbx
  __int64 v38; // rsi
  _DWORD *result; // rax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // r8
  unsigned __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  unsigned __int64 v47; // r8
  __int64 v48; // r8
  char v49; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v50; // [rsp+8h] [rbp-30h]
  unsigned int v51; // [rsp+14h] [rbp-24h]
  __int64 v52; // [rsp+18h] [rbp-20h]
  __int64 v53; // [rsp+20h] [rbp-18h]
  int v54; // [rsp+2Ch] [rbp-Ch]
  int v55; // [rsp+30h] [rbp-8h]
  unsigned int v56; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v49 <= *(_QWORD *)(v11 + 8) )
  {
    v53 = a3;
    v12 = sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v49);
    goto LABEL_23;
  }
  v53 = a3;
  v12 = MEMORY[0x181EDABC0]();
  if ( (_DWORD *)v12 == v10 )
  {
    result = (_DWORD *)MEMORY[0x1859E49A0](a1: v14, a2: v15, a3: v10 + 94165080, a4: v13, a5: v53);
    if ( result == v10 || *result >> 3 == 4260335 )
    {
      if ( *(int *)(v11 + 16) <= 0 )
        return (_DWORD *)MEMORY[0x18277F280]();
      return result;
    }
    goto LABEL_24;
  }
  v18 = *(unsigned int *)(v12 + 4);
  v19 = v10 + 14544938;
  if ( (_DWORD)v18 == 0 )
  {
LABEL_23:
    v52 = v12;
    result = (_DWORD *)MEMORY[0x182771080]();
LABEL_24:
    v12 = MEMORY[0x18276FC00](a1: v41, a2: v42, a3: result, a4: v40, a5: v10 + 8520670);
    goto LABEL_25;
  }
  v20 = v10[2 * v18 + 2];
  if ( v20 == 0 )
    return (_DWORD *)sub_181ED251C(a1: v14, a2: v15, a3: 0, a4: v18, a5: v16, a6: v17, a7, a8, a9);
  v9 = *(char *)(v12 + 12);
  v21 = (unsigned int)v10[93585974];
  v22 = (v20 >> *(_BYTE *)(v12 + 12)) + 5;
  v23 = 34082880;
  v24 = 34082880;
  if ( (int)v22 < 0 )
  {
LABEL_25:
    v56 = v9;
    v52 = v12;
    v43 = *(_QWORD *)(v11 + 40);
    if ( (unsigned __int64)(v43 + 40) > *(_QWORD *)(v11 + 32) )
    {
      v55 = v22;
      v51 = v21;
      v43 = sub_181EAA920(a1: v22, a2: v21, a3: v24);
      v21 = v51;
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v43 + 40;
      *(_DWORD *)v43 = 34082880;
      *(_DWORD *)(v43 + 4) = 0;
      *(_QWORD *)(v43 + 8) = 0;
      *(_QWORD *)(v43 + 16) = 0;
      *(_QWORD *)(v43 + 24) = 0;
      *(_QWORD *)(v43 + 32) = 0;
      v55 = v22;
    }
    *(_DWORD *)(v43 + 20) = 46923644;
    *(_DWORD *)(v43 + 16) = v21;
    *(_DWORD *)(v43 + 12) = (unsigned __int64)(v43 - (_QWORD)v10) >> 3;
    v50 = (_DWORD *)v43;
    MEMORY[0x18503B9A0](a1: v22, a2: v21, a3: v43, a4: v23, a5: 0);
    v47 = (unsigned __int64)v50;
    v50[2] = 46004603;
    if ( (*(_DWORD *)v47 & 2) != 0 )
    {
      v44 = (v47 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v47 & 0xFFFFFFFFFFF80000LL) + ((v47 - v44) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v47 & 0xFFFFFFFFFFF80000LL) + ((v47 - v44) >> 9) + 0x38) = 0;
    }
    goto LABEL_28;
  }
  v25 = v9;
  v26 = (unsigned int)((_DWORD)v22 << v9);
  if ( (int)v26 < 0 )
  {
    while ( 1 )
    {
      v55 = v26;
      v56 = v9;
      v52 = v12;
      v48 = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(v48 + 40) > *(_QWORD *)(v11 + 32) )
      {
        v51 = v21;
        v48 = sub_181EAA920(a1: v26, a2: v21, a3: v24);
        v21 = v51;
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v48 + 40;
        *(_DWORD *)v48 = 34082880;
        *(_DWORD *)(v48 + 4) = 0;
        *(_QWORD *)(v48 + 8) = 0;
        *(_QWORD *)(v48 + 16) = 0;
        *(_QWORD *)(v48 + 24) = 0;
        *(_QWORD *)(v48 + 32) = 0;
      }
      *(_DWORD *)(v48 + 20) = 46923644;
      *(_DWORD *)(v48 + 16) = v21;
      *(_DWORD *)(v48 + 12) = (unsigned __int64)(v48 - (_QWORD)v10) >> 3;
      v50 = (_DWORD *)v48;
      MEMORY[0x18503B9A0](a1: v26, a2: v21, a3: v48, a4: v25, a5: 0);
      v47 = (unsigned __int64)v50;
      v50[2] = 46004603;
      if ( (*(_DWORD *)v47 & 2) != 0 )
      {
        v44 = (v47 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v47 & 0xFFFFFFFFFFF80000LL) + ((v47 - v44) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v47 & 0xFFFFFFFFFFF80000LL) + ((v47 - v44) >> 9) + 0x38) = 0;
      }
LABEL_28:
      v12 = MEMORY[0x182769900](a1: v45, a2: v46, a3: v47, a4: v44, a5: &a7);
    }
  }
  v27 = *(_QWORD *)(v11 + 40);
  v28 = ((unsigned int)v26 + 19LL) & 0x1FFFFFFF8LL;
  if ( v28 >= 0x20000 || (v29 = v27 + v28) > *(_QWORD *)(v11 + 32) )
  {
    v55 = v26;
    v56 = v9;
    v50 = v10 + 14544938;
    v52 = v12;
    v27 = sub_181EAA840(a1: v26, a2: v21, a3: 34082368, a4: 34082368, a5: v26);
    v9 = v56;
    v19 = v50;
  }
  else
  {
    *(_QWORD *)(v11 + 40) = v29;
    *(_QWORD *)v27 = 34082368;
    *(_DWORD *)(v27 + 8) = v26;
    v55 = v26;
    v52 = v12;
  }
  v56 = v9;
  v50 = (_DWORD *)v27;
  MEMORY[0x184FF2C40](a1: v9, a2: v21, a3: v19, a4: v50, a5: v50, a6: 0);
  MEMORY[0x184FF2C40](a1: v56, a2: v31, a3: v52, a4: v30, a5: v50, a6: 5);
  v33 = v56;
  v34 = 0;
  v35 = (char *)v50;
  v36 = 0;
  v37 = *(_QWORD *)(v11 + 40);
  v38 = v37 + 24;
  if ( (unsigned __int64)(v37 + 24) > *(_QWORD *)(v11 + 32) )
  {
    v55 = 0;
    v54 = 0;
    v37 = sub_181EAA920(a1: v32, a2: v38, a3: 34082680);
    v33 = v56;
    v34 = v55;
    v35 = (char *)v50;
    v36 = v54;
  }
  else
  {
    *(_QWORD *)(v11 + 40) = v38;
    *(_DWORD *)v37 = 34082680;
    *(_DWORD *)(v37 + 4) = 0;
    *(_QWORD *)(v37 + 8) = 0;
    *(_QWORD *)(v37 + 16) = 0;
  }
  *(_BYTE *)(v37 + 13) = v36;
  *(_BYTE *)(v37 + 12) = v33;
  *(_DWORD *)(v37 + 8) = v34;
  *(_DWORD *)(v37 + 4) = (unsigned __int64)(v35 - (char *)v10) >> 3;
  if ( *(int *)(v11 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return (_DWORD *)v37;
}
