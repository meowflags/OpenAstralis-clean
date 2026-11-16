// sub_4F2AFA0
// rva 0x04f2afa0  size 2404  section .text  group text
// window base 0x184f2afa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2AFA0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // ecx
  __int64 v10; // rbp
  signed __int64 v11; // rsi
  __int64 v12; // r10
  int v13; // eax
  int v14; // edx
  unsigned int *v15; // rdx
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rcx
  unsigned int *v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // ebx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // ebx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r8
  int v63; // [rsp+0h] [rbp-48h] BYREF
  __int64 v64; // [rsp+8h] [rbp-40h]
  int v65; // [rsp+14h] [rbp-34h]
  unsigned int *v66; // [rsp+18h] [rbp-30h]
  __int64 v67; // [rsp+20h] [rbp-28h]
  int v68; // [rsp+28h] [rbp-20h]
  unsigned int v69; // [rsp+2Ch] [rbp-1Ch]
  __int64 v70; // [rsp+30h] [rbp-18h]
  unsigned int v71; // [rsp+3Ch] [rbp-Ch]
  int v72; // [rsp+40h] [rbp-8h]
  int v73; // [rsp+44h] [rbp-4h]

  v67 = a5;
  v73 = a6;
  v72 = a1;
  if ( (unsigned __int64)&v63 <= *(_QWORD *)(v8 + 8) )
  {
    v13 = sub_1EB84E0();
LABEL_85:
    v52 = v71;
    v53 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v53 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v65 = v13;
      v53 = sub_1EAA920(a1, a2: v11, a3: 34101256, a4: v71);
      v13 = v65;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v53 + 48;
      *(_DWORD *)v53 = 34101256;
      *(_DWORD *)(v53 + 4) = 0;
      *(_QWORD *)(v53 + 8) = 0;
      *(_QWORD *)(v53 + 16) = 0;
      *(_QWORD *)(v53 + 24) = 0;
      *(_QWORD *)(v53 + 32) = 0;
      *(_QWORD *)(v53 + 40) = 0;
    }
    v64 = v53;
    *(_DWORD *)(v53 + 20) = 46923644;
    *(_DWORD *)(v53 + 16) = v13;
    *(_DWORD *)(v53 + 12) = (unsigned __int64)(v53 - v7) >> 3;
    sub_503B9A0(a1, a2: v11, a3: v53, a4: v52, a5: 0);
    v46 = v71;
    if ( v71 != 0 )
    {
      v54 = *(unsigned int *)((char *)v66 + v70);
      v46 = *(unsigned int *)(v7 + 8 * v54 + 28);
      if ( (_DWORD)v46 == 1 )
      {
        *(_QWORD *)(v7 + 8 * v54 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v7 + 8 * v54 + 28) = v46 - 1;
      }
      if ( (_DWORD)v46 != 1 )
      {
        v48 = v64;
        goto LABEL_73;
      }
      v55 = *(unsigned int *)(v7 + 8 * v54 + 4);
      if ( (_DWORD)v55 == 0 )
      {
        v48 = v64;
        goto LABEL_73;
      }
      v56 = *(unsigned int *)(v7 + 8 * v55 + 8);
      if ( (_DWORD)v56 == 0 )
      {
        v48 = v64;
        goto LABEL_73;
      }
      if ( *(_DWORD *)(v7 + 8 * v56 + 16) == 0 )
      {
        v48 = v64;
        goto LABEL_73;
      }
      v61 = 1;
    }
    else
    {
      v61 = 0xFFFFFFFFLL;
    }
    goto LABEL_116;
  }
  v66 = a3;
  v9 = *(_DWORD *)(v7 + 8LL * (*a3 >> 3) + 48);
  v71 = v9;
  v70 = (int)v9;
  if ( v9 == 0 )
    goto LABEL_48;
  v10 = *(unsigned int *)((char *)a3 + (int)v9);
  if ( (_DWORD)v10 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_48;
  v11 = *(_QWORD *)(v8 + 64);
  v12 = *(_QWORD *)(v7 + 8 * v10 + 16);
  if ( v12 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v10 + 16), 0, v11) == 0 )
      goto LABEL_7;
    goto LABEL_48;
  }
  if ( v12 != v11 || (v38 = *(_DWORD *)(v7 + 8 * v10 + 28) + 1) < 0 )
  {
LABEL_48:
    sub_208CC20();
    a5 = v67;
    goto LABEL_7;
  }
  *(_DWORD *)(v7 + 8 * v10 + 28) = v38;
LABEL_7:
  v13 = *(_DWORD *)(v7 + 374343896);
  if ( a5 == v7 )
    goto LABEL_85;
  if ( v73 < 0
    || (v14 = *(_DWORD *)(a5 + 8), v73 > v14)
    || (a1 = (unsigned int)v72, v72 < 0)
    || (int)(v11 = (unsigned int)(v72 + v73)) > v14
    || (int)v11 < 0 )
  {
    v42 = v71;
    v43 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v43 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v65 = *(_DWORD *)(v7 + 374343896);
      v43 = sub_1EAA920(a1, a2: v11, a3: 34176760, a4: v71);
      v13 = v65;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v43 + 40;
      *(_DWORD *)v43 = 34176760;
      *(_DWORD *)(v43 + 4) = 0;
      *(_QWORD *)(v43 + 8) = 0;
      *(_QWORD *)(v43 + 16) = 0;
      *(_QWORD *)(v43 + 24) = 0;
      *(_QWORD *)(v43 + 32) = 0;
    }
    v64 = v43;
    *(_DWORD *)(v43 + 20) = 46923644;
    *(_DWORD *)(v43 + 16) = v13;
    *(_DWORD *)(v43 + 12) = (unsigned __int64)(v43 - v7) >> 3;
    sub_503B9A0(a1, a2: v11, a3: v43, a4: v42, a5: 0);
    v46 = v71;
    if ( v71 != 0 )
    {
      v47 = *(unsigned int *)((char *)v66 + v70);
      v46 = *(unsigned int *)(v7 + 8 * v47 + 28);
      if ( (_DWORD)v46 == 1 )
      {
        *(_QWORD *)(v7 + 8 * v47 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v7 + 8 * v47 + 28) = v46 - 1;
      }
      if ( (_DWORD)v46 != 1 )
      {
        v48 = v64;
        goto LABEL_73;
      }
      v50 = *(unsigned int *)(v7 + 8 * v47 + 4);
      if ( (_DWORD)v50 == 0 )
      {
        v48 = v64;
        goto LABEL_73;
      }
      v51 = *(unsigned int *)(v7 + 8 * v50 + 8);
      if ( (_DWORD)v51 == 0 )
      {
        v48 = v64;
        goto LABEL_73;
      }
      if ( *(_DWORD *)(v7 + 8 * v51 + 16) == 0 )
      {
        v48 = v64;
        goto LABEL_73;
      }
      v61 = 1;
    }
    else
    {
      v61 = 0xFFFFFFFFLL;
    }
LABEL_116:
    sub_208CCA0(a1: v44, a2: v45, a3: v66, a4: v46, a5: v61);
    v48 = v64;
    goto LABEL_73;
  }
  v15 = v66;
  v16 = v66[2];
  v17 = v66[3];
  if ( v17 <= (int)v16 )
  {
    v18 = v71;
    if ( v71 != 0 )
    {
      v19 = *(unsigned int *)((char *)v66 + v70);
      v18 = *(unsigned int *)(v7 + 8 * v19 + 28);
      if ( (_DWORD)v18 == 1 )
      {
        *(_QWORD *)(v7 + 8 * v19 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v7 + 8 * v19 + 28) = v18 - 1;
      }
      if ( (_DWORD)v18 != 1 )
        goto LABEL_18;
      v32 = *(unsigned int *)(v7 + 8 * v19 + 4);
      if ( (_DWORD)v32 == 0 )
        goto LABEL_18;
      v33 = *(unsigned int *)(v7 + 8 * v32 + 8);
      if ( (_DWORD)v33 == 0 || *(_DWORD *)(v7 + 8 * v33 + 16) == 0 )
        goto LABEL_18;
      v39 = 1;
    }
    else
    {
      v39 = 0xFFFFFFFFLL;
    }
    sub_208CCA0(a1, a2: v16, a3: v15, a4: v18, a5: v39);
    a1 = (unsigned int)v72;
LABEL_18:
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280(a1);
    return 0xFFFFFFFFLL;
  }
  v21 = v70;
  v22 = v71;
  v23 = v17 - v16;
  if ( v72 < v23 )
    JUMPOUT(0x309E410EELL);
  v24 = (unsigned int)v23;
  v69 = v23;
  if ( v23 >= 1 )
  {
    v25 = v66[1];
    if ( (_DWORD)v25 == 0 )
    {
      v48 = sub_276BEE0(a1: (unsigned int)v23, a2: v16, a3: v66, a4: v71);
      if ( (_DWORD)v46 == 0 )
      {
        v62 = 0xFFFFFFFFLL;
        goto LABEL_118;
      }
      v46 = *(unsigned int *)(v57 + v21);
      v58 = *(_DWORD *)(v7 + 8 * v46 + 28);
      if ( v58 == 1 )
      {
        *(_QWORD *)(v7 + 8 * v46 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v7 + 8 * v46 + 28) = v58 - 1;
      }
      if ( v58 == 1
        && (_DWORD)(v59 = *(unsigned int *)(v7 + 8 * v46 + 4)) != 0
        && (_DWORD)(v60 = *(unsigned int *)(v7 + 8 * v59 + 8)) != 0
        && *(_DWORD *)(v7 + 8 * v60 + 16) != 0 )
      {
        v62 = 1;
      }
      else
      {
        while ( 1 )
        {
LABEL_73:
          v48 = sub_2769900(a1: v44, a2: v45, a3: v48, a4: v46, a5: &a7);
          v46 = v71;
          if ( v71 == 0 )
          {
            v62 = 0xFFFFFFFFLL;
            goto LABEL_118;
          }
          v46 = *(unsigned int *)((char *)v66 + v70);
          v49 = *(_DWORD *)(v7 + 8 * v46 + 28);
          if ( v49 == 1 )
          {
            *(_QWORD *)(v7 + 8 * v46 + 16) = 0;
            __faststorefence();
          }
          else
          {
            *(_DWORD *)(v7 + 8 * v46 + 28) = v49 - 1;
          }
          if ( v49 == 1 )
          {
            v46 = *(unsigned int *)(v7 + 8 * v46 + 4);
            if ( (_DWORD)v46 != 0 )
            {
              v46 = *(unsigned int *)(v7 + 8 * v46 + 8);
              if ( (_DWORD)v46 != 0 && *(_DWORD *)(v7 + 8 * v46 + 16) != 0 )
                break;
            }
          }
        }
        v62 = 1;
      }
LABEL_118:
      v64 = v48;
      sub_208CCA0(a1: v44, a2: v45, a3: v66, a4: v46, a5: v62);
      v48 = v64;
      goto LABEL_73;
    }
    v68 = v23;
    sub_4FF2FC0(
      a1: a5,
      a2: (unsigned int)v73,
      a3: v7 + 8 * v25,
      a4: v71,
      a5: (unsigned int)v16,
      a6: (unsigned int)(v16 + v23));
    v27 = v69;
    v28 = v71;
    v29 = v66;
    v66[2] += v69;
    if ( (_DWORD)v28 != 0 )
    {
      v30 = *(unsigned int *)((char *)v29 + v70);
      v28 = *(unsigned int *)(v7 + 8 * v30 + 28);
      if ( (_DWORD)v28 == 1 )
      {
        *(_QWORD *)(v7 + 8 * v30 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v7 + 8 * v30 + 28) = v28 - 1;
      }
      if ( (_DWORD)v28 != 1 )
        goto LABEL_28;
      v36 = *(unsigned int *)(v7 + 8 * v30 + 4);
      if ( (_DWORD)v36 == 0 )
        goto LABEL_28;
      v37 = *(unsigned int *)(v7 + 8 * v36 + 8);
      if ( (_DWORD)v37 == 0 || *(_DWORD *)(v7 + 8 * v37 + 16) == 0 )
        goto LABEL_28;
      v41 = 1;
    }
    else
    {
      v41 = 0xFFFFFFFFLL;
    }
    sub_208CCA0(a1: v27, a2: v26, a3: v66, a4: v28, a5: v41);
    v27 = v69;
    v29 = v66;
LABEL_28:
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280(a1: v27, a2: v26, a3: v29);
    return (unsigned int)v27;
  }
  v68 = v23;
  if ( v71 != 0 )
  {
    v31 = *(unsigned int *)((char *)v66 + v70);
    v22 = *(unsigned int *)(v7 + 8 * v31 + 28);
    if ( (_DWORD)v22 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v31 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v7 + 8 * v31 + 28) = v22 - 1;
    }
    if ( (_DWORD)v22 != 1 )
      goto LABEL_35;
    v34 = *(unsigned int *)(v7 + 8 * v31 + 4);
    if ( (_DWORD)v34 == 0 )
      goto LABEL_35;
    v35 = *(unsigned int *)(v7 + 8 * v34 + 8);
    if ( (_DWORD)v35 == 0 || *(_DWORD *)(v7 + 8 * v35 + 16) == 0 )
      goto LABEL_35;
    v40 = 1;
  }
  else
  {
    v40 = 0xFFFFFFFFLL;
  }
  sub_208CCA0(a1: v24, a2: v16, a3: v66, a4: v22, a5: v40);
  v24 = v69;
LABEL_35:
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v24);
  return 0;
}
