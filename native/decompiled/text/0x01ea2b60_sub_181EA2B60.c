// sub_181EA2B60
// rva 0x01ea2b60  size 1895  section .text  group text
// window base 0x181ea2b60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA2B60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned __int64 v39; // rax
  unsigned int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdx
  unsigned __int64 v49; // r9
  __int64 v50; // rcx
  unsigned int v51; // eax
  __int64 v52; // rcx
  unsigned int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rdx
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // r9
  __int64 v64; // rbx
  __int64 v65; // rdx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // r9
  __int64 v68; // rbx
  char v69; // [rsp+0h] [rbp-58h] BYREF
  __int64 v70; // [rsp+8h] [rbp-50h]
  _DWORD *v71; // [rsp+10h] [rbp-48h]
  _DWORD *v72; // [rsp+18h] [rbp-40h]
  __int64 v73; // [rsp+20h] [rbp-38h]
  unsigned int v74; // [rsp+28h] [rbp-30h]
  unsigned int v75; // [rsp+2Ch] [rbp-2Ch]
  __int64 v76; // [rsp+30h] [rbp-28h]
  __int64 v77; // [rsp+38h] [rbp-20h]
  __int64 v78; // [rsp+40h] [rbp-18h]
  __int64 v79; // [rsp+48h] [rbp-10h]
  __int64 v80; // [rsp+50h] [rbp-8h]

  if ( (unsigned __int64)&v69 <= *(_QWORD *)(v9 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v69);
  }
  else if ( a3 != v8 )
  {
    v10 = *(unsigned int *)(a3 + 16);
    if ( (_DWORD)v10 == 47076562 )
      v11 = v8 + 8LL * *(unsigned int *)(a3 + 4);
    else
      v11 = v8 + 8 * v10;
    if ( v11 != v8 && *(_DWORD *)v11 >> 3 != 4260452 )
      goto LABEL_27;
    if ( v11 == v8 )
      goto LABEL_17;
    result = *(_QWORD *)(v11 + 8);
    v13 = 34082680;
    v14 = 34081944;
    v80 = 34082368;
    v7 = 34082880;
    if ( *(_DWORD *)(a3 + 16) != 47076562 && result < 2048 )
      goto LABEL_28;
    if ( result >= 522177 )
      goto LABEL_18;
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280](a1, a2, a3, a4: 34081944, a5: 34082680);
    return result;
  }
  MEMORY[0x182771080]();
LABEL_17:
  result = MEMORY[0x182771080]();
LABEL_18:
  v79 = v7;
  v78 = v14;
  v77 = v13;
  v73 = a3;
  v76 = result;
  v15 = MEMORY[0x185013440](a1, a2, a3: 48, a4: v14, a5: result);
  v19 = MEMORY[0x185013440](a1: v17, a2: v18, a3: v15, a4: v16, a5: 522176);
  if ( v19 < 0 )
  {
    v74 = v19;
    v61 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v61 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v61 = sub_181EAA920(a1: v21, a2: v22, a3: v79, a4: v20);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v61 + 40;
      *(_DWORD *)v61 = 34082880;
      *(_DWORD *)(v61 + 4) = 0;
      *(_QWORD *)(v61 + 8) = 0;
      *(_QWORD *)(v61 + 16) = 0;
      *(_QWORD *)(v61 + 24) = 0;
      *(_QWORD *)(v61 + 32) = 0;
    }
    *(_DWORD *)(v61 + 20) = 46923644;
    *(_DWORD *)(v61 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v61 + 12) = (unsigned __int64)(v61 - v8) >> 3;
    v72 = (_DWORD *)v61;
    MEMORY[0x18503B9A0](a1: v21, a2: v22, a3: v61, a4: v20, a5: 0);
    v62 = (unsigned __int64)v72;
    v72[2] = 46004603;
    if ( (*(_DWORD *)v62 & 2) != 0 )
    {
      v34 = (v62 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v62 & 0xFFFFFFFFFFF80000LL) + ((v62 - v34) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v62 & 0xFFFFFFFFFFF80000LL) + ((v62 - v34) >> 9) + 0x38) = 0;
      v39 = v62;
    }
    else
    {
      v39 = v62;
    }
  }
  else
  {
    v23 = *(_QWORD *)(v9 + 40);
    v24 = ((unsigned int)v19 + 19LL) & 0x1FFFFFFF8LL;
    if ( v24 >= 0x20000 || (v63 = v23 + v24) > *(_QWORD *)(v9 + 32) )
    {
      v74 = v19;
      v23 = sub_181EAA840(a1: v21, a2: v22, a3: v80, a4: v20, a5: (unsigned int)v19);
      v19 = v74;
    }
    else
    {
      v64 = v80;
      *(_QWORD *)(v9 + 40) = v63;
      *(_QWORD *)v23 = v64;
      *(_DWORD *)(v23 + 8) = v19;
    }
    v72 = (_DWORD *)v23;
    v74 = v19;
    sub_181EB4960(a1: v19, a2: 0, a3: v8 + 376351544, a4: v23, a5: 0, a6: v23, a7: v69);
    v26 = MEMORY[0x185011C60](a1: 522176, a2: v8 + 58177920, a3: v74, a4: v25, a5: 0, a6: v72);
    v28 = MEMORY[0x185011C60](a1: v76, a2: v8 + 58177944, a3: v26, a4: v27, a5: 0, a6: v72);
    v32 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v32 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v75 = v28;
      v32 = sub_181EAA920(a1: v30, a2: v31, a3: v78, a4: v29);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v32 + 40;
      *(_DWORD *)v32 = 34081944;
      *(_DWORD *)(v32 + 4) = 0;
      *(_QWORD *)(v32 + 8) = 0;
      *(_QWORD *)(v32 + 16) = 0;
      *(_QWORD *)(v32 + 24) = 0;
      *(_QWORD *)(v32 + 32) = 0;
    }
    v71 = (_DWORD *)v32;
    *(_DWORD *)(v32 + 20) = 46923644;
    *(_DWORD *)(v32 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v32 + 12) = (unsigned __int64)(v32 - v8) >> 3;
    v33 = MEMORY[0x18503B9A0](a1: v30, a2: v31, a3: v32, a4: v29, a5: 0);
    v37 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v37 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v70 = v33;
      v38 = sub_181EAA920(a1: v35, a2: v36, a3: v77, a4: v34);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v37 + 24;
      *(_DWORD *)v37 = 34082680;
      *(_DWORD *)(v37 + 4) = 0;
      *(_QWORD *)(v37 + 8) = 0;
      *(_QWORD *)(v37 + 16) = 0;
      v38 = v37;
    }
    v39 = (unsigned __int64)v71;
    *(_DWORD *)(v38 + 4) = ((unsigned __int64)v72 - v8) >> 3;
    *(_DWORD *)(v39 + 8) = (unsigned __int64)(v38 - v8) >> 3;
    if ( (*(_DWORD *)v39 & 2) != 0 )
    {
      v34 = (v39 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v39 & 0xFFFFFFFFFFF80000LL) + ((v39 - v34) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v39 & 0xFFFFFFFFFFF80000LL) + ((v39 - v34) >> 9) + 0x38) = 0;
    }
  }
  while ( 1 )
  {
    MEMORY[0x182769900](a1: v35, a2: v36, a3: v39, a4: v34, a5: &a7);
LABEL_27:
    v73 = a3;
    result = MEMORY[0x18276FC00](a1, a2, a3: v11, a4, a5: v8 + 34083616);
LABEL_28:
    v79 = v7;
    v78 = v14;
    v77 = v13;
    v76 = result;
    v73 = a3;
    v40 = MEMORY[0x185013440](a1, a2, a3: 49, a4: v14, a5: result);
    v44 = MEMORY[0x185013440](a1: v42, a2: v43, a3: v40, a4: v41, a5: 2048);
    if ( v44 < 0 )
    {
      v75 = v44;
      v65 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v65 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v7 = v79;
        v65 = sub_181EAA920(a1: v46, a2: v47, a3: v79, a4: v45);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v65 + 40;
        *(_DWORD *)v65 = 34082880;
        *(_DWORD *)(v65 + 4) = 0;
        *(_QWORD *)(v65 + 8) = 0;
        *(_QWORD *)(v65 + 16) = 0;
        *(_QWORD *)(v65 + 24) = 0;
        *(_QWORD *)(v65 + 32) = 0;
      }
      *(_DWORD *)(v65 + 20) = 46923644;
      *(_DWORD *)(v65 + 16) = *(_DWORD *)(v8 + 374343896);
      *(_DWORD *)(v65 + 12) = (unsigned __int64)(v65 - v8) >> 3;
      v72 = (_DWORD *)v65;
      MEMORY[0x18503B9A0](a1: v46, a2: v47, a3: v65, a4: v45, a5: 0);
      v66 = (unsigned __int64)v72;
      v72[2] = 46004603;
      if ( (*(_DWORD *)v66 & 2) != 0 )
      {
        v34 = (v66 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v66 & 0xFFFFFFFFFFF80000LL) + ((v66 - v34) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v66 & 0xFFFFFFFFFFF80000LL) + ((v66 - v34) >> 9) + 0x38) = 0;
        v39 = v66;
      }
      else
      {
        v39 = v66;
      }
    }
    else
    {
      v48 = *(_QWORD *)(v9 + 40);
      v49 = ((unsigned int)v44 + 19LL) & 0x1FFFFFFF8LL;
      if ( v49 >= 0x20000 || (v67 = v48 + v49) > *(_QWORD *)(v9 + 32) )
      {
        v75 = v44;
        v48 = sub_181EAA840(a1: v46, a2: v47, a3: v80, a4: v45, a5: (unsigned int)v44);
        v44 = v75;
      }
      else
      {
        v68 = v80;
        *(_QWORD *)(v9 + 40) = v67;
        *(_QWORD *)v48 = v68;
        *(_DWORD *)(v48 + 8) = v44;
      }
      v72 = (_DWORD *)v48;
      v75 = v44;
      sub_181EB4960(a1: v44, a2: 0, a3: v8 + 376351544, a4: v48, a5: 0, a6: v48, a7: v69);
      v51 = MEMORY[0x185011C60](a1: 2048, a2: v8 + 58177968, a3: v75, a4: v50, a5: 0, a6: v72);
      v53 = MEMORY[0x185011C60](a1: v76, a2: v8 + 58177992, a3: v51, a4: v52, a5: 0, a6: v72);
      v57 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v57 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v74 = v53;
        v57 = sub_181EAA920(a1: v55, a2: v56, a3: v78, a4: v54);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v57 + 40;
        *(_DWORD *)v57 = 34081944;
        *(_DWORD *)(v57 + 4) = 0;
        *(_QWORD *)(v57 + 8) = 0;
        *(_QWORD *)(v57 + 16) = 0;
        *(_QWORD *)(v57 + 24) = 0;
        *(_QWORD *)(v57 + 32) = 0;
      }
      v71 = (_DWORD *)v57;
      *(_DWORD *)(v57 + 20) = 46923644;
      *(_DWORD *)(v57 + 16) = *(_DWORD *)(v8 + 374343896);
      *(_DWORD *)(v57 + 12) = (unsigned __int64)(v57 - v8) >> 3;
      v58 = MEMORY[0x18503B9A0](a1: v55, a2: v56, a3: v57, a4: v54, a5: 0);
      v59 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v59 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v70 = v58;
        v60 = sub_181EAA920(a1: v35, a2: v36, a3: v77, a4: v34);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v59 + 24;
        *(_DWORD *)v59 = 34082680;
        *(_DWORD *)(v59 + 4) = 0;
        *(_QWORD *)(v59 + 8) = 0;
        *(_QWORD *)(v59 + 16) = 0;
        v60 = v59;
      }
      v39 = (unsigned __int64)v71;
      *(_DWORD *)(v60 + 4) = ((unsigned __int64)v72 - v8) >> 3;
      *(_DWORD *)(v39 + 8) = (unsigned __int64)(v60 - v8) >> 3;
      if ( (*(_DWORD *)v39 & 2) != 0 )
      {
        v34 = (v39 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v39 & 0xFFFFFFFFFFF80000LL) + ((v39 - v34) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v39 & 0xFFFFFFFFFFF80000LL) + ((v39 - v34) >> 9) + 0x38) = 0;
      }
    }
  }
}
