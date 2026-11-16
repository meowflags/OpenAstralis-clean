// sub_2762A80
// rva 0x02762a80  size 1146  section .text  group text
// window base 0x182762a80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_2762A80(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, int a6, char a7)
{
  char *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r8
  char v42; // [rsp+0h] [rbp-48h] BYREF
  __int64 v43; // [rsp+10h] [rbp-38h]
  char *v44; // [rsp+18h] [rbp-30h]
  char *v45; // [rsp+20h] [rbp-28h]
  __int64 v46; // [rsp+28h] [rbp-20h]
  unsigned __int64 v47; // [rsp+30h] [rbp-18h]
  _DWORD *v48; // [rsp+38h] [rbp-10h]
  int v49; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v42 <= *(_QWORD *)(v8 + 8) )
  {
    v48 = a1;
    v49 = a6;
    v47 = a5;
    sub_1EB84E0();
    goto LABEL_58;
  }
  v9 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v9 + 16) > *(_QWORD *)(v8 + 32) )
    goto LABEL_56;
  *(_QWORD *)(v8 + 40) = v9 + 16;
  *(_DWORD *)v9 = 40539824;
  *(_DWORD *)(v9 + 4) = 0;
  *(_QWORD *)(v9 + 8) = 0;
  v49 = a6;
  v47 = a5;
  while ( 1 )
  {
    *(_DWORD *)(v9 + 4) = (unsigned __int64)((char *)a1 - v7) >> 3;
    v46 = v9;
    v48 = a1;
    v10 = sub_AF110A0(a1, a2, a3: v7 + 376667592, a4: v46, a5: v46, a6: v7);
    v45 = (char *)v10;
    if ( (char *)v10 == v7 || (unsigned int)sub_1E64EE0(a1: v12, a2: v13, a3: v10) == 0 )
    {
      if ( *(int *)(v8 + 16) <= 0 )
        sub_277F280(a1: v12, a2: v13, a3: v11);
      return v7;
    }
    v18 = v45;
    if ( *(_DWORD *)v45 >> 3 == 5056622 )
    {
      v18 = (char *)sub_1E64E60(a1: v12, a2: v13, a3: v45);
    }
    else
    {
      LODWORD(v19) = (_DWORD)v7 + 376660560;
      if ( v7 + 376660560 == v45 )
        v18 = v7;
    }
    if ( v18 != v7 )
    {
      v19 = *(_DWORD *)v18 >> 3;
      if ( *(__int16 *)&v7[8 * v19 + 62] >= 2 )
      {
        v19 = *(unsigned int *)&v7[8 * v19 + 16];
        if ( *(_DWORD *)&v7[8 * v19 + 16] == 27283 )
        {
          v44 = v18;
          v30 = *(_QWORD *)(v8 + 40);
          if ( (unsigned __int64)(v30 + 48) > *(_QWORD *)(v8 + 32) )
          {
            v30 = sub_1EAA920(a1: v12, a2: v13, a3: 40493992);
          }
          else
          {
            *(_QWORD *)(v8 + 40) = v30 + 48;
            *(_DWORD *)v30 = 40493992;
            *(_DWORD *)(v30 + 4) = 0;
            *(_QWORD *)(v30 + 8) = 0;
            *(_QWORD *)(v30 + 16) = 0;
            *(_QWORD *)(v30 + 24) = 0;
            *(_QWORD *)(v30 + 32) = 0;
            *(_QWORD *)(v30 + 40) = 0;
          }
          v43 = v30;
          sub_503ACA0(a1: v12, a2: v13, a3: v30, a4: v15, a5: v44);
          v34 = *(_QWORD *)(v8 + 40);
          if ( (unsigned __int64)(v34 + 24) > *(_QWORD *)(v8 + 32) )
          {
            v34 = sub_1EAA920(a1: v32, a2: v33, a3: 34161576);
          }
          else
          {
            *(_QWORD *)(v8 + 40) = v34 + 24;
            *(_DWORD *)v34 = 34161576;
            *(_DWORD *)(v34 + 4) = 0;
            *(_QWORD *)(v34 + 8) = 0;
            *(_QWORD *)(v34 + 16) = 0;
          }
          v35 = v43;
          *(_DWORD *)(v34 + 8) = 47045786;
          *(_DWORD *)(v35 + 28) = (unsigned __int64)(v34 - (_QWORD)v7) >> 3;
          if ( (*(_DWORD *)v35 & 2) != 0 )
            goto LABEL_60;
          goto LABEL_34;
        }
      }
    }
    if ( v18 != v7 )
    {
      LODWORD(v19) = *(_DWORD *)v18 >> 3;
      if ( (_DWORD)v19 != 4262015 )
        goto LABEL_59;
    }
    if ( v18 == v7 )
    {
LABEL_58:
      v18 = (char *)sub_2771080(a1: v12, a2: v13, a3: v19, a4: v15, a5: v16, a6: v17, a7: v42);
LABEL_59:
      v44 = v18;
      v35 = sub_276FC00(a1: v12, a2: v13, a3: (_DWORD)v18, a4: v15, a5: (int)v7 + 34096120, a6: v17, a7: v42);
LABEL_60:
      v31 = (v35 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v31) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v31) >> 9) + 0x38) = 0;
LABEL_34:
      *(_DWORD *)(v35 + 36) = 0;
      *(_DWORD *)(v35 + 32) = 0;
      v21 = sub_2769900(a1: v32, a2: v33, a3: v35, a4: v31, a5: &a7);
LABEL_35:
      v36 = v47;
      while ( (char *)v36 != v7 )
      {
        if ( v21 == v36 )
          goto LABEL_19;
        if ( *(int *)(v8 + 16) <= 0 )
        {
          v21 = sub_277F280(a1: v23, a2: v24, a3: v36);
          v36 = v37;
        }
        else
        {
          v36 = (unsigned __int64)&v7[8 * *(unsigned int *)(v36 + 4)];
        }
      }
      sub_2762F00(a1: v23, a2: v24, a3: v47, a4: v22, a5: v48);
      goto LABEL_42;
    }
    v20 = *((unsigned int *)v18 + 7);
    if ( (_DWORD)v20 == 0 || *(_DWORD *)&v7[8 * v20 + 56] == 47076830 )
      break;
    v44 = v18;
    v28 = sub_4F636E0(a1: v12, a2: v13, a3: v18);
    if ( (char *)v28 == v7 )
      goto LABEL_20;
    v25 = v47;
    while ( (char *)v25 != v7 )
    {
      if ( v28 == v25 )
        goto LABEL_20;
      if ( *(int *)(v8 + 16) <= 0 )
      {
        v28 = sub_277F280(a1: v26, a2: v27, a3: v25);
        v25 = v41;
      }
      else
      {
        v25 = (unsigned __int64)&v7[8 * *(unsigned int *)(v25 + 4)];
      }
    }
    sub_2762F00(a1: v26, a2: v27, a3: v47, a4: v29, a5: v48);
LABEL_55:
    sub_2762F00(a1: v26, a2: v27, a3: v47, a4: v39, a5: v48);
LABEL_56:
    v48 = a1;
    v49 = a6;
    v47 = a5;
    v9 = sub_1EAA920(a1, a2, a3: 40539824);
    a1 = v48;
  }
  v44 = v18;
  v21 = sub_2762860(a1: v12, a2: v13, a3: v47, a4: v15, a5: (int)v7 + 376667576, a6: v48, a7: v42);
  v43 = v21;
  if ( (char *)v21 != v7 )
    goto LABEL_35;
LABEL_19:
  if ( (unsigned int)sub_1EC3500(a1: v44, a2: v24, a3: v7 + 376614656, a4: v22, a5: v43, a6: v7) == 0 )
  {
LABEL_42:
    v38 = sub_4F636E0(a1: v26, a2: v27, a3: v44);
    if ( (char *)v38 != v7 )
    {
      v25 = v47;
      while ( (char *)v25 != v7 )
      {
        if ( v38 == v25 )
          goto LABEL_20;
        if ( *(int *)(v8 + 16) <= 0 )
        {
          v38 = sub_277F280(a1: v26, a2: v27, a3: v25);
          v25 = v40;
        }
        else
        {
          v25 = (unsigned __int64)&v7[8 * *(unsigned int *)(v25 + 4)];
        }
      }
      goto LABEL_55;
    }
  }
LABEL_20:
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v26, a2: v27, a3: v25);
  return v44;
}
