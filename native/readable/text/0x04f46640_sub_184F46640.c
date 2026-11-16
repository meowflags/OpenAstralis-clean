// sub_4F46640
// rva 0x04f46640  size 1598  section .text  group text
// window base 0x184f46640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F46640(__int64 a1, __int64 a2, char *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  char *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, __int64, char *, _QWORD, __int64); // rcx
  __int64 result; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned int v29; // eax
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // r9d
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  _DWORD *v53; // rax
  unsigned __int64 v54; // rbx
  char v55; // [rsp+0h] [rbp-58h] BYREF
  char *v56; // [rsp+10h] [rbp-48h]
  char *i; // [rsp+18h] [rbp-40h]
  __int64 v58; // [rsp+20h] [rbp-38h]
  __int64 v59; // [rsp+28h] [rbp-30h]
  char *v60; // [rsp+30h] [rbp-28h]
  unsigned int v61; // [rsp+38h] [rbp-20h]
  int v62; // [rsp+3Ch] [rbp-1Ch]
  int v63; // [rsp+40h] [rbp-18h]
  int v64; // [rsp+44h] [rbp-14h]
  __int64 v65; // [rsp+48h] [rbp-10h]
  __int64 v66; // [rsp+50h] [rbp-8h]

  if ( (unsigned __int64)&v55 <= *(_QWORD *)(v9 + 8) )
  {
    v60 = a3;
    sub_1EB84E0();
  }
  else if ( a3 != v8 )
  {
    v60 = a3;
    v10 = sub_4FFED40();
    if ( (char *)v10 == v8 )
    {
LABEL_58:
      sub_2771080(a1: v12, a2: v13, a3: v60);
      goto LABEL_59;
    }
    v59 = sub_4FFE180(a1: v12, a2: v13, a3: v10, a4: v11, a5: v8 + 376257808);
    v14 = (char *)sub_4F5BEE0();
    if ( v14 == v8 )
    {
LABEL_59:
      LODWORD(result) = sub_2771080();
LABEL_60:
      v64 = result;
      v53 = (_DWORD *)sub_276BEE0();
      v51 = *v53 >> 3;
      if ( *(__int16 *)&v8[8 * v51 + 62] < 3 )
        goto LABEL_38;
      v51 = *(unsigned int *)&v8[8 * v51 + 16];
      if ( *(_DWORD *)&v8[8 * v51 + 20] != 70136 )
        goto LABEL_38;
      v66 = v7;
      v63 = v64;
      goto LABEL_25;
    }
    v17 = (__int64 (__fastcall *)(__int64, __int64, char *, _QWORD, __int64))(v7
                                                                            + *(_QWORD *)&v8[8 * (*(_DWORD *)v14 >> 3)
                                                                                           + 112]);
    result = v17(a1: v15, a2: v16, a3: v14, a4: v17, a5: v59);
    if ( (_DWORD)result != -1 )
    {
      if ( *(int *)(v9 + 16) <= 0 )
      {
        v64 = result;
        return sub_277F280();
      }
      return result;
    }
    if ( (char *)v59 == v8 )
      goto LABEL_60;
    v21 = *(unsigned int *)(v59 + 4);
    if ( (_DWORD)v21 == 0 )
      goto LABEL_60;
    v64 = -1;
    v22 = sub_4FF7A20(
            a1: v19,
            a2: v20,
            a3: v59,
            a4: (unsigned int)*(char *)(v59 + 12),
            a5: 32,
            a6: (unsigned int)((*(_DWORD *)&v8[8 * v21 + 8] >> *(_BYTE *)(v59 + 12)) - 1));
    if ( v22 == -1 )
    {
      v66 = v7;
      v63 = v64;
      goto LABEL_25;
    }
    v25 = *(unsigned int *)(v59 + 4);
    if ( (_DWORD)v25 == 0 )
    {
      v66 = v7;
      v63 = v64;
      goto LABEL_25;
    }
    v26 = *(_DWORD *)&v8[8 * v25 + 8];
    v27 = (unsigned int)*(char *)(v59 + 12);
    v28 = v26 >> *(_BYTE *)(v59 + 12);
    v62 = v22;
    v29 = sub_4F89680(a1: 16, a2: v24, a3: v59, a4: v27, a5: (unsigned int)(v22 + 1), a6: v28);
    if ( HIWORD(v29) >= 0x11u )
    {
      v63 = v29;
      goto LABEL_25;
    }
    v61 = v29;
    v33 = sub_4F47440(a1: v23, a2: v24, a3: v29, a4: v30, a5: v31, a6: v32, a7: v55);
    if ( v59 != v33 )
    {
      if ( (char *)v33 == v8 )
      {
        v66 = v7;
        v63 = v61;
      }
      else if ( *(_BYTE *)(v59 + 12) == *(_BYTE *)(v33 + 12) )
      {
        v34 = *(unsigned int *)(v33 + 4);
        if ( (_DWORD)v34 != 0 )
        {
          v35 = *(unsigned int *)(v59 + 4);
          if ( (_DWORD)v35 != 0 )
          {
            v36 = *(_DWORD *)&v8[8 * v34 + 8];
            v24 = *(unsigned int *)&v8[8 * v35 + 8];
            if ( (_DWORD)v24 == v36 )
            {
              if ( v36 == 0
                || (unsigned int)sub_282F960(
                                   a1: 12,
                                   a2: v24,
                                   a3: &v8[8 * v34],
                                   a4: v59,
                                   a5: 12,
                                   a6: &v8[8 * v35]) != 0 )
              {
                goto LABEL_21;
              }
              v66 = v7;
              v63 = v61;
            }
            else
            {
              v66 = v7;
              v63 = v61;
            }
          }
          else
          {
            v66 = v7;
            v63 = v61;
          }
        }
        else
        {
          v66 = v7;
          v63 = v61;
        }
      }
      else
      {
        v66 = v7;
        v63 = v61;
      }
LABEL_25:
      v37 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v37 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v37 = sub_1EAA920(a1: v23, a2: v24, a3: 34085680);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v37 + 24;
        *(_DWORD *)v37 = 34085680;
        *(_DWORD *)(v37 + 4) = 0;
        *(_QWORD *)(v37 + 8) = 0;
        *(_QWORD *)(v37 + 16) = 0;
      }
      v58 = v37;
      v38 = *(_QWORD *)(v9 + 40);
      v39 = v38 + 32;
      if ( (unsigned __int64)(v38 + 32) > *(_QWORD *)(v9 + 32) )
      {
        v38 = sub_1EAA840(a1: v23, a2: v24, a3: 34082368, a4: v39, a5: 16);
        v37 = v58;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v39;
        *(_QWORD *)v38 = 34082368;
        *(_DWORD *)(v38 + 8) = 16;
        *(_DWORD *)(v38 + 12) = 0;
        *(_QWORD *)(v38 + 16) = 0;
        *(_QWORD *)(v38 + 24) = 0;
      }
      *(_DWORD *)(v37 + 4) = (unsigned __int64)(v38 - (_QWORD)v8) >> 3;
      if ( (*(_DWORD *)v37 & 2) != 0 )
      {
        v54 = (v37 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((v37 - v54) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((v37 - v54) >> 9) + 0x38) = 0;
      }
      sub_4F36F80(a1: v23, a2: v24, a3: v37, a4: v37, a5: (__int64)(v8 + 366345176));
      v43 = sub_4F36F80(a1: v41, a2: v42, a3: v58, a4: v40, a5: v59);
      v47 = v58;
      if ( *(_DWORD *)(v58 + 8) == 0 )
        goto LABEL_39;
      v48 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v48 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v56 = (char *)v43;
        v48 = sub_1EAA920(a1: v45, a2: v46, a3: 34082680);
        v49 = v58;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v48 + 24;
        *(_DWORD *)v48 = 34082680;
        *(_DWORD *)(v48 + 4) = 0;
        *(_QWORD *)(v48 + 8) = 0;
        *(_QWORD *)(v48 + 16) = 0;
        v49 = v47;
      }
      v56 = (char *)v48;
      sub_4FE9280(a1: v45, a2: v46, a3: v48, a4: v44, a5: v49, a6: v8);
      v65 = v7;
      for ( i = v56; ; i = v8 + 373281248 )
      {
        v50 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v50 + 40) > *(_QWORD *)(v9 + 32) )
        {
          v50 = sub_1EAA920(a1: v45, a2: v46, a3: 34081944);
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v50 + 40;
          *(_DWORD *)v50 = 34081944;
          *(_DWORD *)(v50 + 4) = 0;
          *(_QWORD *)(v50 + 8) = 0;
          *(_QWORD *)(v50 + 16) = 0;
          *(_QWORD *)(v50 + 24) = 0;
          *(_QWORD *)(v50 + 32) = 0;
        }
        *(_DWORD *)(v50 + 20) = 46923644;
        *(_DWORD *)(v50 + 16) = *((_DWORD *)v8 + 93585974);
        *(_DWORD *)(v50 + 12) = (unsigned __int64)(v50 - (_QWORD)v8) >> 3;
        v56 = (char *)v50;
        sub_503B9A0(a1: v45, a2: v46, a3: v50, a4: v44, a5: 0);
        v52 = (unsigned __int64)v56;
        *((_DWORD *)v56 + 2) = (unsigned __int64)(i - v8) >> 3;
        if ( (*(_DWORD *)v52 & 2) != 0 )
        {
          v51 = (v52 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v52 & 0xFFFFFFFFFFF80000LL) + ((v52 - v51) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v52 & 0xFFFFFFFFFFF80000LL) + ((v52 - v51) >> 9) + 0x38) = 0;
          v53 = (_DWORD *)v52;
        }
        else
        {
          v53 = (_DWORD *)v52;
        }
LABEL_38:
        sub_2769900(a1: v23, a2: v24, a3: v53, a4: v51, a5: &a7);
LABEL_39:
        ;
      }
    }
LABEL_21:
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return v61;
  }
  sub_2771080();
  goto LABEL_58;
}
