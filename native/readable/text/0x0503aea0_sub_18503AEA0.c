// sub_503AEA0
// rva 0x0503aea0  size 2738  section .text  group text
// window base 0x18503aea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_503AEA0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbp
  signed __int64 v12; // rsi
  __int64 v13; // rdi
  int v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 result; // rax
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // rax
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rsi
  __int64 v37; // rcx
  _DWORD *v38; // rdx
  int v39; // ebx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // rbx
  _DWORD *v44; // rax
  _DWORD *v45; // rbp
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rbx
  _DWORD *v51; // rbp
  __int64 v52; // rax
  int v53; // ebx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  _DWORD *v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r8
  __int64 v63; // r8
  __int64 v64; // r8
  int v65; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v66; // [rsp+8h] [rbp-30h]
  int v67; // [rsp+14h] [rbp-24h]
  _DWORD *v68; // [rsp+18h] [rbp-20h]
  _DWORD *v69; // [rsp+20h] [rbp-18h]
  __int64 v70; // [rsp+28h] [rbp-10h]
  unsigned int v71; // [rsp+34h] [rbp-4h]

  v69 = a5;
  if ( (unsigned __int64)&v65 <= *(_QWORD *)(v9 + 8) )
  {
    v14 = sub_1EB84E0();
    goto LABEL_60;
  }
  v68 = a3;
  v10 = *(unsigned int *)(v8 + 8LL * (*a3 >> 3) + 48);
  v71 = v10;
  v70 = (int)v10;
  if ( (_DWORD)v10 == 0 )
    goto LABEL_37;
  v11 = *(unsigned int *)((char *)a3 + (int)v10);
  if ( (_DWORD)v11 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_37;
  v12 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * v11 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v11 + 16), 0, v12) == 0 )
      goto LABEL_7;
    goto LABEL_37;
  }
  if ( v13 != v12 || (v30 = *(_DWORD *)(v8 + 8 * v11 + 28) + 1) < 0 )
  {
LABEL_37:
    sub_208CC20();
    a5 = v69;
    goto LABEL_7;
  }
  *(_DWORD *)(v8 + 8 * v11 + 28) = v30;
LABEL_7:
  v14 = *(_DWORD *)(v8 + 374343896);
  if ( a5 == v68 )
  {
LABEL_60:
    v40 = v71;
    v41 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v41 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v67 = v14;
      v41 = sub_1EAA920(a1: v13, a2: v12, a3: 34081944, a4: v71);
      v14 = v67;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v41 + 40;
      *(_DWORD *)v41 = 34081944;
      *(_DWORD *)(v41 + 4) = 0;
      *(_QWORD *)(v41 + 8) = 0;
      *(_QWORD *)(v41 + 16) = 0;
      *(_QWORD *)(v41 + 24) = 0;
      *(_QWORD *)(v41 + 32) = 0;
    }
    v66 = (_DWORD *)v41;
    *(_DWORD *)(v41 + 20) = 46923644;
    *(_DWORD *)(v41 + 16) = v14;
    *(_DWORD *)(v41 + 12) = (unsigned __int64)(v41 - v8) >> 3;
    sub_503B9A0(a1: v13, a2: v12, a3: v41, a4: v40, a5: 0);
    v42 = (__int64)v66;
    v66[2] = 45905136;
    if ( (*(_DWORD *)v42 & 2) != 0 )
    {
      v43 = v70;
      v37 = v71;
      v60 = v68;
      v36 = (v42 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v36) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v36) >> 9) + 0x38) = 0;
      v44 = v69;
      v45 = v60;
    }
    else
    {
      v43 = v70;
      v37 = v71;
      v44 = v69;
      v45 = v68;
    }
    *(_DWORD *)(v42 + 12) = ((unsigned __int64)v44 - v8) >> 3;
    if ( (*(_DWORD *)v42 & 2) != 0 )
    {
      v36 = (v42 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v36) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v36) >> 9) + 0x38) = 0;
    }
    if ( (_DWORD)v37 != 0 )
    {
      v46 = *(unsigned int *)((char *)v45 + v43);
      v47 = *(_DWORD *)(v8 + 8 * v46 + 28);
      if ( v47 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v46 + 16) = 0;
        __faststorefence();
      }
      else
      {
        v37 = (unsigned int)(v47 - 1);
        *(_DWORD *)(v8 + 8 * v46 + 28) = v37;
      }
      if ( v47 != 1 )
      {
        v34 = v42;
        goto LABEL_53;
      }
      v56 = *(unsigned int *)(v8 + 8 * v46 + 4);
      if ( (_DWORD)v56 == 0 )
      {
        v34 = v42;
        goto LABEL_53;
      }
      v57 = *(unsigned int *)(v8 + 8 * v56 + 8);
      if ( (_DWORD)v57 == 0 )
      {
        v34 = v42;
        goto LABEL_53;
      }
      if ( *(_DWORD *)(v8 + 8 * v57 + 16) == 0 )
      {
        v34 = v42;
        goto LABEL_53;
      }
      v62 = 1;
    }
    else
    {
      v62 = 0xFFFFFFFFLL;
    }
    sub_208CCA0(a1: v35, a2: v36, a3: v68, a4: v37, a5: v62);
    v34 = (__int64)v66;
    while ( 1 )
    {
LABEL_53:
      while ( 1 )
      {
        v34 = sub_2769900(a1: v35, a2: v36, a3: v34, a4: v37, a5: &a7);
        v37 = v71;
        v38 = v68;
        if ( v71 != 0 )
          break;
        v63 = 0xFFFFFFFFLL;
LABEL_117:
        v66 = (_DWORD *)v34;
        sub_208CCA0(a1: v35, a2: v36, a3: v38, a4: v37, a5: v63);
        v34 = (__int64)v66;
      }
      v37 = *(unsigned int *)((char *)v68 + v70);
      v39 = *(_DWORD *)(v8 + 8 * v37 + 28);
      if ( v39 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v37 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * v37 + 28) = v39 - 1;
      }
      if ( v39 == 1 )
      {
        v37 = *(unsigned int *)(v8 + 8 * v37 + 4);
        if ( (_DWORD)v37 != 0 )
        {
          v37 = *(unsigned int *)(v8 + 8 * v37 + 8);
          if ( (_DWORD)v37 != 0 && *(_DWORD *)(v8 + 8 * v37 + 16) != 0 )
          {
            v63 = 1;
            goto LABEL_117;
          }
        }
      }
    }
  }
  if ( a5 == (_DWORD *)v8 )
  {
    v48 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v48 + 48) > *(_QWORD *)(v9 + 32) )
    {
      v67 = *(_DWORD *)(v8 + 374343896);
      v48 = sub_1EAA920(a1: v13, a2: v12, a3: 34101256);
      v14 = v67;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v48 + 48;
      *(_DWORD *)v48 = 34101256;
      *(_DWORD *)(v48 + 4) = 0;
      *(_QWORD *)(v48 + 8) = 0;
      *(_QWORD *)(v48 + 16) = 0;
      *(_QWORD *)(v48 + 24) = 0;
      *(_QWORD *)(v48 + 32) = 0;
      *(_QWORD *)(v48 + 40) = 0;
    }
    *(_DWORD *)(v48 + 20) = 46923644;
    *(_DWORD *)(v48 + 16) = v14;
    *(_DWORD *)(v48 + 12) = (unsigned __int64)(v48 - v8) >> 3;
    v66 = (_DWORD *)v48;
    sub_503B9A0(a1: v13, a2: v12, a3: v48, a4: v10, a5: 0);
    v49 = (__int64)v66;
    v66[2] = 46439694;
    if ( (*(_DWORD *)v49 & 2) != 0 )
    {
      v50 = v70;
      v37 = v71;
      v51 = v68;
      v36 = v49 & 0xFFFFFFFFFFF80000LL;
      v35 = (v49 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v35) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v35) >> 9) + 0x38) = 0;
    }
    else
    {
      v50 = v70;
      v37 = v71;
      v51 = v68;
    }
    if ( (_DWORD)v37 != 0 )
    {
      v52 = *(unsigned int *)((char *)v51 + v50);
      v37 = *(unsigned int *)(v8 + 8 * v52 + 28);
      if ( (_DWORD)v37 == 1 )
      {
        *(_QWORD *)(v8 + 8 * v52 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * v52 + 28) = v37 - 1;
      }
      if ( (_DWORD)v37 != 1 )
      {
        v34 = v49;
        goto LABEL_53;
      }
      v54 = *(unsigned int *)(v8 + 8 * v52 + 4);
      if ( (_DWORD)v54 == 0 )
      {
        v34 = v49;
        goto LABEL_53;
      }
      v55 = *(unsigned int *)(v8 + 8 * v54 + 8);
      if ( (_DWORD)v55 == 0 )
      {
        v34 = v49;
        goto LABEL_53;
      }
      if ( *(_DWORD *)(v8 + 8 * v55 + 16) == 0 )
      {
        v34 = v49;
        goto LABEL_53;
      }
      v61 = 1;
    }
    else
    {
      v61 = 0xFFFFFFFFLL;
    }
    v66 = (_DWORD *)v49;
    sub_208CCA0(a1: v35, a2: v36, a3: v68, a4: v37, a5: v61);
    v34 = (__int64)v66;
    goto LABEL_53;
  }
  v15 = (unsigned __int64)v68;
  v16 = (unsigned int)v68[5];
  if ( (_DWORD)v16 != 0 )
  {
    if ( (_DWORD)v16 == 46923644 )
    {
      v27 = v71;
      v28 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v28 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v28 = sub_1EAA920(a1: v13, a2: v12, a3: 34161576, a4: v71);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v28 + 24;
        *(_DWORD *)v28 = 34161576;
        *(_DWORD *)(v28 + 4) = 0;
        *(_QWORD *)(v28 + 8) = 0;
        *(_QWORD *)(v28 + 16) = 0;
      }
      v66 = (_DWORD *)v28;
      sub_5787780(a1: v13, a2: v12, a3: v28, a4: v27, a5: 1);
      v17 = v66;
      v15 = (unsigned __int64)v68;
      v68[5] = ((unsigned __int64)v66 - v8) >> 3;
      if ( (*(_DWORD *)v15 & 2) != 0 )
      {
        v31 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v31) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v31) >> 9) + 0x38) = 0;
      }
    }
    else
    {
      v17 = (_DWORD *)(v8 + 8 * v16);
    }
    if ( (unsigned __int16)*(_DWORD *)(v8
                                     + 8LL * *(unsigned int *)(v8 + 8LL * (*v17 >> 3) + 20)
                                     + 4LL
                                     * (*(_DWORD *)(v8 + 8LL * (*v17 >> 3) + 44)
                                      & (0x2331u >> HIBYTE(*(_DWORD *)(v8 + 8LL * (*v17 >> 3) + 44))))
                                     + 12) != 9009 )
    {
      v34 = sub_276B120(a1: v13, a2: v12, a3: v15, a4: v71);
      if ( (_DWORD)v37 != 0 )
      {
        v37 = *(unsigned int *)((char *)v68 + v70);
        v53 = *(_DWORD *)(v8 + 8 * v37 + 28);
        if ( v53 == 1 )
        {
          *(_QWORD *)(v8 + 8 * v37 + 16) = 0;
          __faststorefence();
        }
        else
        {
          *(_DWORD *)(v8 + 8 * v37 + 28) = v53 - 1;
        }
        if ( v53 != 1 )
          goto LABEL_53;
        v58 = *(unsigned int *)(v8 + 8 * v37 + 4);
        if ( (_DWORD)v58 == 0 )
          goto LABEL_53;
        v59 = *(unsigned int *)(v8 + 8 * v58 + 8);
        if ( (_DWORD)v59 == 0 || *(_DWORD *)(v8 + 8 * v59 + 16) == 0 )
          goto LABEL_53;
        v64 = 1;
      }
      else
      {
        v64 = 0xFFFFFFFFLL;
      }
      v66 = (_DWORD *)v34;
      sub_208CCA0(a1: v35, a2: v36, a3: v68, a4: v37, a5: v64);
      v34 = (__int64)v66;
      goto LABEL_53;
    }
    v18 = *v17 >> 3;
    v19 = *(_DWORD *)(v8 + 8 * v18 + 44) & (0x2331u >> HIBYTE(*(_DWORD *)(v8 + 8 * v18 + 44)));
    v20 = *(_QWORD *)(v8 + 8 * v18 + HIWORD(*(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v18 + 20) + 4 * v19 + 12)));
    ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64, _DWORD *))(v7 + v20))(
      a1: v13,
      a2: v19,
      a3: v17,
      a4: v20,
      a5: v69);
    v23 = v71;
    if ( v71 != 0 )
    {
      result = *(unsigned int *)((char *)v68 + v70);
      v23 = *(unsigned int *)(v8 + 8 * result + 28);
      if ( (_DWORD)v23 == 1 )
      {
        *(_QWORD *)(v8 + 8 * result + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v8 + 8 * result + 28) = v23 - 1;
      }
      if ( (_DWORD)v23 != 1
        || (_DWORD)(result = *(unsigned int *)(v8 + 8 * result + 4)) == 0
        || (_DWORD)(result = *(unsigned int *)(v8 + 8 * result + 8)) == 0
        || (_DWORD)(result = *(unsigned int *)(v8 + 8 * result + 16)) == 0 )
      {
LABEL_17:
        if ( *(int *)(v9 + 16) > 0 )
          return result;
        return sub_277F280();
      }
      v33 = 1;
    }
    else
    {
      v33 = 0xFFFFFFFFLL;
    }
    result = sub_208CCA0(a1: v21, a2: v22, a3: v68, a4: v23, a5: v33);
    goto LABEL_17;
  }
  v25 = v71;
  if ( v71 == 0 )
  {
    v32 = 0xFFFFFFFFLL;
    goto LABEL_47;
  }
  result = *(unsigned int *)((char *)v68 + v70);
  v26 = *(_DWORD *)(v8 + 8 * result + 28);
  if ( v26 == 1 )
  {
    *(_QWORD *)(v8 + 8 * result + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v8 + 8 * result + 28) = v26 - 1;
  }
  if ( v26 == 1 )
  {
    v29 = *(unsigned int *)(v8 + 8 * result + 4);
    if ( (_DWORD)v29 != 0 )
    {
      v25 = *(unsigned int *)(v8 + 8 * v29 + 8);
      if ( (_DWORD)v25 != 0 )
      {
        result = *(unsigned int *)(v8 + 8 * v25 + 16);
        if ( (_DWORD)result != 0 )
        {
          v32 = 1;
LABEL_47:
          result = sub_208CCA0(a1: v13, a2: v12, a3: v68, a4: v25, a5: v32);
        }
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
