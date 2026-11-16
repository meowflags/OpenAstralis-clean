// sub_18275A420
// rva 0x0275a420  size 851  section .text  group text
// window base 0x18275a420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18275A420(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6, char a7)
{
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r9
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rax
  char v44; // [rsp+0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+10h] [rbp-48h]
  __int64 v46; // [rsp+18h] [rbp-40h]
  __int64 v47; // [rsp+20h] [rbp-38h]
  __int64 v48; // [rsp+28h] [rbp-30h]
  __int64 v49; // [rsp+30h] [rbp-28h]
  __int64 v50; // [rsp+38h] [rbp-20h]
  __int64 v51; // [rsp+40h] [rbp-18h]
  unsigned int v52; // [rsp+4Ch] [rbp-Ch]
  unsigned int v53; // [rsp+50h] [rbp-8h]
  unsigned int v54; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)&v44 <= *(_QWORD *)(v9 + 8) )
  {
    v51 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_24;
  }
  v10 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_24:
    v51 = a3;
    sub_182771080(a1, a2, a3, a4, a5: v10, a6, a7: v44);
    goto LABEL_25;
  }
  v11 = *(unsigned int *)(v8 + 8 * v10 + 20);
  if ( (_DWORD)v11 == 0 )
  {
LABEL_25:
    v51 = a3;
    v22 = sub_182771080(a1, a2, a3, a4, a5: v10, a6, a7: v44);
    goto LABEL_26;
  }
  v12 = *(unsigned int *)(v8 + 8 * v11 + 12);
  v13 = v8 + 8 * v12;
  v14 = v8 + 353301280;
  if ( (_DWORD)v12 != 0 )
    v15 = v8 + 8 * v12;
  else
    v15 = v8 + 353301280;
  v16 = *(unsigned int *)(v8 + 8 * v10 + 24);
  if ( (_DWORD)v16 != 0 )
    v14 = v8 + 8 * v16;
  v50 = v8 + 8 * v16;
  v49 = v13;
  v51 = a3;
  v17 = (unsigned int)*(char *)(v14 + 12);
  v54 = v17 | *(char *)(v15 + 12);
  v48 = v15;
  v47 = v14;
  v18 = MEMORY[0x1850132E0](a1, a2: v17, a3: 1, a4: v13, a5: v15);
  v22 = MEMORY[0x1850132E0](a1: v20, a2: v21, a3: v18, a4: v19, a5: v47);
  v25 = v54;
  v7 = v22 << v54;
  if ( ((v22 << v54) & 0x80000000) != 0 )
  {
LABEL_26:
    v53 = v22;
    v39 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v39 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v52 = v7;
      v39 = MEMORY[0x181EAA920](a1: v23, a2: v24, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v39 + 40;
      *(_DWORD *)v39 = 34082880;
      *(_DWORD *)(v39 + 4) = 0;
      *(_QWORD *)(v39 + 8) = 0;
      *(_QWORD *)(v39 + 16) = 0;
      *(_QWORD *)(v39 + 24) = 0;
      *(_QWORD *)(v39 + 32) = 0;
      v52 = v7;
    }
    *(_DWORD *)(v39 + 20) = 46923644;
    *(_DWORD *)(v39 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v39 + 12) = (unsigned __int64)(v39 - v8) >> 3;
    v46 = v39;
    MEMORY[0x18503B9A0](a1: v23, a2: v24, a3: v39, a4: v25, a5: 0);
    v43 = v46;
    *(_DWORD *)(v46 + 8) = 46004603;
    if ( (*(_DWORD *)v43 & 2) != 0 )
      goto LABEL_30;
    while ( 1 )
    {
      v43 = sub_182769900(a1: v41, a2: v42, a3: v43, a4: v40, a5: &a7);
LABEL_30:
      v40 = (v43 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v43 & 0xFFFFFFFFFFF80000LL) + ((v43 - v40) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v43 & 0xFFFFFFFFFFF80000LL) + ((v43 - v40) >> 9) + 0x38) = 0;
    }
  }
  v26 = v8 + 373281248;
  v27 = *(_QWORD *)(v9 + 40);
  v28 = (v7 + 19LL) & 0x1FFFFFFF8LL;
  if ( v28 >= 0x20000 || (v29 = v27 + v28) > *(_QWORD *)(v9 + 32) )
  {
    v46 = v8 + 373281248;
    v53 = v22;
    v27 = MEMORY[0x181EAA840](a1: 34082368, a2: v24, a3: 34082368, a4: v26, a5: v7);
    v26 = v46;
    v22 = v53;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v29;
    *(_QWORD *)v27 = 34082368;
    *(_DWORD *)(v27 + 8) = v7;
  }
  v45 = v27;
  v46 = v26;
  v53 = v22;
  if ( v54 != 0 )
    MEMORY[0x184FF2C40](a1: 1, a2: v24, a3: v26, a4: v26, a5: v27, a6: v22);
  else
    MEMORY[0x181EB4960](a1: v22, a2: 0, a3: v8 + 376351544, a4: v26, a5: 0, a6: v45);
  v31 = MEMORY[0x185011A80](a1: v47, a2: v8 + 58184288, a3: v53, a4: v30, a5: v54, a6: v45);
  v33 = MEMORY[0x185011A80](a1: v48, a2: v46, a3: v31, a4: v32, a5: v54, a6: v45);
  v36 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v36 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v52 = v33;
    v36 = MEMORY[0x181EAA920](a1: v34, a2: v35, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v36 + 24;
    *(_DWORD *)v36 = 34082680;
    *(_DWORD *)(v36 + 4) = 0;
    *(_QWORD *)(v36 + 8) = 0;
    *(_QWORD *)(v36 + 16) = 0;
  }
  v37 = v45;
  *(_BYTE *)(v36 + 12) = v54;
  *(_DWORD *)(v36 + 4) = (unsigned __int64)(v37 - v8) >> 3;
  if ( *(int *)(v9 + 16) <= 0 )
    sub_18277F280(a1: v34, a2: v35, a3: v36);
  return v36;
}
