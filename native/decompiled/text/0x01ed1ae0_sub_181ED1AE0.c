// sub_181ED1AE0
// rva 0x01ed1ae0  size 2195  section .text  group text
// window base 0x181ed1ae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED1AE0(
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
        int a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  _DWORD *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  _DWORD *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdx
  _DWORD *v35; // rbx
  unsigned int v36; // edx
  unsigned int v37; // ebp
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rdx
  unsigned __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rsi
  unsigned int v48; // ebp
  int v49; // ecx
  _DWORD *v50; // rax
  int v51; // edx
  __int64 v52; // rbx
  __int64 v53; // rsi
  __int64 v54; // r8
  __int16 v55; // dx
  unsigned __int64 v56; // r9
  unsigned __int64 v57; // rbx
  __int64 v58; // r8
  unsigned __int64 v59; // r8
  __int64 v60; // r8
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rcx
  int v64; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v65; // [rsp+10h] [rbp-48h]
  unsigned int v66; // [rsp+1Ch] [rbp-3Ch]
  __int64 v67; // [rsp+20h] [rbp-38h]
  __int64 v68; // [rsp+28h] [rbp-30h]
  _DWORD *v69; // [rsp+30h] [rbp-28h]
  __int64 v70; // [rsp+40h] [rbp-18h]
  int v71; // [rsp+4Ch] [rbp-Ch]
  int v72; // [rsp+50h] [rbp-8h]
  unsigned int v73; // [rsp+54h] [rbp-4h]

  v70 = a3;
  if ( (unsigned __int64)&v64 <= *(_QWORD *)(v16 + 8) )
  {
    v25 = (_DWORD *)sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v64);
    if ( v55 < 5 || *(_DWORD *)(v15 + 8 * v54 + 28) != 88080 )
      goto LABEL_20;
    v30 = *(_QWORD *)(v15 + 8LL * (*v25 >> 3) + 104);
    v69 = v25;
    v31 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v14 + v30))(a1: v26, a2: v27, a3: v25);
    if ( v31 == v15 )
      v33 = v15 + 353301280;
    else
      v33 = v31;
    v34 = *(unsigned int *)(v33 + 4);
    v35 = (_DWORD *)(v15 + 58179728);
    if ( (_DWORD)v34 != 0 )
    {
      v36 = *(_DWORD *)(v15 + 8 * v34 + 8);
      if ( v36 == 0 )
      {
        v67 = v31;
        v51 = *(unsigned __int8 *)(v15 + 58179741);
        v50 = (_DWORD *)(v15 + 376660264);
        v48 = 0;
        v49 = 322040390;
        goto LABEL_36;
      }
      v37 = *(char *)(v33 + 12);
      v38 = *(unsigned int *)(v15 + 374343896);
      v68 = v33;
      v39 = (v36 >> v37) + 38;
      v40 = 34082880;
      if ( (int)v39 < 0 )
      {
        v73 = v37;
        v67 = v31;
        v58 = *(_QWORD *)(v16 + 40);
        if ( (unsigned __int64)(v58 + 40) > *(_QWORD *)(v16 + 32) )
        {
          v72 = (v36 >> v37) + 38;
          v66 = v38;
          v58 = sub_181EAA920(a1: v39, a2: v38, a3: 34082880);
          v38 = v66;
        }
        else
        {
          *(_QWORD *)(v16 + 40) = v58 + 40;
          *(_DWORD *)v58 = 34082880;
          *(_DWORD *)(v58 + 4) = 0;
          *(_QWORD *)(v58 + 8) = 0;
          *(_QWORD *)(v58 + 16) = 0;
          *(_QWORD *)(v58 + 24) = 0;
          *(_QWORD *)(v58 + 32) = 0;
          v72 = (v36 >> v37) + 38;
        }
        *(_DWORD *)(v58 + 20) = 46923644;
        *(_DWORD *)(v58 + 16) = v38;
        *(_DWORD *)(v58 + 12) = (unsigned __int64)(v58 - v15) >> 3;
        v65 = (_DWORD *)v58;
        MEMORY[0x18503B9A0](a1: v39, a2: v38, a3: v58, a4: v40, a5: 0);
        v59 = (unsigned __int64)v65;
        v65[2] = 46004603;
        if ( (*(_DWORD *)v59 & 2) != 0 )
        {
          v62 = (v59 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v59 & 0xFFFFFFFFFFF80000LL) + ((v59 - v62) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v59 & 0xFFFFFFFFFFF80000LL) + ((v59 - v62) >> 9) + 0x38) = 0;
          v25 = (_DWORD *)v59;
        }
        else
        {
          v25 = (_DWORD *)v59;
        }
      }
      else
      {
        v41 = v37;
        v42 = (unsigned int)((_DWORD)v39 << v37);
        if ( (int)v42 >= 0 )
        {
          v43 = *(_QWORD *)(v16 + 40);
          v44 = ((unsigned int)v42 + 19LL) & 0x1FFFFFFF8LL;
          v45 = 34082368;
          if ( v44 >= 0x20000 || (v56 = v43 + v44) > *(_QWORD *)(v16 + 32) )
          {
            v72 = v42;
            v73 = v37;
            v65 = (_DWORD *)(v15 + 58179728);
            v67 = v31;
            v43 = sub_181EAA840(a1: v42, a2: v38, a3: 34082368, a4: 34082368, a5: v42);
            v37 = v73;
            v35 = v65;
          }
          else
          {
            *(_QWORD *)(v16 + 40) = v56;
            *(_QWORD *)v43 = 34082368;
            *(_DWORD *)(v43 + 8) = v42;
            v72 = v42;
            v67 = v31;
          }
          v73 = v37;
          v65 = (_DWORD *)v43;
          MEMORY[0x184FF2C40](a1: v37, a2: v65, a3: v35, a4: v45, a5: v65, a6: 0);
          MEMORY[0x184FF2C40](a1: v73, a2: v47, a3: v68, a4: v46, a5: v65, a6: 38);
          v48 = v73;
          v49 = 0;
          v50 = v65;
          v51 = 0;
LABEL_36:
          v52 = *(_QWORD *)(v16 + 40);
          v53 = v52 + 24;
          if ( (unsigned __int64)(v52 + 24) > *(_QWORD *)(v16 + 32) )
          {
            v73 = v48;
            v72 = v49;
            v65 = v50;
            v71 = v51;
            v52 = sub_181EAA920(a1: v32, a2: 34082680, a3: 34082680);
            LOBYTE(v48) = v73;
            v49 = v72;
            v50 = v65;
            LOBYTE(v51) = v71;
          }
          else
          {
            *(_QWORD *)(v16 + 40) = v53;
            *(_DWORD *)v52 = 34082680;
            *(_DWORD *)(v52 + 4) = 0;
            *(_QWORD *)(v52 + 8) = 0;
            *(_QWORD *)(v52 + 16) = 0;
          }
          *(_BYTE *)(v52 + 13) = v51;
          *(_BYTE *)(v52 + 12) = v48;
          *(_DWORD *)(v52 + 8) = v49;
          *(_DWORD *)(v52 + 4) = ((unsigned __int64)v50 - v15) >> 3;
          MEMORY[0x1828BF260](a1: v32, a2: v53, a3: v52);
          a3 = v70;
          *(_DWORD *)(v70 + 20) = 47082531;
          __faststorefence();
          if ( (*(_DWORD *)a3 & 2) != 0 )
          {
            v57 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v57) >> 9) + 0x38) != 0 )
              *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v57) >> 9) + 0x38) = 0;
          }
LABEL_12:
          v20 = *(unsigned int *)(a3 + 24);
          if ( *(_DWORD *)(v15 + 8 * v20 + 28) == 1 )
          {
            *(_QWORD *)(v15 + 8 * v20 + 16) = 0;
            __faststorefence();
            JUMPOUT(0x181ED1C59LL);
          }
          JUMPOUT(0x181ED1CE6LL);
        }
        v72 = v42;
        v73 = v37;
        v67 = v31;
        v60 = *(_QWORD *)(v16 + 40);
        if ( (unsigned __int64)(v60 + 40) > *(_QWORD *)(v16 + 32) )
        {
          v66 = v38;
          v60 = sub_181EAA920(a1: v42, a2: v38, a3: 34082880);
          v38 = v66;
        }
        else
        {
          *(_QWORD *)(v16 + 40) = v60 + 40;
          *(_DWORD *)v60 = 34082880;
          *(_DWORD *)(v60 + 4) = 0;
          *(_QWORD *)(v60 + 8) = 0;
          *(_QWORD *)(v60 + 16) = 0;
          *(_QWORD *)(v60 + 24) = 0;
          *(_QWORD *)(v60 + 32) = 0;
        }
        *(_DWORD *)(v60 + 20) = 46923644;
        *(_DWORD *)(v60 + 16) = v38;
        *(_DWORD *)(v60 + 12) = (unsigned __int64)(v60 - v15) >> 3;
        v65 = (_DWORD *)v60;
        MEMORY[0x18503B9A0](a1: v42, a2: v38, a3: v60, a4: v41, a5: 0);
        v61 = (unsigned __int64)v65;
        v65[2] = 46004603;
        if ( (*(_DWORD *)v61 & 2) != 0 )
        {
          v63 = (v61 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v61 & 0xFFFFFFFFFFF80000LL) + ((v61 - v63) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v61 & 0xFFFFFFFFFFF80000LL) + ((v61 - v63) >> 9) + 0x38) = 0;
          v25 = (_DWORD *)v61;
        }
        else
        {
          v25 = (_DWORD *)v61;
        }
      }
    }
    else
    {
      v68 = v33;
      v67 = v31;
      v25 = (_DWORD *)MEMORY[0x18276BEE0]();
    }
LABEL_20:
    v22 = v70;
    v23 = *(unsigned int *)(v70 + 24);
    v24 = *(unsigned int *)(v15 + 8 * v23 + 28);
    if ( (_DWORD)v24 == 1 )
    {
      *(_QWORD *)(v15 + 8 * v23 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v15 + 8 * v23 + 28) = v24 - 1;
    }
    if ( (_DWORD)v24 == 1 )
      goto LABEL_24;
    while ( 1 )
    {
      v25 = (_DWORD *)MEMORY[0x182769900](a1: v26, a2: v27, a3: v25, a4: v24, a5: &a7);
LABEL_24:
      v28 = *(unsigned int *)(v15 + 8 * v23 + 4);
      if ( (_DWORD)v28 != 0 )
      {
        v29 = *(unsigned int *)(v15 + 8 * v28 + 8);
        if ( (_DWORD)v29 != 0 && *(_DWORD *)(v15 + 8 * v29 + 16) != 0 )
        {
          v69 = v25;
          MEMORY[0x18208CCA0](a1: v26, a2: v27, a3: v22, a4: v24, a5: 1);
          v25 = v69;
        }
      }
    }
  }
  v17 = *(unsigned int *)(a3 + 20);
  v18 = (_DWORD *)(v15 + 8 * v17);
  if ( (_DWORD)v17 != 0 )
  {
    if ( (_DWORD *)(v15 + 376660248) == v18 )
    {
      if ( *(int *)(v16 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v15;
    }
    if ( v18 == (_DWORD *)v15 )
    {
      if ( *(int *)(v16 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return (__int64)v18;
    }
    if ( *(__int16 *)(v15 + 8LL * (*v18 >> 3) + 62) >= 2 )
      JUMPOUT(0x181ED1C87LL);
    MEMORY[0x18276FC00](a1, a2, a3: v18, a4: v18, a5: v15 + 40472488);
  }
  v19 = *(unsigned int *)(a3 + 24);
  if ( (_DWORD)v19 != 0 && v16 != *(_QWORD *)(v15 + 376351704) )
  {
    if ( *(_QWORD *)(v15 + 8 * v19 + 16) != 0 )
      JUMPOUT(0x181ED1CF4LL);
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v15 + 8 * v19 + 16), 0, *(_QWORD *)(v16 + 64)) == 0 )
    {
      if ( *(_DWORD *)(a3 + 20) != 0 )
        goto LABEL_12;
      return sub_181ED1BFA(a1, a2: 0, a3, a4: (_DWORD)v18, a5: 0, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }
  }
  JUMPOUT(0x181ED1CF9LL);
}
