// sub_504FF80
// rva 0x0504ff80  size 2576  section .text  group text
// window base 0x18504ff80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504FF80(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  int v7; // ebp
  __int64 v8; // r13
  _DWORD *v9; // r14
  __int64 v10; // r15
  _DWORD *v11; // rbx
  _DWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  _DWORD *v16; // r10
  __int64 v17; // rdi
  __int64 v18; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rsi
  _DWORD *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rsi
  _DWORD *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 i; // rax
  __int64 v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v62; // [rsp+10h] [rbp-38h]
  __int64 v63; // [rsp+18h] [rbp-30h]
  _DWORD *v64; // [rsp+20h] [rbp-28h]
  _DWORD *v65; // [rsp+28h] [rbp-20h]
  __int64 v66; // [rsp+30h] [rbp-18h]
  _DWORD *v67; // [rsp+38h] [rbp-10h]
  int v68; // [rsp+44h] [rbp-4h]

  v67 = a3;
  v66 = a6;
  if ( (unsigned __int64)&v61 <= *(_QWORD *)(v10 + 8) )
  {
    v64 = a5;
    sub_1EB84E0();
  }
  else if ( a5 != v9 )
  {
    v11 = v9 + 94303296;
    if ( (int)a5[2] < 4 )
      v12 = v9 + 94303296;
    else
      v12 = a5;
    if ( (_DWORD *)a6 == v9 )
      goto LABEL_84;
    if ( *(int *)(a6 + 8) < 4 )
      v13 = (__int64)(v9 + 94303296);
    else
      v13 = a6;
    v14 = *a3 >> 3;
    v15 = (unsigned __int64)&v9[2 * v9[2 * v14 + 5]];
    v16 = v12;
    v17 = v9[2 * v14 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v14 + 11]));
    v18 = (unsigned __int16)*(_DWORD *)(v15 + 4 * v17 + 12);
    if ( (_DWORD *)v13 == v16 )
    {
      v68 = (unsigned __int16)*(_DWORD *)(v15 + 4 * v17 + 12);
      v63 = v13;
      v65 = v16;
      v64 = a5;
      goto LABEL_17;
    }
    v7 = *(_DWORD *)(v13 + 8);
    if ( (unsigned int)v7 >= 0xA )
    {
LABEL_85:
      v63 = v13;
      v65 = v16;
      v64 = a5;
      v20 = sub_2771220(a1: v17, a2: v15, a3: (unsigned int)v7, a4: v18, a5: 10);
LABEL_86:
      sub_2771220(a1: v17, a2: v15, a3: (unsigned int)v20, a4: v18, a5: 10);
      goto LABEL_87;
    }
    v15 = (unsigned int)v16[2];
    if ( v7 >= 6 )
    {
      if ( v7 == 6 )
      {
        if ( (unsigned int)v15 >= 0xA )
        {
LABEL_89:
          v63 = v13;
          v65 = v16;
          v64 = a5;
          sub_2771220(a1: v17, a2: v15, a3: (unsigned int)v15, a4: v18, a5: 10);
          goto LABEL_90;
        }
        switch ( (_DWORD)v15 )
        {
          case 4:
            if ( (_DWORD)v18 != 7837 )
            {
LABEL_109:
              v63 = v13;
              v65 = v16;
              v64 = a5;
              sub_2770780();
              goto LABEL_110;
            }
            v68 = 7837;
            v63 = v13;
            v65 = v16;
            v62 = v9 + 94303296;
            v64 = a5;
            v27 = *a3 >> 3;
            v28 = &v9[2 * v9[2 * v27 + 5]];
            ((void (__fastcall *)(_DWORD *, _DWORD *))(v8
                                                     + *(_QWORD *)((char *)&v9[2 * v27 + 166]
                                                                 + HIWORD(v28[(v9[2 * v27 + 11]
                                                                             & (0x1E9Du >> HIBYTE(v9[2 * v27 + 11])))
                                                                            + 3]))))(
              a1: v28,
              a2: a3);
            v11 = v62;
            break;
          case 5:
            v68 = v18;
            v63 = v13;
            v65 = v16;
            v62 = v9 + 94303296;
            v64 = a5;
            if ( (_DWORD)v18 != 7837 )
            {
LABEL_113:
              sub_2770780(a1: v17, a2: v15, a3, a4: v65);
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              return sub_50509A0();
            }
            v53 = *a3 >> 3;
            v54 = v9[2 * v53 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v53 + 11]));
            ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                       + *(_QWORD *)((char *)&v9[2 * v53 + 300]
                                                                                   + HIWORD(v9[2
                                                                                             * (unsigned int)v9[2 * v53 + 5]
                                                                                             + 3
                                                                                             + v54]))))(
              a1: v17,
              a2: v54,
              a3,
              a4: a3);
            v11 = v62;
            break;
          case 7:
            v68 = v18;
            v63 = v13;
            v65 = v16;
            v62 = v9 + 94303296;
            v64 = a5;
            if ( (_DWORD)v18 != 7837 )
            {
LABEL_111:
              sub_2770780();
LABEL_112:
              sub_2770780();
              goto LABEL_113;
            }
            v49 = *a3 >> 3;
            v50 = v9[2 * v49 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v49 + 11]));
            ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                       + *(_QWORD *)((char *)&v9[2 * v49 + 48]
                                                                                   + HIWORD(v9[2
                                                                                             * (unsigned int)v9[2 * v49 + 5]
                                                                                             + 3
                                                                                             + v50]))))(
              a1: v17,
              a2: v50,
              a3,
              a4: a3);
            v11 = v62;
            break;
          default:
            goto LABEL_91;
        }
      }
      else
      {
        if ( v7 != 7 )
        {
LABEL_16:
          v68 = v18;
          v63 = v13;
          v65 = v16;
          v64 = a5;
          goto LABEL_17;
        }
        v68 = v18;
        v63 = v13;
        v65 = v16;
        v62 = v9 + 94303296;
        v64 = a5;
        if ( (unsigned int)v15 >= 0xA )
        {
LABEL_87:
          sub_2771220(a1: v17, a2: v15, a3: (unsigned int)v15, a4: v18, a5: 10);
          goto LABEL_88;
        }
        switch ( (_DWORD)v15 )
        {
          case 4:
            if ( v68 != 7837 )
            {
LABEL_105:
              sub_2770780();
              goto LABEL_106;
            }
            v41 = *a3 >> 3;
            v42 = v9[2 * v41 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v41 + 11]));
            ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                       + *(_QWORD *)((char *)&v9[2 * v41 + 164]
                                                                                   + HIWORD(v9[2
                                                                                             * (unsigned int)v9[2 * v41 + 5]
                                                                                             + 3
                                                                                             + v42]))))(
              a1: v17,
              a2: v42,
              a3,
              a4: a3);
            v11 = v62;
            break;
          case 5:
            if ( v68 != 7837 )
            {
LABEL_107:
              sub_2770780();
              goto LABEL_108;
            }
            v47 = *a3 >> 3;
            v48 = v9[2 * v47 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v47 + 11]));
            ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                       + *(_QWORD *)((char *)&v9[2 * v47 + 298]
                                                                                   + HIWORD(v9[2
                                                                                             * (unsigned int)v9[2 * v47 + 5]
                                                                                             + 3
                                                                                             + v48]))))(
              a1: v17,
              a2: v48,
              a3,
              a4: a3);
            v11 = v62;
            break;
          case 6:
            if ( v68 != 7837 )
              goto LABEL_103;
            v23 = *a3 >> 3;
            v24 = v9[2 * v23 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v23 + 11]));
            ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                       + *(_QWORD *)((char *)&v9[2 * v23 + 106]
                                                                                   + HIWORD(v9[2
                                                                                             * (unsigned int)v9[2 * v23 + 5]
                                                                                             + 3
                                                                                             + v24]))))(
              a1: v17,
              a2: v24,
              a3,
              a4: a3);
            v11 = v62;
            break;
          default:
            goto LABEL_93;
        }
      }
    }
    else if ( v7 == 4 )
    {
      v68 = v18;
      v63 = v13;
      v65 = v16;
      v62 = v9 + 94303296;
      v64 = a5;
      if ( (unsigned int)v15 >= 0xA )
      {
LABEL_90:
        v13 = sub_2771220(a1: v17, a2: v15, a3: (unsigned int)v15, a4: v18, a5: 10);
LABEL_91:
        v63 = v13;
        v65 = v16;
        v64 = a5;
        for ( i = sub_5F47120(a1: v17, a2: v15, a3: a5, a4: v18, a5: v66);
              ;
              i = sub_5F47120(a1: v17, a2: v15, a3: v64, a4: v18, a5: v66) )
        {
          sub_2769900(a1: v59, a2: v60, a3: i, a4: v58, a5: &a7);
LABEL_93:
          ;
        }
      }
      switch ( (_DWORD)v15 )
      {
        case 5:
          if ( v68 != 7837 )
          {
LABEL_110:
            sub_2770780();
            goto LABEL_111;
          }
          v51 = *a3 >> 3;
          v52 = v9[2 * v51 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v51 + 11]));
          ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                     + *(_QWORD *)((char *)&v9[2 * v51 + 302]
                                                                                 + HIWORD(v9[2
                                                                                           * (unsigned int)v9[2 * v51 + 5]
                                                                                           + 3
                                                                                           + v52]))))(
            a1: v17,
            a2: v52,
            a3,
            a4: a3);
          v11 = v62;
          break;
        case 6:
          if ( v68 != 7837 )
          {
LABEL_108:
            v13 = sub_2770780();
            goto LABEL_109;
          }
          v55 = *a3 >> 3;
          v56 = v9[2 * v55 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v55 + 11]));
          ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                     + *(_QWORD *)((char *)&v9[2 * v55 + 108]
                                                                                 + HIWORD(v9[2
                                                                                           * (unsigned int)v9[2 * v55 + 5]
                                                                                           + 3
                                                                                           + v56]))))(
            a1: v17,
            a2: v56,
            a3,
            a4: a3);
          v11 = v62;
          break;
        case 7:
          if ( v68 != 7837 )
            goto LABEL_112;
          v25 = *a3 >> 3;
          v26 = v9[2 * v25 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v25 + 11]));
          ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                     + *(_QWORD *)((char *)&v9[2 * v25 + 50]
                                                                                 + HIWORD(v9[2
                                                                                           * (unsigned int)v9[2 * v25 + 5]
                                                                                           + 3
                                                                                           + v26]))))(
            a1: v17,
            a2: v26,
            a3,
            a4: a3);
          v11 = v62;
          break;
        default:
          goto LABEL_93;
      }
    }
    else
    {
      if ( v7 != 5 )
        goto LABEL_16;
      v68 = v18;
      v63 = v13;
      v65 = v16;
      v62 = v9 + 94303296;
      v64 = a5;
      if ( (unsigned int)v15 >= 0xA )
      {
LABEL_88:
        v13 = sub_2771220(a1: v17, a2: v15, a3: (unsigned int)v15, a4: v18, a5: 10);
        goto LABEL_89;
      }
      switch ( (_DWORD)v15 )
      {
        case 4:
          if ( v68 != 7837 )
          {
LABEL_104:
            sub_2770780();
            goto LABEL_105;
          }
          v45 = *a3 >> 3;
          v46 = v9[2 * v45 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v45 + 11]));
          ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                     + *(_QWORD *)((char *)&v9[2 * v45 + 168]
                                                                                 + HIWORD(v9[2
                                                                                           * (unsigned int)v9[2 * v45 + 5]
                                                                                           + 3
                                                                                           + v46]))))(
            a1: v17,
            a2: v46,
            a3,
            a4: a3);
          v11 = v62;
          break;
        case 6:
          if ( v68 != 7837 )
          {
LABEL_106:
            sub_2770780();
            goto LABEL_107;
          }
          v43 = *a3 >> 3;
          v44 = v9[2 * v43 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v43 + 11]));
          ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                     + *(_QWORD *)((char *)&v9[2 * v43 + 110]
                                                                                 + HIWORD(v9[2
                                                                                           * (unsigned int)v9[2 * v43 + 5]
                                                                                           + 3
                                                                                           + v44]))))(
            a1: v17,
            a2: v44,
            a3,
            a4: a3);
          v11 = v62;
          break;
        case 7:
          if ( v68 != 7837 )
            goto LABEL_102;
          v29 = *a3 >> 3;
          v30 = v9[2 * v29 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v29 + 11]));
          ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                     + *(_QWORD *)((char *)&v9[2 * v29 + 52]
                                                                                 + HIWORD(v9[2
                                                                                           * (unsigned int)v9[2 * v29 + 5]
                                                                                           + 3
                                                                                           + v30]))))(
            a1: v17,
            a2: v30,
            a3,
            a4: a3);
          v11 = v62;
          break;
        default:
          goto LABEL_93;
      }
    }
LABEL_17:
    if ( v11 != (_DWORD *)v63 || v11 == (_DWORD *)v66 )
      goto LABEL_18;
    v20 = *(_DWORD *)(v66 + 8);
    if ( (unsigned int)v20 >= 0xA )
      goto LABEL_86;
    if ( v20 < 2 )
    {
      if ( v20 != 0 )
      {
        if ( v68 == 7837 )
        {
          v31 = *v67 >> 3;
          v32 = v9[2 * v31 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v31 + 11]));
          ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                     + *(_QWORD *)((char *)&v9[2 * v31 + 160]
                                                                                 + HIWORD(v9[2
                                                                                           * (unsigned int)v9[2 * v31 + 5]
                                                                                           + 3
                                                                                           + v32]))))(
            a1: v17,
            a2: v32,
            a3: v67,
            a4: v67);
          goto LABEL_18;
        }
        goto LABEL_98;
      }
      if ( v68 == 7837 )
      {
        v35 = *v67 >> 3;
        v36 = v9[2 * v35 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v35 + 11]));
        v37 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                                      + *(_QWORD *)((char *)&v9[2 * v35 + 182]
                                                                                                  + HIWORD(v9[2 * (unsigned int)v9[2 * v35 + 5] + 3 + v36]))))(
                          a1: v17,
                          a2: v36,
                          a3: v67,
                          a4: v67);
        if ( v37 != v9 )
        {
          if ( (unsigned __int16)v9[2 * v9[2 * (*v37 >> 3) + 5]
                                  + 3
                                  + (v9[2 * (*v37 >> 3) + 11] & (0x1E9Du >> HIBYTE(v9[2 * (*v37 >> 3) + 11])))] == 7837 )
          {
            v39 = *v37 >> 3;
            v40 = v9[2 * v39 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v39 + 11]));
            ((void (__fastcall *)(__int64, __int64, _DWORD *))(v8
                                                             + *(_QWORD *)((char *)&v9[2 * v39 + 176]
                                                                         + HIWORD(v9[2 * (unsigned int)v9[2 * v39 + 5]
                                                                                   + 3
                                                                                   + v40]))))(
              a1: v38,
              a2: v40,
              a3: v37);
            goto LABEL_18;
          }
          goto LABEL_101;
        }
LABEL_100:
        sub_2771080();
LABEL_101:
        sub_2770780();
LABEL_102:
        sub_2770780();
LABEL_103:
        sub_2770780();
        goto LABEL_104;
      }
LABEL_97:
      sub_2770780(a1: v17, a2: v15);
LABEL_98:
      sub_2770780(a1: v17, a2: v15);
      goto LABEL_99;
    }
    if ( v20 == 2 )
    {
      if ( v68 == 7837 )
      {
        v33 = *v67 >> 3;
        v34 = v9[2 * v33 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v33 + 11]));
        ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                   + *(_QWORD *)((char *)&v9[2 * v33 + 162]
                                                                               + HIWORD(v9[2
                                                                                         * (unsigned int)v9[2 * v33 + 5]
                                                                                         + 3
                                                                                         + v34]))))(
          a1: v17,
          a2: v34,
          a3: v67,
          a4: v67);
        goto LABEL_18;
      }
      sub_2770780(a1: v17, a2: v15);
      goto LABEL_97;
    }
    if ( v20 == 3 )
    {
      if ( v68 != 7837 )
      {
LABEL_99:
        sub_2770780(a1: v17, a2: v15);
        goto LABEL_100;
      }
      v21 = *v67 >> 3;
      v22 = v9[2 * v21 + 11] & (0x1E9Du >> HIBYTE(v9[2 * v21 + 11]));
      ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v8
                                                                 + *(_QWORD *)((char *)&v9[2 * v21 + 170]
                                                                             + HIWORD(v9[2
                                                                                       * (unsigned int)v9[2 * v21 + 5]
                                                                                       + 3
                                                                                       + v22]))))(
        a1: v17,
        a2: v22,
        a3: v67,
        a4: v67);
    }
LABEL_18:
    if ( *(int *)(v10 + 16) <= 0 )
      sub_277F280(a1: v17, a2: v15);
    return (__int64)v67;
  }
  sub_2771080();
LABEL_84:
  v65 = v12;
  v64 = a5;
  v13 = sub_2771080();
  goto LABEL_85;
}
