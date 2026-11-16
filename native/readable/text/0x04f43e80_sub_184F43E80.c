// sub_4F43E80
// rva 0x04f43e80  size 1372  section .text  group text
// window base 0x184f43e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F43E80(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  _DWORD *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  int v20; // edx
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rsi
  unsigned int v26; // eax
  __int64 (__fastcall *v27)(__int64, _DWORD *, _DWORD *, _DWORD *, _QWORD); // rbp
  __int64 v28; // rdi
  unsigned int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 result; // rax
  __int64 v34; // r8
  _DWORD *v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rcx
  unsigned int v38; // eax
  __int64 (__fastcall *v39)(__int64, _DWORD *, _DWORD *); // rcx
  __int64 v40; // rdi
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  unsigned int v45; // edx
  int i; // eax
  __int64 (__fastcall *v47)(_DWORD *, __int64, _DWORD *, _QWORD, _QWORD); // r11
  unsigned int v48; // eax
  __int64 (__fastcall *v49)(__int64, _DWORD *, _DWORD *, _DWORD *, _QWORD); // rbp
  __int64 v50; // rdi
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v57; // [rsp+8h] [rbp-50h]
  _DWORD *v58; // [rsp+10h] [rbp-48h]
  _DWORD *v59; // [rsp+18h] [rbp-40h]
  __int64 v60; // [rsp+20h] [rbp-38h]
  int v61; // [rsp+2Ch] [rbp-2Ch]
  _DWORD *v62; // [rsp+30h] [rbp-28h]
  _DWORD *v63; // [rsp+38h] [rbp-20h]
  unsigned int v64; // [rsp+40h] [rbp-18h]
  unsigned int v65; // [rsp+44h] [rbp-14h]
  unsigned int v66; // [rsp+48h] [rbp-10h]
  int v67; // [rsp+4Ch] [rbp-Ch]
  unsigned int v68; // [rsp+50h] [rbp-8h]
  unsigned int v69; // [rsp+54h] [rbp-4h]

  v63 = a3;
  v62 = a5;
  if ( (unsigned __int64)&v56 <= *(_QWORD *)(v9 + 8) )
  {
    v10 = sub_1EB84E0();
LABEL_33:
    v52 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v52 + 48) <= *(_QWORD *)(v9 + 32) )
      goto LABEL_34;
    while ( 1 )
    {
LABEL_40:
      v61 = v10;
      v52 = sub_1EAA920(a1, a2, a3: v11);
      v10 = v61;
      while ( 1 )
      {
        *(_DWORD *)(v52 + 20) = 46923644;
        *(_DWORD *)(v52 + 16) = v10;
        *(_DWORD *)(v52 + 12) = (unsigned __int64)(v52 - (_QWORD)v8) >> 3;
        v60 = v52;
        sub_503B9A0(a1, a2, a3: v52, a4: v11, a5: 0);
        v10 = sub_2769900(a1: v54, a2: v55, a3: v60, a4: v53, a5: &a7);
LABEL_36:
        v52 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v52 + 48) > *(_QWORD *)(v9 + 32) )
          break;
LABEL_34:
        *(_QWORD *)(v9 + 40) = v52 + 48;
        *(_DWORD *)v52 = 34101256;
        *(_DWORD *)(v52 + 4) = 0;
        *(_QWORD *)(v52 + 8) = 0;
        *(_QWORD *)(v52 + 16) = 0;
        *(_QWORD *)(v52 + 24) = 0;
        *(_QWORD *)(v52 + 32) = 0;
        *(_QWORD *)(v52 + 40) = 0;
      }
    }
  }
  v10 = v8[93585974];
  v11 = 34101256;
  if ( a3 == v8 )
    goto LABEL_33;
  if ( a5 == v8 )
    goto LABEL_36;
  if ( a5 == a3 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280(a1, a2, a3, a4: 34101256);
    return 0;
  }
  v12 = *a3 >> 3;
  v13 = v8[2 * v12 + 11];
  v14 = &v8[2 * v8[2 * v12 + 5]];
  if ( (unsigned __int16)v14[(v13 & (0x568u >> SHIBYTE(v13))) + 3] != 1384 )
  {
    sub_2770780();
  }
  else if ( (unsigned __int16)v8[2 * v8[2 * (*a5 >> 3) + 5]
                               + 3
                               + (v8[2 * (*a5 >> 3) + 11] & (0x568u >> HIBYTE(v8[2 * (*a5 >> 3) + 11])))] == 1384 )
  {
    v15 = *a3 >> 3;
    v16 = *a5 >> 3;
    if ( (_DWORD)v16 == (_DWORD)v15 && (unsigned __int16)v14[(v13 & (0x56Au >> SHIBYTE(v13))) + 3] == 1386 )
    {
      v34 = *a3 >> 3;
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                       + *(_QWORD *)((char *)&v8[2 * v34] + HIWORD(v8[2 * v8[2 * v34 + 5] + 3 + (v8[2 * v34 + 11] & (0x56Au >> HIBYTE(v8[2 * v34 + 11])))]))))(
                 a1: v15,
                 a2: v16,
                 a3,
                 a4: a3,
                 a5: v62);
      if ( *(int *)(v9 + 16) <= 0 )
        return sub_277F280();
    }
    else
    {
      v61 = *a5 >> 3;
      v17 = v8[2 * v15 + 11];
      v60 = (__int64)&v8[2 * v8[2 * v15 + 5]];
      v69 = v17 & (0x568u >> SHIBYTE(v17));
      v18 = *(_DWORD *)(v60 + 4LL * v69 + 12);
      v59 = &v8[2 * v15];
      v19 = ((__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, _DWORD *))(v7
                                                                           + *(_QWORD *)((char *)v59 + HIWORD(v18) + 40)))(
              a1: v59,
              a2: v16,
              a3,
              a4: a3);
      v20 = v8[2 * v61 + 11];
      v58 = &v8[2 * v8[2 * v61 + 5]];
      v68 = v20 & (0x568u >> SHIBYTE(v20));
      v21 = v58[v68 + 3];
      v57 = &v8[2 * v61];
      v22 = *(_QWORD *)((char *)v57 + HIWORD(v21) + 40);
      v67 = v19;
      v24 = ((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v7 + v22))(a1: v23, a2: v57, a3: v62);
      if ( v67 < v24 )
        JUMPOUT(0x309E59FF5LL);
      v67 = v24;
      if ( v24 < 1 )
      {
        v66 = 0;
        v35 = v59;
        v36 = v69;
        v37 = v60;
LABEL_22:
        v38 = ((__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *))(v7
                                                                   + *(_QWORD *)((char *)v35
                                                                               + HIWORD(*(_DWORD *)(v37 + 4 * v36 + 12))
                                                                               + 40)))(
                a1: v35,
                a2: v25,
                a3: v63);
        v39 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v7
                                                                  + *(_QWORD *)((char *)v57 + HIWORD(v58[v68 + 3]) + 40));
        v68 = v38;
        v41 = v39(a1: v40, a2: v57, a3: v62);
        v45 = v68;
        if ( *(int *)(v9 + 16) <= 0 )
          v41 = sub_277F280(a1: v43, a2: v44, a3: v68, a4: v42, a5: v66);
        return v45 - v41;
      }
      else
      {
        v26 = ((__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, __int64, _QWORD))(v7
                                                                                    + *(_QWORD *)((char *)v59
                                                                                                + HIWORD(*(_DWORD *)(v60 + 4LL * v69 + 12)))))(
                a1: v59,
                a2: v25,
                a3: v63,
                a4: v60,
                a5: 0);
        v27 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *, _DWORD *, _QWORD))(v7
                                                                                    + *(_QWORD *)((char *)v57
                                                                                                + HIWORD(v58[v68 + 3])));
        v65 = v26;
        v29 = v27(a1: v28, a2: v57, a3: v62, a4: v58, a5: 0);
        v31 = v65;
        if ( v65 == v29 )
        {
          for ( i = 1; ; i = v65 + 1 )
          {
            v35 = v59;
            if ( v67 <= i )
            {
              v66 = i;
              v37 = v60;
              v36 = v69;
              goto LABEL_22;
            }
            v47 = (__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD, _QWORD))(v7
                                                                                      + *(_QWORD *)((char *)v59
                                                                                                  + HIWORD(*(_DWORD *)(v60 + 4LL * v69 + 12))));
            v65 = i;
            v48 = v47(a1: v59, a2: v25, a3: v63, a4: (unsigned int)v67, a5: (unsigned int)i);
            v49 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *, _DWORD *, _QWORD))(v7
                                                                                        + *(_QWORD *)((char *)v57 + HIWORD(v58[v68 + 3])));
            v64 = v48;
            v51 = v49(a1: v50, a2: v57, a3: v62, a4: v58, a5: v65);
            v31 = v64;
            if ( v64 != v51 )
              break;
          }
          v32 = v51;
        }
        else
        {
          v32 = v29;
        }
        if ( *(int *)(v9 + 16) <= 0 )
          sub_277F280(a1: v30, a2: v25, a3: v32, a4: v31, a5: (unsigned int)v67);
        return (unsigned int)(v31 - v32);
      }
    }
    return result;
  }
  v10 = sub_2770780();
  goto LABEL_40;
}
