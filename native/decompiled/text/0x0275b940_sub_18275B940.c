// sub_18275B940
// rva 0x0275b940  size 1094  section .text  group text
// window base 0x18275b940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_18275B940(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6, char a7)
{
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v49; // rbp
  __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rax
  char v55; // [rsp+0h] [rbp-58h] BYREF
  __int64 v56; // [rsp+10h] [rbp-48h]
  __int64 v57; // [rsp+18h] [rbp-40h]
  _DWORD *v58; // [rsp+20h] [rbp-38h]
  int v59; // [rsp+2Ch] [rbp-2Ch]
  __int64 v60; // [rsp+30h] [rbp-28h]
  __int64 v61; // [rsp+38h] [rbp-20h]
  __int64 v62; // [rsp+40h] [rbp-18h]
  unsigned int v63; // [rsp+4Ch] [rbp-Ch]
  unsigned int v64; // [rsp+50h] [rbp-8h]
  unsigned int v65; // [rsp+54h] [rbp-4h]

  v62 = a5;
  if ( (unsigned __int64)&v55 <= *(_QWORD *)(v9 + 8) )
  {
    v61 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_28;
  }
  v10 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_28:
    v61 = a3;
    sub_182771080(a1, a2, a3, a4, a5, a6, a7: v55);
    goto LABEL_29;
  }
  v11 = *(unsigned int *)(v8 + 8 * v10 + 28);
  if ( (_DWORD)v11 == 0 )
  {
LABEL_29:
    v61 = a3;
    v25 = sub_182771080(a1, a2, a3, a4, a5, a6, a7: v55);
    goto LABEL_30;
  }
  v12 = *(unsigned int *)(v8 + 8 * v11 + 12);
  v61 = a3;
  v60 = v8 + 8 * v12;
  v59 = v12;
  v13 = sub_18275A420(a1, a2, a3, a4: (int)v8 + 8 * (int)v12, a5, a6, a7: v55);
  if ( v59 != 0 )
    v16 = v60;
  else
    v16 = v8 + 353301280;
  v65 = *(char *)(v62 + 12) | *(char *)(v13 + 12) | *(char *)(v16 + 12);
  v58 = (_DWORD *)v16;
  v57 = v13;
  v17 = MEMORY[0x1850132E0](a1: v14, a2: v15, a3: 62, a4: v58, a5: v58);
  v21 = MEMORY[0x1850132E0](a1: v19, a2: v20, a3: v17, a4: v18, a5: v57);
  v25 = MEMORY[0x1850132E0](a1: v23, a2: v24, a3: v21, a4: v22, a5: v62);
  v28 = v8 + 373281248;
  v29 = v65;
  v7 = v25 << v65;
  if ( ((v25 << v65) & 0x80000000) != 0 )
  {
LABEL_30:
    v64 = v25;
    v50 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v50 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v63 = v7;
      v50 = MEMORY[0x181EAA920](a1: v26, a2: v27, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v50 + 40;
      *(_DWORD *)v50 = 34082880;
      *(_DWORD *)(v50 + 4) = 0;
      *(_QWORD *)(v50 + 8) = 0;
      *(_QWORD *)(v50 + 16) = 0;
      *(_QWORD *)(v50 + 24) = 0;
      *(_QWORD *)(v50 + 32) = 0;
      v63 = v7;
    }
    *(_DWORD *)(v50 + 20) = 46923644;
    *(_DWORD *)(v50 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v50 + 12) = (unsigned __int64)(v50 - v8) >> 3;
    v56 = v50;
    MEMORY[0x18503B9A0](a1: v26, a2: v27, a3: v50, a4: v29, a5: 0);
    v54 = v56;
    *(_DWORD *)(v56 + 8) = 46004603;
    if ( (*(_DWORD *)v54 & 2) != 0 )
      goto LABEL_34;
    while ( 1 )
    {
      v54 = sub_182769900(a1: v52, a2: v53, a3: v54, a4: v51, a5: &a7);
LABEL_34:
      v51 = (v54 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v54 & 0xFFFFFFFFFFF80000LL) + ((v54 - v51) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v54 & 0xFFFFFFFFFFF80000LL) + ((v54 - v51) >> 9) + 0x38) = 0;
    }
  }
  v30 = *(_QWORD *)(v9 + 40);
  v31 = (v7 + 19LL) & 0x1FFFFFFF8LL;
  if ( v31 >= 0x20000 || (v32 = v30 + v31) > *(_QWORD *)(v9 + 32) )
  {
    v56 = v8 + 373281248;
    v64 = v25;
    v30 = MEMORY[0x181EAA840](a1: 34082368, a2: v27, a3: 34082368, a4: v65, a5: v7);
    v28 = v56;
    v25 = v64;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v32;
    *(_QWORD *)v30 = 34082368;
    *(_DWORD *)(v30 + 8) = v7;
  }
  v56 = v30;
  v64 = v25;
  if ( v65 != 0 )
    MEMORY[0x184FF2C40](a1: 1, a2: v27, a3: v28, a4: v30, a5: v30, a6: v25);
  else
    MEMORY[0x181EB4960](a1: v25, a2: 0, a3: v8 + 376351544, a4: v29, a5: 0, a6: v56);
  v34 = MEMORY[0x185011A80](a1: v62, a2: v8 + 58184432, a3: v64, a4: v33, a5: v65, a6: v56);
  v36 = MEMORY[0x185011A80](a1: v57, a2: v8 + 58184456, a3: v34, a4: v35, a5: v65, a6: v56);
  v38 = MEMORY[0x185011A80](a1: v58, a2: v8 + 58184480, a3: v36, a4: v37, a5: v65, a6: v56);
  v41 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v41 + 40) > *(_QWORD *)(v9 + 32) )
  {
    v63 = v38;
    v41 = MEMORY[0x181EAA920](a1: v39, a2: v40, a3: 34081944);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v41 + 40;
    *(_DWORD *)v41 = 34081944;
    *(_DWORD *)(v41 + 4) = 0;
    *(_QWORD *)(v41 + 8) = 0;
    *(_QWORD *)(v41 + 16) = 0;
    *(_QWORD *)(v41 + 24) = 0;
    *(_QWORD *)(v41 + 32) = 0;
  }
  v58 = (_DWORD *)v41;
  *(_DWORD *)(v41 + 20) = 46923644;
  *(_DWORD *)(v41 + 16) = *(_DWORD *)(v8 + 374343896);
  *(_DWORD *)(v41 + 12) = (unsigned __int64)(v41 - v8) >> 3;
  v63 = (char)v65;
  v42 = MEMORY[0x18503B9A0](a1: v39, a2: v40, a3: v41, a4: v41, a5: 0);
  v45 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v45 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v57 = v42;
    v45 = MEMORY[0x181EAA920](a1: v43, a2: v44, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v45 + 24;
    *(_DWORD *)v45 = 34082680;
    *(_DWORD *)(v45 + 4) = 0;
    *(_QWORD *)(v45 + 8) = 0;
    *(_QWORD *)(v45 + 16) = 0;
  }
  v46 = (unsigned __int64)v58;
  v47 = v56;
  *(_BYTE *)(v45 + 12) = v65;
  *(_DWORD *)(v45 + 4) = (unsigned __int64)(v47 - v8) >> 3;
  *(_DWORD *)(v46 + 8) = (unsigned __int64)(v45 - v8) >> 3;
  if ( (*(_DWORD *)v46 & 2) != 0 )
  {
    v49 = (v46 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v46 & 0xFFFFFFFFFFF80000LL) + ((v46 - v49) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v46 & 0xFFFFFFFFFFF80000LL) + ((v46 - v49) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v9 + 16) <= 0 )
  {
    sub_18277F280(a1: v43, a2: v44, a3: v45);
    return (unsigned __int64)v58;
  }
  return v46;
}
