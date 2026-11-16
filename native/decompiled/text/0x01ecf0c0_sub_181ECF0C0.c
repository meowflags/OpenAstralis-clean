// sub_181ECF0C0
// rva 0x01ecf0c0  size 1596  section .text  group text
// window base 0x181ecf0c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ECF0C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  signed __int32 v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdi
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r9
  _DWORD *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  unsigned __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rsi
  _DWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rsi
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rbx
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rdx
  unsigned __int64 v66; // rbx
  char v67; // [rsp+0h] [rbp-78h] BYREF
  _DWORD *v68; // [rsp+8h] [rbp-70h]
  __int64 v69; // [rsp+10h] [rbp-68h]
  _DWORD *v70; // [rsp+18h] [rbp-60h]
  __int64 v71; // [rsp+20h] [rbp-58h]
  __int64 v72; // [rsp+28h] [rbp-50h]
  _DWORD *v73; // [rsp+30h] [rbp-48h]
  __int64 v74; // [rsp+38h] [rbp-40h]
  unsigned int v75; // [rsp+44h] [rbp-34h]
  __int64 v76; // [rsp+48h] [rbp-30h]
  __int64 v77; // [rsp+50h] [rbp-28h]
  __int64 v78; // [rsp+58h] [rbp-20h]
  __int64 v79; // [rsp+60h] [rbp-18h]
  signed __int32 v80; // [rsp+6Ch] [rbp-Ch]
  __int64 v81; // [rsp+70h] [rbp-8h]

  v78 = a3;
  v77 = a5;
  v76 = a6;
  if ( (unsigned __int64)&v67 <= *(_QWORD *)(v9 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v67);
LABEL_38:
    MEMORY[0x182771080](a1: v11, a2, a3, a4: v13);
LABEL_39:
    MEMORY[0x182771080](a1: v31, a2: v32, a3: v72);
    goto LABEL_40;
  }
  v10 = __sync_fetch_and_add((volatile signed __int32 *)(v8 + 376660100), 1u);
  v11 = *(unsigned int *)(v9 + 72);
  if ( (_DWORD)v11 != 0 )
  {
    v12 = *(unsigned int *)(v8 + 8 * v11 + 72);
    if ( (_DWORD)v12 != 0 )
    {
      v13 = v8 + 8 * v12;
    }
    else
    {
      v11 = v8 + 8 * v11;
      v13 = v11;
    }
  }
  else
  {
    v13 = v8;
  }
  v14 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v14 == 0 )
    goto LABEL_38;
  v15 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v15 + 32) > *(_QWORD *)(v9 + 32) )
  {
    v75 = *(_DWORD *)(a3 + 8);
    v74 = v13;
    v80 = v10;
    v15 = sub_181EAA920(a1: v15, a2, a3: 40470336);
    v14 = v75;
    v13 = v74;
    v10 = v80;
    a5 = v77;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v15 + 32;
    *(_DWORD *)v15 = 40470336;
    *(_DWORD *)(v15 + 4) = 0;
    *(_QWORD *)(v15 + 8) = 0;
    *(_QWORD *)(v15 + 16) = 0;
    *(_QWORD *)(v15 + 24) = 0;
  }
  *(_DWORD *)(v15 + 20) = v10;
  *(_DWORD *)(v15 + 12) = (unsigned __int64)(v13 - v8) >> 3;
  v74 = v15;
  v73 = (_DWORD *)(v8 + 8 * v14);
  v16 = (_DWORD *)MEMORY[0x1859E7560](a1: 1, a2, a3: v73, a4: a5, a5, a6: v15);
  if ( v16 != (_DWORD *)v8 )
  {
    if ( *v16 >> 3 != 5058792 )
    {
      v73 = v16;
      goto LABEL_11;
    }
    v73 = v16;
    if ( (unsigned int)sub_181ECAA80(a1: v18, a2: v19, a3: (__int64)v16, a4: v17, a5: v20, a6: v21, a7: v67) == 0 )
    {
      sub_181ECA360(a1: v36, a2: v37, a3: (__int64)v73, a4: v35, a5: v38, a6: v39);
      goto LABEL_11;
    }
    if ( v77 != v8 )
    {
      v72 = MEMORY[0x1827C6220](a1: v36, a2: v37, a3: v77);
      v64 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v64 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v64 = sub_181EAA920(a1: v62, a2: v63, a3: 36449600);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v64 + 40;
        *(_DWORD *)v64 = 36449600;
        *(_DWORD *)(v64 + 4) = 0;
        *(_QWORD *)(v64 + 8) = 0;
        *(_QWORD *)(v64 + 16) = 0;
        *(_QWORD *)(v64 + 24) = 0;
        *(_QWORD *)(v64 + 32) = 0;
      }
      *(_DWORD *)(v64 + 20) = 46923644;
      *(_DWORD *)(v64 + 16) = *(_DWORD *)(v8 + 374343896);
      *(_DWORD *)(v64 + 12) = (unsigned __int64)(v64 - v8) >> 3;
      v71 = v64;
      MEMORY[0x18503B9A0](a1: v62, a2: v63, a3: v64, a4: v64, a5: 0);
      v65 = v71;
      *(_DWORD *)(v71 + 8) = (unsigned __int64)(v72 - v8) >> 3;
      if ( (*(_DWORD *)v65 & 2) != 0 )
      {
        v41 = v65 & 0xFFFFFFFFFFF80000LL;
        v66 = (v65 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v65 & 0xFFFFFFFFFFF80000LL) + ((v65 - v66) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v65 & 0xFFFFFFFFFFF80000LL) + ((v65 - v66) >> 9) + 0x38) = 0;
        v44 = v65;
      }
      else
      {
        v44 = v65;
      }
      goto LABEL_26;
    }
    v51 = (_DWORD *)MEMORY[0x182771080]();
    v48 = *v51 >> 3;
    if ( *(__int16 *)(v8 + 8 * v48 + 62) < 5 )
    {
      v71 = (__int64)v51;
    }
    else
    {
      v48 = *(unsigned int *)(v8 + 8 * v48 + 16);
      if ( *(_DWORD *)(v8 + 8 * v48 + 28) == 88010 )
        goto LABEL_31;
      v71 = (__int64)v51;
    }
    while ( 1 )
    {
      v40 = *(unsigned int *)(v78 + 8);
      if ( (_DWORD)v40 == 0 )
        break;
      MEMORY[0x1859E8320](a1: v49, a2: v50, a3: v8 + 8 * v40, a4: v48, a5: v77, a6: v74);
      v44 = v71;
LABEL_26:
      v70 = (_DWORD *)MEMORY[0x182769900](a1: v42, a2: v43, a3: v44, a4: v41, a5: &a7);
      v47 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v47 + 16) > *(_QWORD *)(v9 + 32) )
      {
        v47 = sub_181EAA920(a1: v45, a2: v46, a3: v79);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v47 + 16;
        *(_DWORD *)v47 = 40471744;
        *(_DWORD *)(v47 + 4) = 0;
        *(_QWORD *)(v47 + 8) = 0;
      }
      v69 = v47;
      MEMORY[0x18AF15840](a1: v45, a2: v46, a3: v47, a4: v47);
      v51 = v70;
      v52 = *v70 >> 3;
      if ( *(__int16 *)(v8 + 8 * v52 + 62) < 5 )
      {
        v71 = (__int64)v70;
      }
      else
      {
        v53 = *(unsigned int *)(v8 + 8 * v52 + 16);
        if ( *(_DWORD *)(v8 + 8 * v53 + 28) == 88010 )
        {
LABEL_31:
          v72 = (__int64)v51;
          if ( v76 != v8 )
          {
            v70 = (_DWORD *)MEMORY[0x1827C6220](a1: v49, a2: v50, a3: v76);
            v56 = *(_QWORD *)(v9 + 40);
            if ( (unsigned __int64)(v56 + 40) > *(_QWORD *)(v9 + 32) )
            {
              v56 = sub_181EAA920(a1: v54, a2: v55, a3: 35802856);
            }
            else
            {
              *(_QWORD *)(v9 + 40) = v56 + 40;
              *(_DWORD *)v56 = 35802856;
              *(_DWORD *)(v56 + 4) = 0;
              *(_QWORD *)(v56 + 8) = 0;
              *(_QWORD *)(v56 + 16) = 0;
              *(_QWORD *)(v56 + 24) = 0;
              *(_QWORD *)(v56 + 32) = 0;
            }
            v68 = (_DWORD *)v56;
            *(_DWORD *)(v56 + 20) = 46923644;
            *(_DWORD *)(v56 + 16) = *(_DWORD *)(v8 + 374343896);
            *(_DWORD *)(v56 + 12) = (unsigned __int64)(v56 - v8) >> 3;
            MEMORY[0x18503B9A0](a1: v54, a2: v55, a3: v56, a4: v56, a5: 0);
            v60 = (unsigned __int64)v68;
            v68[2] = ((unsigned __int64)v70 - v8) >> 3;
            if ( (*(_DWORD *)v60 & 2) == 0 )
            {
LABEL_35:
              MEMORY[0x18503CF20](a1: v58, a2: v59, a3: v60, a4: v57, a5: v72);
              v81 = v7;
              v71 = (__int64)v68;
              continue;
            }
LABEL_40:
            v57 = v60 & 0xFFFFFFFFFFF80000LL;
            v61 = (v60 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v60 & 0xFFFFFFFFFFF80000LL) + ((v60 - v61) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v60 & 0xFFFFFFFFFFF80000LL) + ((v60 - v61) >> 9) + 0x38) = 0;
            goto LABEL_35;
          }
LABEL_55:
          v71 = MEMORY[0x18276BEE0](a1: v49, a2: v50, a3: v53, a4: v72);
        }
        else
        {
          v71 = (__int64)v70;
        }
      }
    }
    MEMORY[0x182771080]();
    goto LABEL_55;
  }
  v73 = v16;
LABEL_11:
  sub_181ED38E0(a1: v18, a2: v19, a3: v8 + 376660112);
  v79 = 40471744;
  v26 = sub_181ECE500(a1: v23, a2: v24, a3: v78, a4: v22, a5: v76, a6: v25, a7: v67);
  v29 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v29 + 16) > *(_QWORD *)(v9 + 32) )
  {
    v71 = (__int64)v26;
    v29 = sub_181EAA920(a1: v27, a2: v28, a3: v79);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v29 + 16;
    *(_DWORD *)v29 = 40471744;
    *(_DWORD *)(v29 + 4) = 0;
    *(_QWORD *)(v29 + 8) = 0;
    v71 = (__int64)v26;
  }
  v72 = v29;
  MEMORY[0x18AF15840]();
  v33 = *(unsigned int *)(v78 + 8);
  if ( (_DWORD)v33 == 0 )
    goto LABEL_39;
  MEMORY[0x1859E8320](a1: v31, a2: v32, a3: v8 + 8 * v33, a4: v30, a5: v77, a6: v74);
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v71;
}
