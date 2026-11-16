// sub_181ED2FA0
// rva 0x01ed2fa0  size 1171  section .text  group text
// window base 0x181ed2fa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED2FA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  unsigned int v12; // ebp
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r15
  _DWORD *v16; // rax
  int v17; // edx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // edx
  __int64 v29; // rsi
  __int64 v30; // r10
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rdx
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // r9
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdx
  unsigned int v42; // ebp
  int v43; // eax
  __int64 v44; // r8
  int v45; // edx
  __int64 v46; // rcx
  __int64 result; // rax
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // r8
  unsigned __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  unsigned __int64 v55; // r8
  __int64 v56; // r8
  char v57; // [rsp+0h] [rbp-58h] BYREF
  __int64 v58; // [rsp+10h] [rbp-48h]
  _DWORD *v59; // [rsp+18h] [rbp-40h]
  unsigned int v60; // [rsp+24h] [rbp-34h]
  _DWORD *v61; // [rsp+28h] [rbp-30h]
  __int64 v62; // [rsp+30h] [rbp-28h]
  __int64 v63; // [rsp+38h] [rbp-20h]
  __int64 v64; // [rsp+40h] [rbp-18h]
  int v65; // [rsp+4Ch] [rbp-Ch]
  int v66; // [rsp+50h] [rbp-8h]
  unsigned int v67; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)&v57 <= *(_QWORD *)(v15 + 8) )
  {
    v64 = a5;
    v63 = a3;
    v23 = sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v57);
LABEL_24:
    v61 = (_DWORD *)v23;
    v23 = MEMORY[0x182771080]();
    goto LABEL_25;
  }
  v64 = a5;
  v63 = a3;
  v16 = (_DWORD *)MEMORY[0x1827D1940]();
  if ( v16 == (_DWORD *)v14 )
    return sub_181ED318B(
             a1: v18,
             a2: v19,
             a3: v17,
             a4: (int)v14 + 353301280,
             a5: v20,
             a6: v21,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12);
  v62 = v14 + 353301280;
  v22 = *(_QWORD *)(v14 + 8LL * (*v16 >> 3) + 104);
  v61 = v16;
  v23 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v13 + v22))(a1: v18, a2: v19, a3: v16);
  if ( v23 == v14 )
    v26 = v62;
  else
    v26 = v23;
  v62 = v26;
  v27 = *(unsigned int *)(v26 + 4);
  if ( (_DWORD)v27 == 0 )
    goto LABEL_24;
  v28 = *(_DWORD *)(v14 + 8 * v27 + 8);
  if ( v28 == 0 )
  {
    v61 = (_DWORD *)v23;
    v45 = *(unsigned __int8 *)(v14 + 58179861);
    v44 = v14 + 376660432;
    v42 = 0;
    v43 = 1411683850;
    goto LABEL_14;
  }
  v12 = *(char *)(v26 + 12);
  v29 = *(unsigned int *)(v14 + 374343896);
  v30 = v26;
  v31 = (v28 >> *(_BYTE *)(v26 + 12)) + 6;
  v32 = 34082880;
  v33 = 34082880;
  if ( (int)v31 < 0 )
  {
LABEL_25:
    v67 = v12;
    v61 = (_DWORD *)v23;
    v51 = *(_QWORD *)(v15 + 40);
    if ( (unsigned __int64)(v51 + 40) > *(_QWORD *)(v15 + 32) )
    {
      v66 = v31;
      v60 = v29;
      v51 = sub_181EAA920(a1: v31, a2: v29, a3: v33);
      v29 = v60;
    }
    else
    {
      *(_QWORD *)(v15 + 40) = v51 + 40;
      *(_DWORD *)v51 = 34082880;
      *(_DWORD *)(v51 + 4) = 0;
      *(_QWORD *)(v51 + 8) = 0;
      *(_QWORD *)(v51 + 16) = 0;
      *(_QWORD *)(v51 + 24) = 0;
      *(_QWORD *)(v51 + 32) = 0;
      v66 = v31;
    }
    *(_DWORD *)(v51 + 20) = 46923644;
    *(_DWORD *)(v51 + 16) = v29;
    *(_DWORD *)(v51 + 12) = (unsigned __int64)(v51 - v14) >> 3;
    v59 = (_DWORD *)v51;
    MEMORY[0x18503B9A0](a1: v31, a2: v29, a3: v51, a4: v32, a5: 0);
    v55 = (unsigned __int64)v59;
    v59[2] = 46004603;
    if ( (*(_DWORD *)v55 & 2) == 0 )
      goto LABEL_28;
    goto LABEL_34;
  }
  v34 = v12;
  v35 = (unsigned int)((_DWORD)v31 << v12);
  if ( (int)v35 < 0 )
    goto LABEL_29;
  v36 = *(_QWORD *)(v15 + 40);
  v37 = ((unsigned int)v35 + 19LL) & 0x1FFFFFFF8LL;
  if ( v37 >= 0x20000 || (v38 = v36 + v37) > *(_QWORD *)(v15 + 32) )
  {
    v66 = v35;
    v67 = v12;
    v59 = (_DWORD *)(v14 + 58179848);
    v61 = (_DWORD *)v23;
    v36 = sub_181EAA840(a1: v35, a2: v29, a3: 34082368, a4: 34082368, a5: v35);
    v12 = v67;
    v30 = v62;
  }
  else
  {
    *(_QWORD *)(v15 + 40) = v38;
    *(_QWORD *)v36 = 34082368;
    *(_DWORD *)(v36 + 8) = v35;
    v66 = v35;
    v59 = (_DWORD *)(v14 + 58179848);
    v61 = (_DWORD *)v23;
  }
  v67 = v12;
  v58 = v36;
  MEMORY[0x184FF2C40](a1: v12, a2: v29, a3: v30, a4: v58, a5: v58, a6: 0);
  v41 = *(unsigned int *)(v62 + 4);
  if ( (_DWORD)v41 == 0 )
  {
    MEMORY[0x182771080](a1: v39, a2: v40, a3: v58);
LABEL_34:
    v52 = (v55 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v55 & 0xFFFFFFFFFFF80000LL) + ((v55 - v52) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v55 & 0xFFFFFFFFFFF80000LL) + ((v55 - v52) >> 9) + 0x38) = 0;
    while ( 1 )
    {
LABEL_28:
      v23 = MEMORY[0x182769900](a1: v53, a2: v54, a3: v55, a4: v52, a5: &a7);
LABEL_29:
      v66 = v35;
      v67 = v12;
      v61 = (_DWORD *)v23;
      v56 = *(_QWORD *)(v15 + 40);
      if ( (unsigned __int64)(v56 + 40) > *(_QWORD *)(v15 + 32) )
      {
        v60 = v29;
        v56 = sub_181EAA920(a1: v35, a2: v29, a3: v33);
        v29 = v60;
      }
      else
      {
        *(_QWORD *)(v15 + 40) = v56 + 40;
        *(_DWORD *)v56 = 34082880;
        *(_DWORD *)(v56 + 4) = 0;
        *(_QWORD *)(v56 + 8) = 0;
        *(_QWORD *)(v56 + 16) = 0;
        *(_QWORD *)(v56 + 24) = 0;
        *(_QWORD *)(v56 + 32) = 0;
      }
      *(_DWORD *)(v56 + 20) = 46923644;
      *(_DWORD *)(v56 + 16) = v29;
      *(_DWORD *)(v56 + 12) = (unsigned __int64)(v56 - v14) >> 3;
      v59 = (_DWORD *)v56;
      MEMORY[0x18503B9A0](a1: v35, a2: v29, a3: v56, a4: v34, a5: 0);
      v55 = (unsigned __int64)v59;
      v59[2] = 46004603;
      if ( (*(_DWORD *)v55 & 2) != 0 )
      {
        v52 = (v55 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v55 & 0xFFFFFFFFFFF80000LL) + ((v55 - v52) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v55 & 0xFFFFFFFFFFF80000LL) + ((v55 - v52) >> 9) + 0x38) = 0;
      }
    }
  }
  MEMORY[0x184FF2C40](
    a1: v67,
    a2: v40,
    a3: v59,
    a4: (unsigned int)*(char *)(v62 + 12),
    a5: v58,
    a6: (unsigned int)(*(_DWORD *)(v14 + 8 * v41 + 8) >> *(_BYTE *)(v62 + 12)));
  v42 = v67;
  v43 = 0;
  v44 = v58;
  v45 = 0;
LABEL_14:
  v46 = *(_QWORD *)(v15 + 40);
  if ( (unsigned __int64)(v46 + 24) > *(_QWORD *)(v15 + 32) )
  {
    v67 = v42;
    v66 = v43;
    v58 = v44;
    v65 = v45;
    v46 = sub_181EAA920(a1: v24, a2: v25, a3: 34082680);
    LOBYTE(v42) = v67;
    v43 = v66;
    v44 = v58;
    LOBYTE(v45) = v65;
  }
  else
  {
    *(_QWORD *)(v15 + 40) = v46 + 24;
    *(_DWORD *)v46 = 34082680;
    *(_DWORD *)(v46 + 4) = 0;
    *(_QWORD *)(v46 + 8) = 0;
    *(_QWORD *)(v46 + 16) = 0;
  }
  *(_BYTE *)(v46 + 13) = v45;
  *(_BYTE *)(v46 + 12) = v42;
  *(_DWORD *)(v46 + 8) = v43;
  *(_DWORD *)(v46 + 4) = (unsigned __int64)(v44 - v14) >> 3;
  v58 = v46;
  result = MEMORY[0x181EEF400](a1: v24, a2: v25, a3: v64, a4: v46, a5: v46);
  if ( *(int *)(v15 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v49, a2: v50, a3: v48, a4: v58);
  return result;
}
