// sub_1815A9E60
// rva 0x015a9e60  size 891  section .text  group text
// window base 0x1815a9e60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A9E60(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rdx
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r9
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // [rsp+0h] [rbp-58h] BYREF
  __int64 v53; // [rsp+8h] [rbp-50h]
  __int64 v54; // [rsp+10h] [rbp-48h]
  __int64 v55; // [rsp+18h] [rbp-40h]
  __int64 v56; // [rsp+20h] [rbp-38h]
  unsigned int *v57; // [rsp+28h] [rbp-30h]
  __int64 v58; // [rsp+30h] [rbp-28h]
  __int64 v59; // [rsp+38h] [rbp-20h]
  __int64 v60; // [rsp+40h] [rbp-18h]
  int v61; // [rsp+48h] [rbp-10h]
  unsigned int v62; // [rsp+4Ch] [rbp-Ch]
  int v63; // [rsp+50h] [rbp-8h]
  unsigned int v64; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)&v52 <= *(_QWORD *)(v9 + 8) )
  {
    v57 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_25;
  }
  v10 = a3[1];
  v11 = v8 + 8 * v10;
  v12 = v8 + 353301280;
  if ( (_DWORD)v10 != 0 )
    v13 = v8 + 8 * v10;
  else
    v13 = v8 + 353301280;
  v14 = a3[2];
  v15 = v8 + 8 * v14;
  if ( (_DWORD)v14 != 0 )
    v16 = v8 + 8 * v14;
  else
    v16 = v8 + 353301280;
  v17 = a3[3];
  v18 = v8 + 8 * v17;
  if ( (_DWORD)v17 != 0 )
    v12 = v8 + 8 * v17;
  v60 = v8 + 8 * v17;
  v59 = v15;
  v58 = v11;
  v57 = a3;
  v19 = (unsigned int)*(char *)(v16 + 12);
  v64 = *(char *)(v12 + 12) | v19 | *(char *)(v13 + 12);
  v56 = v13;
  v55 = v12;
  v54 = v16;
  v20 = MEMORY[0x1850132E0](a1: v18, a2: v19, a3: 38);
  v24 = MEMORY[0x1850132E0](a1: v22, a2: v23, a3: v20, a4: v21, a5: v54);
  v28 = MEMORY[0x1850132E0](a1: v26, a2: v27, a3: v24, a4: v25, a5: v55);
  v63 = v28;
  v7 = v28 - 1;
  v30 = v8 + 57669984;
  v31 = v64;
  v32 = (unsigned int)(v28 << v64);
  if ( (int)v32 < 0 )
  {
LABEL_25:
    v62 = v7;
    v47 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v47 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v61 = v32;
      v47 = MEMORY[0x181EAA920](a1: v29, a2: v32, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v47 + 40;
      *(_DWORD *)v47 = 34082880;
      *(_DWORD *)(v47 + 4) = 0;
      *(_QWORD *)(v47 + 8) = 0;
      *(_QWORD *)(v47 + 16) = 0;
      *(_QWORD *)(v47 + 24) = 0;
      *(_QWORD *)(v47 + 32) = 0;
      v61 = v32;
    }
    *(_DWORD *)(v47 + 20) = 46923644;
    *(_DWORD *)(v47 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v47 + 12) = (unsigned __int64)(v47 - v8) >> 3;
    v53 = v47;
    MEMORY[0x18503B9A0](a1: v29, a2: v32, a3: v47, a4: v31, a5: 0);
    v51 = v53;
    *(_DWORD *)(v53 + 8) = 46004603;
    if ( (*(_DWORD *)v51 & 2) != 0 )
      goto LABEL_29;
    while ( 1 )
    {
      v51 = MEMORY[0x182769900](a1: v49, a2: v50, a3: v51, a4: v48, a5: &a7);
LABEL_29:
      v48 = (v51 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + ((v51 - v48) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + ((v51 - v48) >> 9) + 0x38) = 0;
    }
  }
  v33 = *(_QWORD *)(v9 + 40);
  v34 = ((unsigned int)v32 + 19LL) & 0x1FFFFFFF8LL;
  if ( v34 >= 0x20000 || (v35 = v33 + v34) > *(_QWORD *)(v9 + 32) )
  {
    v53 = v8 + 57669984;
    v62 = v28 - 1;
    v33 = MEMORY[0x181EAA840](a1: 34082368, a2: v32, a3: 34082368, a4: v64, a5: (unsigned int)v32);
    v30 = v53;
    v7 = v62;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v35;
    *(_QWORD *)v33 = 34082368;
    *(_DWORD *)(v33 + 8) = v32;
  }
  v53 = v33;
  v62 = v7;
  if ( v64 != 0 )
    MEMORY[0x184FF2C40](a1: 1, a2: v32, a3: v30, a4: v31, a5: v33, a6: v7);
  else
    MEMORY[0x181EB4960](a1: v7, a2: 1, a3: v8 + 376614440, a4: v31, a5: 0, a6: v53);
  v37 = MEMORY[0x185011A80](a1: v55, a2: v8 + 57670008, a3: v62, a4: v36, a5: v64, a6: v53);
  v39 = MEMORY[0x185011A80](a1: v54, a2: v8 + 57670032, a3: v37, a4: v38, a5: v64, a6: v53);
  v41 = MEMORY[0x185011A80](a1: v56, a2: v8 + 57670056, a3: v39, a4: v40, a5: v64, a6: v53);
  v44 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v44 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v63 = v41;
    v44 = MEMORY[0x181EAA920](a1: v42, a2: v43, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v44 + 24;
    *(_DWORD *)v44 = 34082680;
    *(_DWORD *)(v44 + 4) = 0;
    *(_QWORD *)(v44 + 8) = 0;
    *(_QWORD *)(v44 + 16) = 0;
  }
  v45 = v53;
  *(_BYTE *)(v44 + 12) = v64;
  *(_DWORD *)(v44 + 4) = (unsigned __int64)(v45 - v8) >> 3;
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v42, a2: v43, a3: v44, a4: v45, a5: v45);
  return v44;
}
