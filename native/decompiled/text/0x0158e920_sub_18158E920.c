// sub_18158E920
// rva 0x0158e920  size 870  section .text  group text
// window base 0x18158e920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18158E920(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  unsigned int v12; // ebx
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, __int64, __int64); // rbp
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rbp
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdx
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r9
  __int64 v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // [rsp+0h] [rbp-48h] BYREF
  __int64 v50; // [rsp+8h] [rbp-40h]
  __int64 v51; // [rsp+10h] [rbp-38h]
  __int64 v52; // [rsp+18h] [rbp-30h]
  __int64 v53; // [rsp+20h] [rbp-28h]
  __int64 v54; // [rsp+28h] [rbp-20h]
  __int64 v55; // [rsp+30h] [rbp-18h]
  int v56; // [rsp+38h] [rbp-10h]
  unsigned int v57; // [rsp+3Ch] [rbp-Ch]
  int v58; // [rsp+40h] [rbp-8h]
  unsigned int v59; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v49 <= *(_QWORD *)(v15 + 8) )
  {
    v51 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_24;
  }
  v16 = *(unsigned int *)(a3 + 4);
  v17 = v14 + 8 * v16;
  v18 = v14 + 353301280;
  if ( (_DWORD)v16 == 0 )
    return sub_18158EAF1(a1, a2, a3, a4: v17, a5, a6, a7, a8, a9, a10, a11, a12);
  v55 = v14 + 8 * v16;
  v19 = *(unsigned int *)(a3 + 8);
  v20 = v14 + 8 * v19;
  if ( (_DWORD)v19 != 0 )
  {
    v53 = v14 + 353301280;
    v52 = v14 + 8 * v16;
    v51 = a3;
    v21 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v13
                                                            + *(_QWORD *)(v14
                                                                        + 8LL * (*(_DWORD *)(v14 + 8 * v19) >> 3)
                                                                        + 104));
    v54 = v20;
    v22 = v21(a1, a2: v20, a3: v20);
    if ( v22 == v14 )
      v18 = v53;
    else
      v18 = v22;
  }
  else
  {
    v54 = v14 + 8 * v19;
    v53 = v14 + 353301280;
    v52 = v14 + 8 * v16;
    v51 = a3;
  }
  v59 = *(char *)(v18 + 12) | *(char *)(v55 + 12);
  v53 = v18;
  v23 = MEMORY[0x1850132E0](a1, a2: v20, a3: 61, a4: v17, a5: v55);
  v27 = MEMORY[0x1850132E0](a1: v25, a2: v26, a3: v23, a4: v24, a5: v53);
  v58 = v27;
  v12 = v27 - 1;
  v29 = v14 + 57668624;
  v30 = v59;
  v31 = (unsigned int)(v27 << v59);
  if ( (int)v31 < 0 )
  {
LABEL_24:
    v57 = v12;
    v44 = *(_QWORD *)(v15 + 40);
    if ( (unsigned __int64)(v44 + 40) > *(_QWORD *)(v15 + 32) )
    {
      v56 = v31;
      v44 = MEMORY[0x181EAA920](a1: v28, a2: v31, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v15 + 40) = v44 + 40;
      *(_DWORD *)v44 = 34082880;
      *(_DWORD *)(v44 + 4) = 0;
      *(_QWORD *)(v44 + 8) = 0;
      *(_QWORD *)(v44 + 16) = 0;
      *(_QWORD *)(v44 + 24) = 0;
      *(_QWORD *)(v44 + 32) = 0;
      v56 = v31;
    }
    *(_DWORD *)(v44 + 20) = 46923644;
    *(_DWORD *)(v44 + 16) = *(_DWORD *)(v14 + 374343896);
    *(_DWORD *)(v44 + 12) = (unsigned __int64)(v44 - v14) >> 3;
    v50 = v44;
    MEMORY[0x18503B9A0](a1: v28, a2: v31, a3: v44, a4: v30, a5: 0);
    v48 = v50;
    *(_DWORD *)(v50 + 8) = 46004603;
    if ( (*(_DWORD *)v48 & 2) != 0 )
      goto LABEL_28;
    while ( 1 )
    {
      v48 = MEMORY[0x182769900](a1: v46, a2: v47, a3: v48, a4: v45, a5: &a7);
LABEL_28:
      v45 = (v48 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v48 & 0xFFFFFFFFFFF80000LL) + ((v48 - v45) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v48 & 0xFFFFFFFFFFF80000LL) + ((v48 - v45) >> 9) + 0x38) = 0;
    }
  }
  v32 = *(_QWORD *)(v15 + 40);
  v33 = ((unsigned int)v31 + 19LL) & 0x1FFFFFFF8LL;
  if ( v33 >= 0x20000 || (v34 = v32 + v33) > *(_QWORD *)(v15 + 32) )
  {
    v50 = v14 + 57668624;
    v57 = v27 - 1;
    v32 = MEMORY[0x181EAA840](a1: 34082368, a2: v31, a3: 34082368, a4: v59, a5: (unsigned int)v31);
    v29 = v50;
    v12 = v57;
  }
  else
  {
    *(_QWORD *)(v15 + 40) = v34;
    *(_QWORD *)v32 = 34082368;
    *(_DWORD *)(v32 + 8) = v31;
  }
  v50 = v32;
  v57 = v12;
  if ( v59 != 0 )
    MEMORY[0x184FF2C40](a1: 1, a2: v31, a3: v29, a4: v30, a5: v32, a6: v12);
  else
    MEMORY[0x181EB4960](a1: v12, a2: 1, a3: v14 + 376611688, a4: v30, a5: 0, a6: v50);
  v36 = MEMORY[0x185011A80](a1: v53, a2: v14 + 57668648, a3: v57, a4: v35, a5: v59, a6: v50);
  v38 = MEMORY[0x185011A80](a1: v55, a2: v14 + 57668672, a3: v36, a4: v37, a5: v59, a6: v50);
  v41 = *(_QWORD *)(v15 + 40);
  if ( (unsigned __int64)(v41 + 24) > *(_QWORD *)(v15 + 32) )
  {
    v58 = v38;
    v41 = MEMORY[0x181EAA920](a1: v39, a2: v40, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v15 + 40) = v41 + 24;
    *(_DWORD *)v41 = 34082680;
    *(_DWORD *)(v41 + 4) = 0;
    *(_QWORD *)(v41 + 8) = 0;
    *(_QWORD *)(v41 + 16) = 0;
  }
  v42 = v50;
  *(_BYTE *)(v41 + 12) = v59;
  *(_DWORD *)(v41 + 4) = (unsigned __int64)(v42 - v14) >> 3;
  if ( *(int *)(v15 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v39, a2: v40, a3: v41, a4: v42, a5: v42);
  return v41;
}
