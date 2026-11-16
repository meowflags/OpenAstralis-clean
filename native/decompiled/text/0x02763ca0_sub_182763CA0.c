// sub_182763CA0
// rva 0x02763ca0  size 998  section .text  group text
// window base 0x182763ca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182763CA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rsi
  int v13; // r9d
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 result; // rax
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // r9d
  int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rbp
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rdx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r9
  __int64 v43; // rcx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rax
  char v61; // [rsp+0h] [rbp-68h] BYREF
  __int64 v62; // [rsp+10h] [rbp-58h]
  __int64 v63; // [rsp+18h] [rbp-50h]
  __int64 v64; // [rsp+20h] [rbp-48h]
  __int64 v65; // [rsp+28h] [rbp-40h]
  int v66; // [rsp+34h] [rbp-34h]
  __int64 v67; // [rsp+38h] [rbp-30h]
  __int64 v68; // [rsp+40h] [rbp-28h]
  __int64 v69; // [rsp+48h] [rbp-20h]
  __int64 v70; // [rsp+50h] [rbp-18h]
  int v71; // [rsp+58h] [rbp-10h]
  unsigned int v72; // [rsp+5Ch] [rbp-Ch]
  int v73; // [rsp+60h] [rbp-8h]
  unsigned int v74; // [rsp+64h] [rbp-4h]

  v70 = a5;
  if ( (unsigned __int64)&v61 <= *(_QWORD *)(v9 + 8) )
  {
    v69 = a3;
    MEMORY[0x181EB84E0]();
LABEL_32:
    sub_182771080(a1: v11, a2: v12, a3: v14, a4: v10, a5: v15, a6: v13, a7: v61);
    goto LABEL_33;
  }
  v69 = a3;
  if ( (unsigned int)MEMORY[0x185EFFA60]() != 0 )
    v14 = v8 + 38481520;
  else
    v14 = v69;
  v15 = v8 + 376667760;
  if ( v14 == v8 )
    goto LABEL_32;
  v16 = *(unsigned int *)(v14 + 28);
  if ( (_DWORD)v16 == 0 )
  {
LABEL_33:
    v68 = v14;
    sub_182771080(a1: v11, a2: v12, a3: v14, a4: v10, a5: v15, a6: v16, a7: v61);
LABEL_34:
    sub_182771080(a1: v21, a2: v22, a3: v19, a4: v20, a5: v24, a6: v23, a7: v61);
    goto LABEL_35;
  }
  v17 = *(unsigned int *)(v8 + 8 * v16 + 104);
  v68 = v14;
  result = sub_1827640A0(a1: v17, a2: v12, a3: v8 + 376667760, a4: v10, a5: v14, a6: v70);
  if ( result != v8 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_18277F280(a1: v21, a2: v22, a3: v19);
    return result;
  }
  v24 = v70;
  if ( v70 == v8 )
    goto LABEL_34;
  v25 = *(unsigned int *)(v70 + 12);
  v67 = v8 + 8 * v25;
  v66 = v25;
  v26 = MEMORY[0x184F68C80](a1: v21, a2: v22, a3: v68);
  v29 = v8 + 353301280;
  if ( v26 == v8 )
    v30 = v8 + 353301280;
  else
    v30 = v26;
  if ( v66 != 0 )
    v29 = v67;
  v65 = v26;
  v74 = *(char *)(v29 + 12) | *(char *)(v30 + 12);
  v64 = v29;
  v63 = v30;
  v31 = MEMORY[0x1850132E0](a1: v27, a2: v28, a3: 40, a4: v30, a5: v30);
  v35 = MEMORY[0x1850132E0](a1: v33, a2: v34, a3: v31, a4: v32, a5: v64);
  v73 = v35;
  v7 = v35 - 1;
  v37 = v8 + 58184552;
  v38 = v74;
  v39 = (unsigned int)(v35 << v74);
  if ( (int)v39 < 0 )
  {
LABEL_35:
    v72 = v7;
    v56 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v56 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v71 = v39;
      v56 = MEMORY[0x181EAA920](a1: v36, a2: v39, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v56 + 40;
      *(_DWORD *)v56 = 34082880;
      *(_DWORD *)(v56 + 4) = 0;
      *(_QWORD *)(v56 + 8) = 0;
      *(_QWORD *)(v56 + 16) = 0;
      *(_QWORD *)(v56 + 24) = 0;
      *(_QWORD *)(v56 + 32) = 0;
      v71 = v39;
    }
    *(_DWORD *)(v56 + 20) = 46923644;
    *(_DWORD *)(v56 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v56 + 12) = (unsigned __int64)(v56 - v8) >> 3;
    v62 = v56;
    MEMORY[0x18503B9A0](a1: v36, a2: v39, a3: v56, a4: v38, a5: 0);
    v60 = v62;
    *(_DWORD *)(v62 + 8) = 46004603;
    if ( (*(_DWORD *)v60 & 2) != 0 )
      goto LABEL_39;
    while ( 1 )
    {
      v60 = sub_182769900(a1: v58, a2: v59, a3: v60, a4: v57, a5: &a7);
LABEL_39:
      v57 = (v60 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v60 & 0xFFFFFFFFFFF80000LL) + ((v60 - v57) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v60 & 0xFFFFFFFFFFF80000LL) + ((v60 - v57) >> 9) + 0x38) = 0;
    }
  }
  v40 = *(_QWORD *)(v9 + 40);
  v41 = ((unsigned int)v39 + 19LL) & 0x1FFFFFFF8LL;
  if ( v41 >= 0x20000 || (v42 = v40 + v41) > *(_QWORD *)(v9 + 32) )
  {
    v62 = v8 + 58184552;
    v72 = v35 - 1;
    v40 = MEMORY[0x181EAA840](a1: 34082368, a2: v39, a3: 34082368, a4: v74, a5: (unsigned int)v39);
    v37 = v62;
    v7 = v72;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v42;
    *(_QWORD *)v40 = 34082368;
    *(_DWORD *)(v40 + 8) = v39;
  }
  v62 = v40;
  v72 = v7;
  if ( v74 != 0 )
    MEMORY[0x184FF2C40](a1: 1, a2: v39, a3: v37, a4: v38, a5: v40, a6: v7);
  else
    MEMORY[0x181EB4960](a1: v7, a2: 1, a3: v8 + 376667784, a4: v38, a5: 0, a6: v62);
  v44 = MEMORY[0x185011A80](a1: v64, a2: v8 + 58184576, a3: v72, a4: v43, a5: v74, a6: v62);
  v46 = MEMORY[0x185011A80](a1: v63, a2: v8 + 58184600, a3: v44, a4: v45, a5: v74, a6: v62);
  v50 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v50 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v73 = v46;
    v51 = MEMORY[0x181EAA920](a1: v48, a2: v49, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v50 + 24;
    *(_DWORD *)v50 = 34082680;
    *(_DWORD *)(v50 + 4) = 0;
    *(_QWORD *)(v50 + 8) = 0;
    *(_QWORD *)(v50 + 16) = 0;
    v51 = v50;
  }
  v52 = v62;
  *(_BYTE *)(v51 + 12) = v74;
  *(_DWORD *)(v51 + 4) = (unsigned __int64)(v52 - v8) >> 3;
  sub_182763640(a1: v48, a2: v49, a3: v68, a4: v47, a5: v51);
  if ( *(int *)(v9 + 16) <= 0 )
    sub_18277F280(a1: v54, a2: v55, a3: v53);
  return v8;
}
