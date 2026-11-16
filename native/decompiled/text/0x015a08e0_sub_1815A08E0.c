// sub_1815A08E0
// rva 0x015a08e0  size 920  section .text  group text
// window base 0x1815a08e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A08E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13)
{
  unsigned int v13; // ebx
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  unsigned int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // [rsp+0h] [rbp-58h] BYREF
  __int64 v51; // [rsp+10h] [rbp-48h]
  __int64 v52; // [rsp+18h] [rbp-40h]
  __int64 v53; // [rsp+20h] [rbp-38h]
  __int64 v54; // [rsp+28h] [rbp-30h]
  __int64 v55; // [rsp+30h] [rbp-28h]
  __int64 v56; // [rsp+38h] [rbp-20h]
  __int64 v57; // [rsp+40h] [rbp-18h]
  unsigned int v58; // [rsp+4Ch] [rbp-Ch]
  unsigned int v59; // [rsp+50h] [rbp-8h]
  unsigned int v60; // [rsp+54h] [rbp-4h]

  v57 = a3;
  if ( (unsigned __int64)&v50 <= *(_QWORD *)(v16 + 8) )
  {
    v28 = MEMORY[0x181EB84E0]();
    goto LABEL_30;
  }
  v17 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v17 == 47076751 )
    return sub_1815A0AE4(a1, a2, a3, a4: (int)v15 + 353301280, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  v56 = v15 + 353301280;
  if ( (_DWORD)v17 != 0 )
  {
    v18 = *(_QWORD *)(v15 + 8LL * (*(_DWORD *)(v15 + 8 * v17) >> 3) + 104);
    v54 = v15 + 8 * v17;
    v55 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v14 + v18))(a1, a2, a3: v54);
  }
  else
  {
    v55 = v15 + 353301280;
  }
  v19 = *(unsigned int *)(v57 + 20);
  if ( (_DWORD)v19 != 0 )
  {
    v20 = *(_QWORD *)(v15 + 8LL * (*(_DWORD *)(v15 + 8 * v19) >> 3) + 104);
    v54 = v15 + 8 * v19;
    v21 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v14 + v20))(a1, a2, a3: v54);
  }
  else
  {
    v21 = v56;
  }
  if ( v55 == v15 )
    v22 = v56;
  else
    v22 = v55;
  if ( v21 == v15 )
    v23 = v56;
  else
    v23 = v21;
  v56 = v21;
  v60 = *(char *)(v23 + 12) | *(char *)(v22 + 12);
  v54 = v23;
  v53 = v22;
  v24 = MEMORY[0x1850132E0](a1, a2, a3: 1, a4: v21, a5: v22);
  v28 = MEMORY[0x1850132E0](a1: v26, a2: v27, a3: v24, a4: v25, a5: v54);
  v31 = v60;
  v13 = v28 << v60;
  if ( ((v28 << v60) & 0x80000000) != 0 )
  {
LABEL_30:
    v59 = v28;
    v45 = *(_QWORD *)(v16 + 40);
    if ( (unsigned __int64)(v45 + 40) > *(_QWORD *)(v16 + 32) )
    {
      v58 = v13;
      v45 = MEMORY[0x181EAA920](a1: v29, a2: v30, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v16 + 40) = v45 + 40;
      *(_DWORD *)v45 = 34082880;
      *(_DWORD *)(v45 + 4) = 0;
      *(_QWORD *)(v45 + 8) = 0;
      *(_QWORD *)(v45 + 16) = 0;
      *(_QWORD *)(v45 + 24) = 0;
      *(_QWORD *)(v45 + 32) = 0;
      v58 = v13;
    }
    *(_DWORD *)(v45 + 20) = 46923644;
    *(_DWORD *)(v45 + 16) = *(_DWORD *)(v15 + 374343896);
    *(_DWORD *)(v45 + 12) = (unsigned __int64)(v45 - v15) >> 3;
    v52 = v45;
    MEMORY[0x18503B9A0](a1: v29, a2: v30, a3: v45, a4: v31, a5: 0);
    v49 = v52;
    *(_DWORD *)(v52 + 8) = 46004603;
    if ( (*(_DWORD *)v49 & 2) != 0 )
      goto LABEL_34;
    while ( 1 )
    {
      v49 = MEMORY[0x182769900](a1: v47, a2: v48, a3: v49, a4: v46, a5: &a7);
LABEL_34:
      v46 = (v49 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v46) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v46) >> 9) + 0x38) = 0;
    }
  }
  v32 = *(_QWORD *)(v16 + 40);
  v33 = (v13 + 19LL) & 0x1FFFFFFF8LL;
  if ( v33 >= 0x20000 || (v34 = v32 + v33) > *(_QWORD *)(v16 + 32) )
  {
    v59 = v28;
    v32 = MEMORY[0x181EAA840](a1: 34082368, a2: v30, a3: 34082368, a4: v60, a5: v13);
    v28 = v59;
  }
  else
  {
    *(_QWORD *)(v16 + 40) = v34;
    *(_QWORD *)v32 = 34082368;
    *(_DWORD *)(v32 + 8) = v13;
  }
  v52 = v32;
  v35 = v15 + 373281248;
  v51 = v15 + 373281248;
  v59 = v28;
  if ( v60 != 0 )
    MEMORY[0x184FF2C40](a1: 1, a2: v30, a3: v15 + 373281248, a4: v35, a5: v32, a6: v28);
  else
    MEMORY[0x181EB4960](a1: v28, a2: 0, a3: v15 + 376351544, a4: v35, a5: 0, a6: v52);
  v37 = MEMORY[0x185011A80](a1: v54, a2: v15 + 57669624, a3: v59, a4: v36, a5: v60, a6: v52);
  v39 = MEMORY[0x185011A80](a1: v53, a2: v51, a3: v37, a4: v38, a5: v60, a6: v52);
  v42 = *(_QWORD *)(v16 + 40);
  if ( (unsigned __int64)(v42 + 24) > *(_QWORD *)(v16 + 32) )
  {
    v58 = v39;
    v42 = MEMORY[0x181EAA920](a1: v40, a2: v41, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v16 + 40) = v42 + 24;
    *(_DWORD *)v42 = 34082680;
    *(_DWORD *)(v42 + 4) = 0;
    *(_QWORD *)(v42 + 8) = 0;
    *(_QWORD *)(v42 + 16) = 0;
  }
  v43 = v52;
  *(_BYTE *)(v42 + 12) = v60;
  *(_DWORD *)(v42 + 4) = (unsigned __int64)(v43 - v15) >> 3;
  if ( *(int *)(v16 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v40, a2: v41, a3: v42, a4: v43, a5: v43);
  return v42;
}
