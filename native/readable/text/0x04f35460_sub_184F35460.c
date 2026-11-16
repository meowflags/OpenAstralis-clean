// sub_4F35460
// rva 0x04f35460  size 1608  section .text  group text
// window base 0x184f35460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F35460(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char *a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  int v11; // ebx
  char *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned int v20; // ebx
  int v21; // ebp
  unsigned __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rbp
  unsigned __int64 j; // r8
  unsigned __int64 v28; // rax
  unsigned int v29; // ebx
  unsigned __int64 k; // r8
  unsigned __int64 v31; // rcx
  __int64 result; // rax
  _DWORD *v33; // r8
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rbp
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rsi
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rbx
  __int64 v53; // [rsp+0h] [rbp-58h] BYREF
  char *v54; // [rsp+8h] [rbp-50h]
  char *i; // [rsp+10h] [rbp-48h]
  __int64 v56; // [rsp+18h] [rbp-40h]
  int v57; // [rsp+24h] [rbp-34h]
  char *v58; // [rsp+28h] [rbp-30h]
  unsigned __int64 v59; // [rsp+30h] [rbp-28h]
  unsigned int v60; // [rsp+38h] [rbp-20h]
  int v61; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v62; // [rsp+40h] [rbp-18h]
  unsigned int v63; // [rsp+44h] [rbp-14h]
  __int64 v64; // [rsp+48h] [rbp-10h]
  __int64 v65; // [rsp+50h] [rbp-8h]

  v59 = a3;
  v58 = a5;
  if ( (unsigned __int64)&v53 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a5 != v8 )
  {
    v10 = *(_DWORD *)a5 >> 3;
    v11 = *(_DWORD *)&v8[8 * v10 + 44];
    v12 = &v8[8 * *(unsigned int *)&v8[8 * v10 + 20]];
    v57 = *(_DWORD *)a5 >> 3;
    if ( (unsigned __int16)*(_DWORD *)&v12[4 * (v11 & (0x568u >> SHIBYTE(v11))) + 12] != 1384 )
    {
LABEL_43:
      v15 = sub_2770780();
LABEL_44:
      v36 = v19;
      v63 = v15;
      v37 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v37 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v37 = sub_1EAA920(a1: v17, a2: v18, a3: 34085680);
        v36 = v64;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v37 + 24;
        *(_DWORD *)v37 = 34085680;
        *(_DWORD *)(v37 + 4) = 0;
        *(_QWORD *)(v37 + 8) = 0;
        *(_QWORD *)(v37 + 16) = 0;
      }
      v56 = v37;
      v38 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v38 + 32) > *(_QWORD *)(v9 + 32) )
      {
        v38 = sub_1EAA840(a1: v17, a2: v18, a3: v36, a4: v16, a5: 16);
        v37 = v56;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v38 + 32;
        *(_QWORD *)v38 = v36;
        *(_DWORD *)(v38 + 8) = 16;
        *(_DWORD *)(v38 + 12) = 0;
        *(_QWORD *)(v38 + 16) = 0;
        *(_QWORD *)(v38 + 24) = 0;
      }
      *(_DWORD *)(v37 + 4) = (unsigned __int64)(v38 - (_QWORD)v8) >> 3;
      if ( (*(_DWORD *)v37 & 2) == 0 )
      {
LABEL_49:
        sub_4F36F80(a1: v17, a2: v18, a3: v37, a4: v16, a5: v8 + 368496264);
        sub_4F36640(a1: v40, a2: v41, a3: v56, a4: v39, a5: v63);
        v45 = v56;
        if ( *(_DWORD *)(v56 + 8) == 0 )
          goto LABEL_57;
        v46 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v46 + 24) > *(_QWORD *)(v9 + 32) )
        {
          v46 = sub_1EAA920(a1: v43, a2: v44, a3: 34082680);
          v47 = v56;
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v46 + 24;
          *(_DWORD *)v46 = 34082680;
          *(_DWORD *)(v46 + 4) = 0;
          *(_QWORD *)(v46 + 8) = 0;
          *(_QWORD *)(v46 + 16) = 0;
          v47 = v45;
        }
        v54 = (char *)v46;
        sub_4FE9280(a1: v43, a2: v44, a3: v46, a4: v42, a5: v47, a6: v8);
        v65 = v7;
        for ( i = v54; ; i = v8 + 373281248 )
        {
          v48 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v48 + 40) > *(_QWORD *)(v9 + 32) )
          {
            v48 = sub_1EAA920(a1: v43, a2: v44, a3: 36108448);
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v48 + 40;
            *(_DWORD *)v48 = 36108448;
            *(_DWORD *)(v48 + 4) = 0;
            *(_QWORD *)(v48 + 8) = 0;
            *(_QWORD *)(v48 + 16) = 0;
            *(_QWORD *)(v48 + 24) = 0;
            *(_QWORD *)(v48 + 32) = 0;
          }
          *(_DWORD *)(v48 + 20) = 46923644;
          *(_DWORD *)(v48 + 16) = *((_DWORD *)v8 + 93585974);
          *(_DWORD *)(v48 + 12) = (unsigned __int64)(v48 - (_QWORD)v8) >> 3;
          v54 = (char *)v48;
          sub_503B9A0(a1: v43, a2: v44, a3: v48, a4: v42, a5: 0);
          v51 = (unsigned __int64)v54;
          *((_DWORD *)v54 + 2) = (unsigned __int64)(i - v8) >> 3;
          if ( (*(_DWORD *)v51 & 2) != 0 )
          {
            v52 = (v51 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + ((v51 - v52) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + ((v51 - v52) >> 9) + 0x38) = 0;
          }
          sub_2769900(a1: v49, a2: v50, a3: v51, a4: v51, a5: &a7);
LABEL_57:
          ;
        }
      }
LABEL_59:
      v16 = (v37 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((v37 - v16) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((v37 - v16) >> 9) + 0x38) = 0;
      goto LABEL_49;
    }
    v13 = *(_DWORD *)a5 >> 3;
    v14 = *(_DWORD *)&v8[8 * v13 + 44] & (0x568u >> HIBYTE(*(_DWORD *)&v8[8 * v13 + 44]));
    v15 = ((__int64 (__fastcall *)(__int64, __int64, char *))(v7
                                                            + *(_QWORD *)&v8[8 * v13
                                                                           + 40
                                                                           + HIWORD(*(_DWORD *)&v8[8
                                                                                                 * *(unsigned int *)&v8[8 * v13 + 20]
                                                                                                 + 12
                                                                                                 + 4 * v14])]))(
            a1,
            a2: v14,
            a3: a5);
    v19 = 34082368;
    v64 = 34082368;
    if ( v15 < 0 )
      goto LABEL_44;
    if ( v15 < 2147483631 )
      v20 = v15 + 16;
    else
      v20 = 0x7FFFFFFF;
    v62 = v20;
    if ( *(__int16 *)&v8[8 * v57 + 62] >= 2 && *(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v57 + 16] + 16] == 26690 )
    {
      v33 = v58;
      v22 = v59;
      v18 = (unsigned __int8)v58[13];
      *(_BYTE *)(v59 + 13) |= v18;
      v21 = *((char *)v33 + 12);
    }
    else
    {
      if ( *(_DWORD *)v58 >> 3 == 4260335 )
        v21 = v58[12];
      else
        v21 = 0;
      v22 = v59;
    }
    *(_BYTE *)(v22 + 12) = v21;
    if ( v21 != 0 )
    {
      v61 = v21;
      v63 = v15;
      v23 = sub_50217A0(a1: v17, a2: v18, a3: v20);
      if ( (v23 & 0x80000000) == 0 )
      {
        v24 = *(_QWORD *)(v9 + 40);
        v25 = (v23 + 19LL) & 0x1FFFFFFF8LL;
        if ( v25 >= 0x20000 || v24 + v25 > *(_QWORD *)(v9 + 32) )
        {
          v60 = v23;
          v24 = sub_1EAA840(a1: v17, a2: v18, a3: v64, a4: v25, a5: v23);
        }
        else
        {
          v26 = v64;
          *(_QWORD *)(v9 + 40) = v24 + v25;
          *(_QWORD *)v24 = v26;
          *(_DWORD *)(v24 + 8) = v23;
          *(_DWORD *)(v24 + 12) = 0;
          if ( v25 - 16 >= 0x800 )
          {
            v35 = v25 - 16;
            memset((void *)(v24 + 16), 0, v35);
            v17 = v24 + 16 + v35;
          }
          else
          {
            for ( j = 16; v25 > j; j += 8LL )
              *(_QWORD *)(v24 + j) = 0;
          }
        }
        goto LABEL_29;
      }
      sub_2770E80(a1: v17, a2: v18, a3: v23);
      goto LABEL_59;
    }
    v61 = 0;
    v63 = v15;
    v24 = *(_QWORD *)(v9 + 40);
    v28 = (v62 + 19LL) & 0x1FFFFFFF8LL;
    if ( v28 >= 0x20000 || (v22 = v24 + v28, v24 + v28 > *(_QWORD *)(v9 + 32)) )
    {
      v24 = sub_1EAA840(a1: v17, a2: v18, a3: 34082368, a4: v22, a5: v62);
    }
    else
    {
      v29 = v62;
      *(_QWORD *)(v9 + 40) = v22;
      *(_QWORD *)v24 = 34082368;
      *(_QWORD *)(v24 + 8) = v29;
      if ( v28 - 16 >= 0x800 )
      {
        memset((void *)(v24 + 16), 0, v28 - 16);
        v17 = v24 + v28;
      }
      else
      {
        for ( k = 16; v28 > k; k += 8LL )
          *(_QWORD *)(v24 + k) = 0;
      }
    }
LABEL_29:
    v31 = v59;
    *(_DWORD *)(v59 + 4) = (unsigned __int64)(v24 - (_QWORD)v8) >> 3;
    if ( (*(_DWORD *)v31 & 2) != 0 )
    {
      v34 = (v31 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + ((v31 - v34) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + ((v31 - v34) >> 9) + 0x38) = 0;
    }
    result = ((__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, char *))(v7 + *(_QWORD *)&v8[8 * (*(_DWORD *)v31 >> 3) + 208]))(
               a1: v17,
               a2: v18,
               a3: v31,
               a4: v31,
               a5: v58);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
  goto LABEL_43;
}
