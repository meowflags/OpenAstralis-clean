// sub_4F3DFC0
// rva 0x04f3dfc0  size 1491  section .text  group text
// window base 0x184f3dfc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F3DFC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  signed __int64 v11; // rbx
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // r8d
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // eax
  __int64 i; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rdx
  int v38; // r8d
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rdx
  int v43; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v44; // [rsp+8h] [rbp-20h]
  int v45; // [rsp+14h] [rbp-14h]
  __int64 v46; // [rsp+18h] [rbp-10h]
  unsigned int v47; // [rsp+24h] [rbp-4h]

  v46 = a3;
  if ( (unsigned __int64)&v43 <= *(_QWORD *)(v9 + 8) )
  {
    v13 = sub_1EB84E0();
    goto LABEL_28;
  }
  v10 = *(unsigned int *)(v8 + 377133548);
  if ( (_DWORD)v10 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_19;
  v11 = *(_QWORD *)(v9 + 64);
  v12 = *(_QWORD *)(v8 + 8 * v10 + 16);
  if ( v12 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v10 + 16), 0, v11) == 0 )
      goto LABEL_6;
    goto LABEL_19;
  }
  if ( v12 != v11 || (v25 = *(_DWORD *)(v8 + 8 * v10 + 28) + 1) < 0 )
  {
LABEL_19:
    sub_208CC20(a1, a2, a3: v8 + 377133432);
    goto LABEL_6;
  }
  *(_DWORD *)(v8 + 8 * v10 + 28) = v25;
LABEL_6:
  v13 = *(_DWORD *)(v8 + 374343896);
  v14 = *(unsigned int *)(v8 + 374416892);
  if ( (_DWORD)v14 == 0 )
  {
LABEL_28:
    v32 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v32 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v45 = v13;
      v32 = sub_1EAA920(a1, a2, a3: 34090048);
      v13 = v45;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v32 + 40;
      *(_DWORD *)v32 = 34090048;
      *(_DWORD *)(v32 + 4) = 0;
      *(_QWORD *)(v32 + 8) = 0;
      *(_QWORD *)(v32 + 16) = 0;
      *(_QWORD *)(v32 + 24) = 0;
      *(_QWORD *)(v32 + 32) = 0;
    }
    v44 = (_DWORD *)v32;
    *(_DWORD *)(v32 + 20) = 46923644;
    *(_DWORD *)(v32 + 16) = v13;
    *(_DWORD *)(v32 + 12) = (unsigned __int64)(v32 - v8) >> 3;
    sub_503B9A0(a1, a2, a3: v32, a4: v10, a5: 0);
    v33 = (__int64)v44;
    v44[2] = 45897060;
    if ( (*(_DWORD *)v33 & 2) != 0 )
    {
      v27 = (v33 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v33 & 0xFFFFFFFFFFF80000LL) + ((v33 - v27) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v33 & 0xFFFFFFFFFFF80000LL) + ((v33 - v27) >> 9) + 0x38) = 0;
    }
    v34 = *(unsigned int *)(v8 + 377133548);
    v35 = *(_DWORD *)(v8 + 8 * v34 + 28);
    if ( v35 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v34 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v27 = (unsigned int)(v35 - 1);
      *(_DWORD *)(v8 + 8 * v34 + 28) = v27;
    }
    if ( v35 != 1 )
    {
      for ( i = v33; ; i = (__int64)v44 )
      {
        do
        {
          do
          {
LABEL_23:
            i = sub_2769900(a1: v28, a2: v29, a3: i, a4: v27, a5: &a7);
            v30 = *(unsigned int *)(v8 + 8 * v27 + 4);
          }
          while ( (_DWORD)v30 == 0 );
          v31 = *(unsigned int *)(v8 + 8 * v30 + 8);
        }
        while ( (_DWORD)v31 == 0 || *(_DWORD *)(v8 + 8 * v31 + 16) == 0 );
        v44 = (_DWORD *)i;
        sub_208CCA0(a1: v28, a2: v29, a3: v8 + 377133432, a4: v27, a5: 1);
      }
    }
    v39 = *(unsigned int *)(v8 + 8 * v34 + 4);
    if ( (_DWORD)v39 == 0 )
    {
      i = v33;
      goto LABEL_23;
    }
    v40 = *(unsigned int *)(v8 + 8 * v39 + 8);
    if ( (_DWORD)v40 == 0 )
    {
      i = v33;
      goto LABEL_23;
    }
    if ( *(_DWORD *)(v8 + 8 * v40 + 16) == 0 )
    {
      i = v33;
      goto LABEL_23;
    }
LABEL_59:
    sub_208CCA0(a1: v28, a2: v29, a3: v8 + 377133432, a4: v27, a5: 1);
    i = (__int64)v44;
    goto LABEL_23;
  }
  v15 = v46;
  if ( v46 == v8 )
  {
    v36 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v36 + 48) > *(_QWORD *)(v9 + 32) )
    {
      v45 = *(_DWORD *)(v8 + 374343896);
      v36 = sub_1EAA920(a1, a2, a3: 34101256);
      v13 = v45;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v36 + 48;
      *(_DWORD *)v36 = 34101256;
      *(_DWORD *)(v36 + 4) = 0;
      *(_QWORD *)(v36 + 8) = 0;
      *(_QWORD *)(v36 + 16) = 0;
      *(_QWORD *)(v36 + 24) = 0;
      *(_QWORD *)(v36 + 32) = 0;
      *(_QWORD *)(v36 + 40) = 0;
    }
    v44 = (_DWORD *)v36;
    *(_DWORD *)(v36 + 20) = 46923644;
    *(_DWORD *)(v36 + 16) = v13;
    *(_DWORD *)(v36 + 12) = (unsigned __int64)(v36 - v8) >> 3;
    sub_503B9A0(a1, a2, a3: v36, a4: v15, a5: 0);
    v37 = *(unsigned int *)(v8 + 377133548);
    v38 = *(_DWORD *)(v8 + 8 * v37 + 28);
    if ( v38 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v37 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v8 + 8 * v37 + 28) = v38 - 1;
    }
    if ( v38 != 1 )
    {
      i = (__int64)v44;
      goto LABEL_23;
    }
    v41 = *(unsigned int *)(v8 + 8 * v37 + 4);
    if ( (_DWORD)v41 == 0 )
    {
      i = (__int64)v44;
      goto LABEL_23;
    }
    v42 = *(unsigned int *)(v8 + 8 * v41 + 8);
    if ( (_DWORD)v42 == 0 )
    {
      i = (__int64)v44;
      goto LABEL_23;
    }
    if ( *(_DWORD *)(v8 + 8 * v42 + 16) == 0 )
    {
      i = (__int64)v44;
      goto LABEL_23;
    }
    goto LABEL_59;
  }
  v16 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v7
                                                                             + *(_QWORD *)(v8
                                                                                         + 8LL
                                                                                         * (*(_DWORD *)(v8 + 8 * v14) >> 3)
                                                                                         + 344)))(
          a1,
          a2,
          a3: v8 + 8 * v14,
          a4: v46,
          a5: v46);
  v20 = *(unsigned int *)(v8 + 377133548);
  v21 = *(_DWORD *)(v8 + 8 * v20 + 28);
  if ( v21 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v20 + 16) = 0;
    __faststorefence();
  }
  else
  {
    v17 = (unsigned int)(v21 - 1);
    *(_DWORD *)(v8 + 8 * v20 + 28) = v17;
  }
  result = v16 != v8;
  if ( v21 == 1 )
  {
    v23 = *(unsigned int *)(v8 + 8 * v20 + 4);
    if ( (_DWORD)v23 != 0 )
    {
      v24 = *(unsigned int *)(v8 + 8 * v23 + 8);
      if ( (_DWORD)v24 != 0 && *(_DWORD *)(v8 + 8 * v24 + 16) != 0 )
      {
        v47 = result;
        sub_208CCA0(a1: v18, a2: v19, a3: v8 + 377133432, a4: v17, a5: 1);
        result = v47;
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
  {
    v47 = result;
    return sub_277F280();
  }
  return result;
}
