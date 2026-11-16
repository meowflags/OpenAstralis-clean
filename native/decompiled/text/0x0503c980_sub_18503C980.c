// sub_18503C980
// rva 0x0503c980  size 1410  section .text  group text
// window base 0x18503c980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_18503C980(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  _DWORD *v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  unsigned int v11; // ecx
  __int64 v12; // rbp
  signed __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r8
  _DWORD *result; // rax
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // r8d
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // r8
  int v58; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v59; // [rsp+8h] [rbp-20h]
  _DWORD *v60; // [rsp+10h] [rbp-18h]
  unsigned int v61; // [rsp+1Ch] [rbp-Ch]
  __int64 v62; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v58 <= *(_QWORD *)(v10 + 8) )
  {
    v31 = MEMORY[0x181EB84E0]();
    if ( *(_DWORD *)(v9 + 8 * v51 + 16) != 0 )
    {
      v59 = (_DWORD *)v31;
      MEMORY[0x18208CCA0](a1: v33, a2: v34, a3: v50, a4: v32, a5: 1);
      v31 = (__int64)v59;
    }
    goto LABEL_23;
  }
  v60 = a3;
  v11 = *(_DWORD *)(v9 + 8LL * (*a3 >> 3) + 48);
  if ( v11 == 0 )
    goto LABEL_37;
  v12 = *(unsigned int *)((char *)a3 + (int)v11);
  if ( (_DWORD)v12 == 0 || v10 == *(_QWORD *)(v9 + 376351704) )
    goto LABEL_37;
  v13 = *(_QWORD *)(v10 + 64);
  v14 = *(_QWORD *)(v9 + 8 * v12 + 16);
  if ( v14 != 0 )
  {
    if ( v14 == v13 )
    {
      v46 = *(_DWORD *)(v9 + 8 * v12 + 28) + 1;
      if ( v46 >= 0 )
      {
        *(_DWORD *)(v9 + 8 * v12 + 28) = v46;
        v62 = (int)v11;
        v61 = v11;
        goto LABEL_8;
      }
    }
    goto LABEL_37;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v9 + 8 * v12 + 16), 0, v13) != 0 )
  {
LABEL_37:
    v62 = (int)v11;
    v61 = v11;
    MEMORY[0x18208CC20]();
    a3 = v60;
    goto LABEL_8;
  }
  v62 = (int)v11;
  v61 = v11;
LABEL_8:
  v15 = (unsigned int)a3[5];
  result = (_DWORD *)(v9 + 375389136);
  if ( (_DWORD)v15 == 46923644 || (_DWORD)v15 == 0 )
  {
    v17 = v61;
    if ( v61 == 0 )
    {
      v47 = 0xFFFFFFFFLL;
      v59 = (_DWORD *)(v9 + 375389136);
      v7 = v60;
      goto LABEL_54;
    }
    v18 = v60;
    v19 = *(unsigned int *)((char *)v60 + v62);
    v20 = *(_DWORD *)(v9 + 8 * v19 + 28);
    if ( v20 == 1 )
    {
      *(_QWORD *)(v9 + 8 * v19 + 16) = 0;
      __faststorefence();
      v7 = v18;
    }
    else
    {
      v7 = v60;
      *(_DWORD *)(v9 + 8 * v19 + 28) = v20 - 1;
    }
    if ( v20 != 1 )
    {
LABEL_13:
      if ( *(int *)(v10 + 16) > 0 )
        return result;
LABEL_59:
      v59 = result;
      MEMORY[0x18277F280]();
      return v59;
    }
LABEL_24:
    v37 = *(unsigned int *)(v9 + 8 * v19 + 4);
    if ( (_DWORD)v37 != 0 )
    {
      v38 = *(unsigned int *)(v9 + 8 * v37 + 8);
      if ( (_DWORD)v38 != 0 )
      {
        v17 = *(unsigned int *)(v9 + 8 * v38 + 16);
        if ( (_DWORD)v17 != 0 )
        {
          v47 = 1;
          v59 = result;
LABEL_54:
          MEMORY[0x18208CCA0](a1: v14, a2: v13, a3: v7, a4: v17, a5: v47);
          result = v59;
          goto LABEL_13;
        }
      }
    }
    goto LABEL_13;
  }
  v21 = *(_DWORD *)(v9 + 8 * v15) >> 3;
  v7 = (_DWORD *)*(unsigned int *)(v9 + 8 * v21 + 44);
  v22 = (unsigned int)v7 & (0x2331u >> HIBYTE(*(_DWORD *)(v9 + 8 * v21 + 44)));
  if ( (unsigned __int16)*(_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v21 + 20) + 4 * v22 + 12) != 9009 )
  {
    v52 = v62;
    v31 = MEMORY[0x18276B120](a1: v14, a2: v22, a3, a4: v61);
    if ( (_DWORD)v32 != 0 )
    {
      v54 = *(unsigned int *)(v53 + v52);
      v32 = *(unsigned int *)(v9 + 8 * v54 + 28);
      if ( (_DWORD)v32 == 1 )
      {
        *(_QWORD *)(v9 + 8 * v54 + 16) = 0;
        __faststorefence();
      }
      else
      {
        *(_DWORD *)(v9 + 8 * v54 + 28) = v32 - 1;
      }
      if ( (_DWORD)v32 != 1 )
        goto LABEL_23;
      v55 = *(unsigned int *)(v9 + 8 * v54 + 4);
      if ( (_DWORD)v55 == 0 )
        goto LABEL_23;
      v56 = *(unsigned int *)(v9 + 8 * v55 + 8);
      if ( (_DWORD)v56 == 0 || *(_DWORD *)(v9 + 8 * v56 + 16) == 0 )
        goto LABEL_23;
      v57 = 1;
    }
    else
    {
      v57 = 0xFFFFFFFFLL;
    }
    v59 = (_DWORD *)v31;
    MEMORY[0x18208CCA0](a1: v33, a2: v34, a3: v53, a4: v32, a5: v57);
    v31 = (__int64)v59;
    goto LABEL_23;
  }
  v23 = *(_DWORD *)(v9 + 8 * v15) >> 3;
  v24 = v9 + 8LL * *(unsigned int *)(v9 + 8 * v23 + 20);
  v25 = *(_DWORD *)(v9 + 8 * v23 + 44) & (0x2331u >> HIBYTE(*(_DWORD *)(v9 + 8 * v23 + 44)));
  v26 = *(_QWORD *)(v9 + 8 * v23 + HIWORD(*(_DWORD *)(v24 + 4 * v25 + 12)) + 280);
  result = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v8 + v26))(
                       a1: v25,
                       a2: v24,
                       a3: v9 + 8 * v15,
                       a4: v26,
                       a5: v9 + 375389136);
  if ( result != (_DWORD *)v9 )
  {
    v29 = *result >> 3;
    if ( *(__int16 *)(v9 + 8 * v29 + 62) < 3
      || *(_DWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8 * v29 + 16) + 20) != 85406 )
    {
      v30 = v62;
      v7 = v60;
      v31 = MEMORY[0x18276A220](a1: v27, a2: v28, a3: result, a4: v61, a5: v9 + 43307688);
      if ( (_DWORD)v32 != 0 )
      {
        v35 = *(unsigned int *)((char *)v7 + v30);
        v36 = *(_DWORD *)(v9 + 8 * v35 + 28);
        if ( v36 == 1 )
        {
          *(_QWORD *)(v9 + 8 * v35 + 16) = 0;
          __faststorefence();
        }
        else
        {
          v32 = (unsigned int)(v36 - 1);
          *(_DWORD *)(v9 + 8 * v35 + 28) = v32;
        }
        if ( v36 != 1 )
          goto LABEL_23;
        v44 = *(unsigned int *)(v9 + 8 * v35 + 4);
        if ( (_DWORD)v44 == 0 )
          goto LABEL_23;
        v45 = *(unsigned int *)(v9 + 8 * v44 + 8);
        if ( (_DWORD)v45 == 0 || *(_DWORD *)(v9 + 8 * v45 + 16) == 0 )
          goto LABEL_23;
        v49 = 1;
      }
      else
      {
        v49 = 0xFFFFFFFFLL;
      }
      v59 = (_DWORD *)v31;
      MEMORY[0x18208CCA0](a1: v33, a2: v34, a3: v60, a4: v32, a5: v49);
      v31 = (__int64)v59;
LABEL_23:
      result = (_DWORD *)MEMORY[0x182769900](a1: v33, a2: v34, a3: v31, a4: v32, a5: &a7);
      goto LABEL_24;
    }
  }
  v39 = v61;
  if ( v61 == 0 )
  {
    v48 = 0xFFFFFFFFLL;
    goto LABEL_56;
  }
  v40 = *(unsigned int *)((char *)v60 + v62);
  v41 = *(_DWORD *)(v9 + 8 * v40 + 28);
  if ( v41 == 1 )
  {
    *(_QWORD *)(v9 + 8 * v40 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v9 + 8 * v40 + 28) = v41 - 1;
  }
  if ( v41 == 1 )
  {
    v42 = *(unsigned int *)(v9 + 8 * v40 + 4);
    if ( (_DWORD)v42 != 0 )
    {
      v43 = *(unsigned int *)(v9 + 8 * v42 + 8);
      if ( (_DWORD)v43 != 0 )
      {
        v39 = *(unsigned int *)(v9 + 8 * v43 + 16);
        if ( (_DWORD)v39 != 0 )
        {
          v48 = 1;
LABEL_56:
          v59 = result;
          MEMORY[0x18208CCA0](a1: v27, a2: v28, a3: v60, a4: v39, a5: v48);
          result = v59;
        }
      }
    }
  }
  if ( *(int *)(v10 + 16) <= 0 )
    goto LABEL_59;
  return result;
}
