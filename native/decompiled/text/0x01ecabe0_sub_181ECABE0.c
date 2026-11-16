// sub_181ECABE0
// rva 0x01ecabe0  size 829  section .text  group text
// window base 0x181ecabe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ECABE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12,
        int a13,
        int a14)
{
  unsigned int v14; // ebp
  __int64 v15; // r13
  _DWORD *v16; // r14
  __int64 v17; // r15
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rsi
  _DWORD *v33; // rbx
  __int64 v34; // rcx
  _DWORD *v35; // rdx
  unsigned __int64 v36; // r9
  char *v37; // r9
  __int64 v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rcx
  unsigned int v41; // eax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdx
  char *v45; // rbx
  unsigned __int64 v46; // rcx
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rax
  char v53; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v54; // [rsp+10h] [rbp-38h]
  _DWORD *v55; // [rsp+18h] [rbp-30h]
  __int64 v56; // [rsp+20h] [rbp-28h]
  _DWORD *v57; // [rsp+28h] [rbp-20h]
  unsigned int v58; // [rsp+34h] [rbp-14h]
  unsigned int v59; // [rsp+38h] [rbp-10h]
  unsigned int v60; // [rsp+3Ch] [rbp-Ch]
  unsigned int v61; // [rsp+40h] [rbp-8h]
  unsigned int v62; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v53 <= *(_QWORD *)(v17 + 8) )
  {
    v56 = a3;
    v30 = sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v53);
    goto LABEL_21;
  }
  v18 = *(_DWORD *)(a3 + 20);
  v19 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v19 == 0 )
    return sub_181ECAD97(a1, a2, a3, a4: v18, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  v57 = v16 + 88325320;
  v62 = v18;
  v56 = a3;
  v20 = *(_QWORD *)&v16[2 * (v16[2 * v19] >> 3) + 26];
  v55 = &v16[2 * v19];
  v21 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v15 + v20))(a1, a2, a3: v55);
  if ( (_DWORD *)v21 == v16 )
    v24 = (__int64)v57;
  else
    v24 = v21;
  v57 = (_DWORD *)v21;
  v25 = (unsigned int)*(char *)(v24 + 12);
  v61 = v25;
  v60 = (char)v25;
  v55 = (_DWORD *)v24;
  v26 = MEMORY[0x1850130C0](a1: v22, a2: v23, a3: 2, a4: v25, a5: v62);
  v30 = MEMORY[0x1850132E0](a1: v28, a2: v29, a3: v26, a4: v27, a5: v55);
  v33 = v16 + 93320312;
  v34 = v60;
  v14 = v30 << v60;
  if ( ((v30 << v60) & 0x80000000) != 0 )
  {
LABEL_21:
    v59 = v30;
    v48 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v48 + 40) > *(_QWORD *)(v17 + 32) )
    {
      v58 = v14;
      v48 = sub_181EAA920(a1: v31, a2: v32, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v48 + 40;
      *(_DWORD *)v48 = 34082880;
      *(_DWORD *)(v48 + 4) = 0;
      *(_QWORD *)(v48 + 8) = 0;
      *(_QWORD *)(v48 + 16) = 0;
      *(_QWORD *)(v48 + 24) = 0;
      *(_QWORD *)(v48 + 32) = 0;
      v58 = v14;
    }
    *(_DWORD *)(v48 + 20) = 46923644;
    *(_DWORD *)(v48 + 16) = v16[93585974];
    *(_DWORD *)(v48 + 12) = (unsigned __int64)(v48 - (_QWORD)v16) >> 3;
    v54 = (_DWORD *)v48;
    MEMORY[0x18503B9A0](a1: v31, a2: v32, a3: v48, a4: v34, a5: 0);
    v52 = (__int64)v54;
    v54[2] = 46004603;
    if ( (*(_DWORD *)v52 & 2) != 0 )
      goto LABEL_25;
    while ( 1 )
    {
      v52 = MEMORY[0x182769900](a1: v50, a2: v51, a3: v52, a4: v49, a5: &a7);
LABEL_25:
      v49 = (v52 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v52 & 0xFFFFFFFFFFF80000LL) + ((v52 - v49) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v52 & 0xFFFFFFFFFFF80000LL) + ((v52 - v49) >> 9) + 0x38) = 0;
    }
  }
  v35 = *(_DWORD **)(v17 + 40);
  v36 = (v14 + 19LL) & 0x1FFFFFFF8LL;
  if ( v36 >= 0x20000 || (unsigned __int64)(v37 = (char *)v35 + v36) > *(_QWORD *)(v17 + 32) )
  {
    v54 = v16 + 93320312;
    v59 = v30;
    v35 = (_DWORD *)sub_181EAA840(a1: 34082368, a2: v32, a3: 34082368, a4: v60, a5: v14);
    v33 = v54;
    v30 = v59;
  }
  else
  {
    *(_QWORD *)(v17 + 40) = v37;
    *(_QWORD *)v35 = 34082368;
    v35[2] = v14;
  }
  v54 = v35;
  v59 = v30;
  if ( (_BYTE)v61 != 0 )
    MEMORY[0x184FF2C40](a1: 1, a2: v32, a3: v33, a4: v35, a5: v35, a6: v30);
  else
    sub_181EB4960(a1: v30, a2: 0, a3: v16 + 94087886, a4: v61, a5: 0, a6: v54, a7: v53);
  v39 = MEMORY[0x185011A80](a1: v55, a2: v16 + 14544776, a3: v59, a4: v38, a5: v60, a6: v54);
  v41 = MEMORY[0x185011920](a1: v62, a2: v16 + 14544782, a3: v39, a4: v40, a5: v60, a6: v54);
  v44 = *(_QWORD *)(v17 + 40);
  if ( (unsigned __int64)(v44 + 24) > *(_QWORD *)(v17 + 32) )
  {
    v58 = v41;
    v44 = sub_181EAA920(a1: v42, a2: v43, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v17 + 40) = v44 + 24;
    *(_DWORD *)v44 = 34082680;
    *(_DWORD *)(v44 + 4) = 0;
    *(_QWORD *)(v44 + 8) = 0;
    *(_QWORD *)(v44 + 16) = 0;
  }
  v45 = (char *)v54;
  *(_BYTE *)(v44 + 12) = v61;
  v46 = (unsigned __int64)(v45 - (char *)v16) >> 3;
  *(_DWORD *)(v44 + 4) = v46;
  if ( *(int *)(v17 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v42, a2: v43, a3: v44, a4: v46, a5: v45);
  return v44;
}
