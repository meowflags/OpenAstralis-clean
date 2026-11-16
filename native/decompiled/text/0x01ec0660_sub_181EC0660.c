// sub_181EC0660
// rva 0x01ec0660  size 1541  section .text  group text
// window base 0x181ec0660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_181EC0660(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // r13
  _DWORD *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rsi
  int v25; // r9d
  char v26; // dl
  _DWORD *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  _DWORD *v30; // rcx
  _DWORD *v31; // rbx
  _BOOL8 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rbp
  __int64 v37; // rcx
  _DWORD *result; // rax
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rsi
  _DWORD *v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rbp
  __int64 v47; // rcx
  __int64 (__fastcall *v48)(__int64, __int64, _DWORD *, __int64, _DWORD *, __int64); // rax
  _DWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  char v59; // [rsp+0h] [rbp-48h] BYREF
  __int64 v60; // [rsp+10h] [rbp-38h]
  _DWORD *v61; // [rsp+18h] [rbp-30h]
  _DWORD *v62; // [rsp+20h] [rbp-28h]
  __int64 v63; // [rsp+28h] [rbp-20h]
  unsigned int v64; // [rsp+34h] [rbp-14h]
  __int64 v65; // [rsp+38h] [rbp-10h]
  unsigned int v66; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v59 <= *(_QWORD *)(v11 + 8) )
  {
    v65 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v59);
LABEL_88:
    v65 = a3;
    v49 = (_DWORD *)MEMORY[0x18276BEE0]();
    v55 = *v49 >> 3;
    v56 = (unsigned int)v10[2 * v55 + 4];
    v54 = (unsigned int)SHIWORD(v10[2 * v55 + 15]);
    if ( ((__int16)v54 < 5 || v10[2 * v56 + 7] != 88054)
      && ((__int16)v54 < 5 || v10[2 * v56 + 7] != 88027)
      && ((__int16)v54 < 5 || v10[2 * v56 + 7] != 88013)
      && ((__int16)v54 < 5 || v10[2 * v56 + 7] != 88028)
      && ((__int16)v54 < 5 || v10[2 * v56 + 7] != 88007) )
    {
      goto LABEL_45;
    }
    goto LABEL_23;
  }
  v12 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v12 == 0 )
    goto LABEL_88;
  v13 = *(_QWORD *)(v11 + 40);
  v14 = 34085384;
  if ( (unsigned __int64)(v13 + 16) > *(_QWORD *)(v11 + 32) )
  {
    v64 = *(_DWORD *)(a3 + 4);
    v65 = a3;
    v15 = sub_181EAA840(a1, a2, a3: 34085384, a4: 34085384, a5: 0);
    v12 = v64;
  }
  else
  {
    *(_QWORD *)(v11 + 40) = v13 + 16;
    *(_QWORD *)v13 = 34085384;
    *(_DWORD *)(v13 + 8) = 0;
    *(_DWORD *)(v13 + 12) = 0;
    v15 = v13;
    v65 = a3;
  }
  v16 = MEMORY[0x184F671A0](a1, a2, a3: &v10[2 * v12], a4: v14, a5: v10 + 87701180, a6: v15);
  v63 = v16;
  if ( (_DWORD *)v16 == v10 )
  {
    v49 = (_DWORD *)MEMORY[0x18276BEE0]();
    v57 = *v49 >> 3;
    v58 = (unsigned int)v10[2 * v57 + 4];
    v54 = (unsigned int)SHIWORD(v10[2 * v57 + 15]);
    if ( ((__int16)v54 < 5 || v10[2 * v58 + 7] != 88054)
      && ((__int16)v54 < 5 || v10[2 * v58 + 7] != 88027)
      && ((__int16)v54 < 5 || v10[2 * v58 + 7] != 88013)
      && ((__int16)v54 < 5 || v10[2 * v58 + 7] != 88028)
      && ((__int16)v54 < 5 || v10[2 * v58 + 7] != 88007) )
    {
      goto LABEL_45;
    }
    goto LABEL_23;
  }
  MEMORY[0x185401E60](a1: v18, a2: v19, a3: v16, a4: v17, a5: 1);
  v22 = MEMORY[0x185401D60](a1: v20, a2: v21, a3: v63);
  v26 = *(_BYTE *)(v63 + 16);
  if ( v26 != 0 )
  {
    if ( v22 != 0 )
      v27 = v10 + 10116816;
    else
      v27 = v10;
  }
  else
  {
    v27 = v10 + 10116816;
  }
  v66 = v22;
  if ( v26 != 0 )
  {
    v62 = v27;
    v28 = v63;
  }
  else
  {
    v42 = *(unsigned int *)(v63 + 84);
    if ( (v42 & 8) == 0 )
    {
      v62 = v27;
      v49 = (_DWORD *)MEMORY[0x18276BEE0]();
      goto LABEL_40;
    }
    v43 = &v10[2 * *(unsigned int *)(v63 + 28)];
    v62 = v27;
    MEMORY[0x1853F5560](a1: v10, a2: v42, a3: v63, a4: v63, a5: v27, a6: v43);
    v28 = v63;
  }
  v29 = *(unsigned int *)(v28 + 72);
  v30 = &v10[2 * v29];
  if ( (_DWORD)v29 == 0 )
    return (_DWORD *)sub_181EC08CB(a1: v23, a2: v24, a3: 0, a4: (_DWORD)v30, a5: (_DWORD)v27, a6: v25, a7, a8, a9);
  v61 = &v10[2 * v29];
  v31 = v61;
  if ( v30 == v10 )
  {
    v33 = v66;
    v32 = false;
  }
  else
  {
    v32 = (unsigned __int16)v10[2 * v10[2 * (*v30 >> 3) + 5]
                              + 3
                              + (v10[2 * (*v30 >> 3) + 11] & (0x820u >> HIBYTE(v10[2 * (*v30 >> 3) + 11])))] == 2080;
    v33 = v66;
  }
  if ( v33 != 0 )
  {
    if ( v61 != v10 )
    {
      if ( v32 )
      {
        v34 = *(_QWORD *)(v11 + 40);
        if ( (unsigned __int64)(v34 + 16) > *(_QWORD *)(v11 + 32) )
        {
          v34 = sub_181EAA840(a1: v23, a2: v24, a3: 34084944, a4: v34, a5: 0);
          v31 = v61;
        }
        else
        {
          *(_QWORD *)(v11 + 40) = v34 + 16;
          *(_QWORD *)v34 = 34084944;
          *(_DWORD *)(v34 + 8) = 0;
          *(_DWORD *)(v34 + 12) = 0;
        }
        v35 = *v31 >> 3;
        v36 = v34;
        v37 = *(_QWORD *)((char *)&v10[2 * v35 + 2]
                        + HIWORD(v10[2 * v10[2 * v35 + 5]
                                   + 3
                                   + (v10[2 * v35 + 11] & (0x820u >> HIBYTE(v10[2 * v35 + 11])))]));
        v60 = v36;
        result = (_DWORD *)((__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, __int64, _DWORD *, __int64))(v9 + v37))(
                             a1: v62,
                             a2: v24,
                             a3: v31,
                             a4: v37,
                             a5: v10,
                             a6: v36);
        goto LABEL_20;
      }
      v49 = (_DWORD *)MEMORY[0x18276B120](a1: v23, a2: v24, a3: 34084944, a4: v61, a5: v62);
LABEL_40:
      v52 = *v49 >> 3;
      v53 = (unsigned int)v10[2 * v52 + 4];
      v54 = (unsigned int)SHIWORD(v10[2 * v52 + 15]);
      if ( (__int16)v54 >= 5 )
        goto LABEL_46;
      while ( ((__int16)v54 < 5 || v10[2 * v53 + 7] != 88027)
           && ((__int16)v54 < 5 || v10[2 * v53 + 7] != 88013)
           && ((__int16)v54 < 5 || v10[2 * v53 + 7] != 88028)
           && ((__int16)v54 < 5 || v10[2 * v53 + 7] != 88007) )
      {
LABEL_45:
        v49 = (_DWORD *)MEMORY[0x182769900](a1: v50, a2: v51, a3: v49, a4: v54, a5: &a7);
LABEL_46:
        if ( v10[2 * v53 + 7] == 88054 )
          goto LABEL_23;
      }
      goto LABEL_23;
    }
LABEL_90:
    v49 = (_DWORD *)MEMORY[0x18276BEE0](a1: v23, a2: v24, a3: 34084944, a4: v32);
    goto LABEL_40;
  }
  if ( v61 == v10 )
    goto LABEL_90;
  if ( !v32 )
  {
    v49 = (_DWORD *)MEMORY[0x18276B120](a1: v23, a2: v24, a3: 34084944);
    goto LABEL_40;
  }
  v44 = *(_QWORD *)(v11 + 40);
  if ( (unsigned __int64)(v44 + 16) > *(_QWORD *)(v11 + 32) )
  {
    v44 = sub_181EAA840(a1: v23, a2: v24, a3: 34084944, a4: v44, a5: 0);
    v31 = v61;
  }
  else
  {
    *(_QWORD *)(v11 + 40) = v44 + 16;
    *(_QWORD *)v44 = 34084944;
    *(_DWORD *)(v44 + 8) = 0;
    *(_DWORD *)(v44 + 12) = 0;
  }
  v45 = *v31 >> 3;
  v46 = v44;
  v47 = HIBYTE(v10[2 * v45 + 11]);
  v48 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _DWORD *, __int64))(v9
                                                                                       + *(_QWORD *)((char *)&v10[2 * v45] + HIWORD(v10[2 * v10[2 * v45 + 5] + 3 + (v10[2 * v45 + 11] & (0x820u >> HIBYTE(v10[2 * v45 + 11])))])));
  v60 = v46;
  result = (_DWORD *)v48(a1: v23, a2: v24, a3: v31, a4: v47, a5: v10, a6: v46);
LABEL_20:
  if ( result != v10 )
  {
    v41 = *result >> 3;
    if ( SHIWORD(v10[2 * v41 + 15]) < 2 || v10[2 * v10[2 * v41 + 4] + 4] != 64537 )
    {
      MEMORY[0x18276A220](a1: v39, a2: v40, a3: result, a4: v60, a5: v10 + 8521236);
LABEL_23:
      if ( *(int *)(v11 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v10;
    }
  }
  if ( *(int *)(v11 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280](a1: v39, a2: v40, a3: v66, a4: v60);
  return result;
}
