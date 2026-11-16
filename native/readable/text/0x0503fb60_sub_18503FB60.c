// sub_503FB60
// rva 0x0503fb60  size 1514  section .text  group text
// window base 0x18503fb60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_503FB60(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 i; // rbx
  unsigned __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rbp
  signed __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 result; // rax
  __int64 v21; // rbx
  unsigned int v22; // ecx
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // rsi
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rbx
  int v56; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v57; // [rsp+8h] [rbp-50h]
  _DWORD *j; // [rsp+10h] [rbp-48h]
  __int64 v59; // [rsp+18h] [rbp-40h]
  __int64 v60; // [rsp+20h] [rbp-38h]
  __int64 v61; // [rsp+28h] [rbp-30h]
  _DWORD *v62; // [rsp+30h] [rbp-28h]
  unsigned int v63; // [rsp+3Ch] [rbp-1Ch]
  __int64 v64; // [rsp+40h] [rbp-18h]
  unsigned int v65; // [rsp+4Ch] [rbp-Ch]
  __int64 v66; // [rsp+50h] [rbp-8h]

  v62 = a3;
  if ( (unsigned __int64)&v56 <= *(_QWORD *)(v9 + 8) )
  {
    v61 = a5;
    sub_1EB84E0();
  }
  else if ( a5 != v8 )
  {
    v61 = a5;
    v10 = sub_1EB5100(a1, a2, a3: a5);
    v60 = v10;
    v13 = *(unsigned int *)(v10 + 8);
    if ( (_DWORD)v13 != 0 )
    {
      if ( *(_DWORD *)(v10 + 12) != 0 )
      {
        for ( i = 1; ; i = (unsigned int)(i + 1) )
        {
          if ( (int)v13 <= (int)i )
            goto LABEL_10;
          if ( (unsigned int)v13 <= (unsigned int)i )
            break;
          if ( *(_DWORD *)(v10 + 4 * i + 12) == 0 )
            goto LABEL_80;
        }
        sub_2771220(a1: v11, a2: v12, a3: (unsigned int)i, a4: v13, a5: (unsigned int)v13);
LABEL_80:
        v65 = i;
LABEL_58:
        v35 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v35 + 24) > *(_QWORD *)(v9 + 32) )
        {
          v35 = sub_1EAA920(a1: v11, a2: v12, a3: 34085680);
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v35 + 24;
          *(_DWORD *)v35 = 34085680;
          *(_DWORD *)(v35 + 4) = 0;
          *(_QWORD *)(v35 + 8) = 0;
          *(_QWORD *)(v35 + 16) = 0;
        }
        v59 = v35;
        v36 = *(_QWORD *)(v9 + 40);
        v37 = 34082368;
        if ( (unsigned __int64)(v36 + 32) > *(_QWORD *)(v9 + 32) )
        {
          v36 = sub_1EAA840(a1: v11, a2: v12, a3: 34082368, a4: 34082368, a5: 16);
          v35 = v59;
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v36 + 32;
          *(_QWORD *)v36 = 34082368;
          *(_DWORD *)(v36 + 8) = 16;
          *(_DWORD *)(v36 + 12) = 0;
          *(_QWORD *)(v36 + 16) = 0;
          *(_QWORD *)(v36 + 24) = 0;
        }
        *(_DWORD *)(v35 + 4) = (unsigned __int64)(v36 - v8) >> 3;
        if ( (*(_DWORD *)v35 & 2) != 0 )
        {
          v37 = (v35 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v37) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v37) >> 9) + 0x38) = 0;
        }
        sub_4F36F80(a1: v11, a2: v12, a3: v35, a4: v37, a5: v8 + 351826256);
        sub_4F36640(a1: v39, a2: v40, a3: v59, a4: v38, a5: v65);
        v44 = sub_4F36F80(a1: v42, a2: v43, a3: v59, a4: v41, a5: v8 + 365347544);
        v48 = v59;
        if ( *(_DWORD *)(v59 + 8) == 0 )
          goto LABEL_71;
        v49 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v49 + 24) > *(_QWORD *)(v9 + 32) )
        {
          v57 = (_DWORD *)v44;
          v49 = sub_1EAA920(a1: v46, a2: v47, a3: 34082680);
          v50 = v59;
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v49 + 24;
          *(_DWORD *)v49 = 34082680;
          *(_DWORD *)(v49 + 4) = 0;
          *(_QWORD *)(v49 + 8) = 0;
          *(_QWORD *)(v49 + 16) = 0;
          v50 = v48;
        }
        v57 = (_DWORD *)v49;
        sub_4FE9280(a1: v46, a2: v47, a3: v49, a4: v45, a5: v50, a6: v8);
        v66 = v7;
        for ( j = v57; ; j = (_DWORD *)(v8 + 373281248) )
        {
          v51 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v51 + 48) > *(_QWORD *)(v9 + 32) )
          {
            v51 = sub_1EAA920(a1: v46, a2: v47, a3: 34101256);
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v51 + 48;
            *(_DWORD *)v51 = 34101256;
            *(_DWORD *)(v51 + 4) = 0;
            *(_QWORD *)(v51 + 8) = 0;
            *(_QWORD *)(v51 + 16) = 0;
            *(_QWORD *)(v51 + 24) = 0;
            *(_QWORD *)(v51 + 32) = 0;
            *(_QWORD *)(v51 + 40) = 0;
          }
          *(_DWORD *)(v51 + 20) = 46923644;
          *(_DWORD *)(v51 + 16) = *(_DWORD *)(v8 + 374343896);
          *(_DWORD *)(v51 + 12) = (unsigned __int64)(v51 - v8) >> 3;
          v57 = (_DWORD *)v51;
          sub_503B9A0(a1: v46, a2: v47, a3: (unsigned int *)v51, a4: v45, a5: 0);
          v54 = (unsigned __int64)v57;
          v57[2] = ((unsigned __int64)j - v8) >> 3;
          if ( (*(_DWORD *)v54 & 2) != 0 )
          {
            v55 = (v54 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v54 & 0xFFFFFFFFFFF80000LL) + ((v54 - v55) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v54 & 0xFFFFFFFFFFF80000LL) + ((v54 - v55) >> 9) + 0x38) = 0;
          }
          sub_2769900(a1: v52, a2: v53, a3: v54, a4: v54, a5: &a7);
LABEL_71:
          ;
        }
      }
LABEL_57:
      v65 = 0;
      goto LABEL_58;
    }
LABEL_10:
    v15 = (unsigned __int64)v62;
    v16 = *(_DWORD *)(v8 + 8LL * (*v62 >> 3) + 48);
    if ( v16 == 0 )
      goto LABEL_40;
    v17 = *(unsigned int *)((char *)v62 + (int)v16);
    if ( (_DWORD)v17 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
      goto LABEL_40;
    v18 = *(_QWORD *)(v9 + 64);
    v19 = *(_QWORD *)(v8 + 8 * v17 + 16);
    if ( v19 != 0 )
    {
      if ( v19 == v18 )
      {
        v32 = *(_DWORD *)(v8 + 8 * v17 + 28) + 1;
        if ( v32 >= 0 )
        {
          *(_DWORD *)(v8 + 8 * v17 + 28) = v32;
          v64 = (int)v16;
          v63 = v16;
          goto LABEL_16;
        }
      }
      goto LABEL_40;
    }
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v17 + 16), 0, v18) != 0 )
    {
LABEL_40:
      v64 = (int)v16;
      v63 = v16;
      sub_208CC20();
      v15 = (unsigned __int64)v62;
      goto LABEL_16;
    }
    v64 = (int)v16;
    v63 = v16;
LABEL_16:
    if ( *(_DWORD *)(v15 + 16) != 0 || *(_DWORD *)(v15 + 4) != 0 )
    {
      result = v60;
      *(_DWORD *)(v15 + 16) = (unsigned __int64)(v60 - v8) >> 3;
      if ( (*(_DWORD *)v15 & 2) != 0 )
      {
        v21 = v64;
        v22 = v63;
        v18 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v18) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v18) >> 9) + 0x38) = 0;
      }
      else
      {
        v21 = v64;
        v22 = v63;
      }
      if ( v22 != 0 )
      {
        v23 = *(unsigned int *)(v15 + v21);
        v24 = *(_DWORD *)(v8 + 8 * v23 + 28);
        if ( v24 == 1 )
        {
          *(_QWORD *)(v8 + 8 * v23 + 16) = 0;
          __faststorefence();
        }
        else
        {
          *(_DWORD *)(v8 + 8 * v23 + 28) = v24 - 1;
        }
        if ( v24 != 1
          || (_DWORD)(v28 = *(unsigned int *)(v8 + 8 * v23 + 4)) == 0
          || (_DWORD)(v29 = *(unsigned int *)(v8 + 8 * v28 + 8)) == 0
          || *(_DWORD *)(v8 + 8 * v29 + 16) == 0 )
        {
LABEL_23:
          if ( *(int *)(v9 + 16) > 0 )
            return result;
          return sub_277F280(a1: v19, a2: v18, a3: v15);
        }
        v33 = 1;
      }
      else
      {
        v33 = 0xFFFFFFFFLL;
      }
      sub_208CCA0(a1: v19, a2: v18, a3: v15, a4: v15, a5: v33);
      result = v60;
      v15 = (unsigned __int64)v62;
      goto LABEL_23;
    }
    v25 = v63;
    result = v60;
    if ( v63 == 0 )
    {
      v34 = 0xFFFFFFFFLL;
      goto LABEL_52;
    }
    v26 = *(unsigned int *)(v15 + v64);
    v27 = *(_DWORD *)(v8 + 8 * v26 + 28);
    if ( v27 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v26 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v8 + 8 * v26 + 28) = v27 - 1;
    }
    if ( v27 == 1 )
    {
      v30 = *(unsigned int *)(v8 + 8 * v26 + 4);
      if ( (_DWORD)v30 != 0 )
      {
        v31 = *(unsigned int *)(v8 + 8 * v30 + 8);
        if ( (_DWORD)v31 != 0 )
        {
          v25 = *(unsigned int *)(v8 + 8 * v31 + 16);
          if ( (_DWORD)v25 != 0 )
          {
            v34 = 1;
LABEL_52:
            sub_208CCA0(a1: v19, a2: v18, a3: v62, a4: v25, a5: v34);
            result = v60;
            v15 = (unsigned __int64)v62;
          }
        }
      }
    }
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280(a1: v19, a2: v18, a3: v15);
    return result;
  }
  sub_2771080();
  goto LABEL_57;
}
