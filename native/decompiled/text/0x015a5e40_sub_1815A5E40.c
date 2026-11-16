// sub_1815A5E40
// rva 0x015a5e40  size 1497  section .text  group text
// window base 0x1815a5e40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A5E40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  _DWORD *v9; // rsi
  __int64 v10; // rbp
  _DWORD *v11; // rax
  __int64 (__fastcall *v12)(__int64, _DWORD *, _DWORD *); // rcx
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  _DWORD *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rsi
  _DWORD *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  int v24; // ebx
  unsigned int v25; // ecx
  __int64 v26; // rdi
  __int64 v27; // rsi
  _DWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdx
  _DWORD *v33; // rsi
  __int64 v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 (__fastcall *v38)(__int64, __int64, _DWORD *); // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdi
  unsigned __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rsi
  _DWORD *v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdi
  _DWORD *v51; // r8
  __int64 v52; // r10
  __int64 v53; // rdi
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 (__fastcall *v57)(__int64, __int64, _DWORD *); // rcx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdi
  unsigned __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // r8
  float v66; // xmm1_4
  int v67; // ecx
  int v68; // ebx
  int v69; // r8d
  __int64 i; // rcx
  unsigned int v71; // ebp
  int v72; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v73; // [rsp+8h] [rbp-50h]
  _DWORD *v74; // [rsp+10h] [rbp-48h]
  __int64 v75; // [rsp+18h] [rbp-40h]
  _DWORD *v76; // [rsp+20h] [rbp-38h]
  _DWORD *v77; // [rsp+28h] [rbp-30h]
  _DWORD *v78; // [rsp+30h] [rbp-28h]
  _DWORD *v79; // [rsp+38h] [rbp-20h]
  __int64 v80; // [rsp+40h] [rbp-18h]
  __int64 v81; // [rsp+48h] [rbp-10h]
  int v82; // [rsp+50h] [rbp-8h]
  unsigned int v83; // [rsp+54h] [rbp-4h]

  v80 = a3;
  if ( (unsigned __int64)&v72 <= *(_QWORD *)(v7 + 8) )
  {
    v78 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v6 )
  {
    if ( (unsigned __int16)v6[2 * v6[2 * (*a5 >> 3) + 5]
                            + 3
                            + (v6[2 * (*a5 >> 3) + 11] & (0x61Du >> HIBYTE(v6[2 * (*a5 >> 3) + 11])))] != 1565 )
    {
LABEL_40:
      v78 = a5;
      MEMORY[0x182770780]();
      goto LABEL_41;
    }
    v8 = *a5 >> 3;
    v9 = &v6[2 * v6[2 * v8 + 5]];
    v10 = v6[2 * v8 + 11] & (0x61Du >> HIBYTE(v6[2 * v8 + 11]));
    v11 = &v6[2 * v8];
    v12 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v5 + *(_QWORD *)((char *)v11 + HIWORD(v9[v10 + 3]) + 184));
    v79 = v11;
    v78 = a5;
    v77 = v9;
    v83 = v10;
    result = v12(a1, a2: v9, a3: a5);
    if ( (_DWORD)result != 0 )
    {
      v16 = v80;
      if ( (int)result > *(_DWORD *)(v80 + 40) )
      {
        v65 = *(unsigned int *)(v80 + 12);
        v66 = (float)((float)(int)result / *(float *)(v80 + 32)) + MEMORY[0x123F3C34];
        v67 = (int)v66;
        if ( (int)v66 == 0x80000000 )
          goto LABEL_50;
        goto LABEL_27;
      }
      v82 = result;
      while ( 1 )
      {
        v17 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5
                                                                            + *(_QWORD *)((char *)v79
                                                                                        + HIWORD(v77[v83 + 3])
                                                                                        + 48)))(
                          a1: v14,
                          a2: v15,
                          a3: v78);
        if ( v17 == v6 )
          break;
        if ( (unsigned __int16)v6[2 * v6[2 * (*v17 >> 3) + 5]
                                + 3
                                + (v6[2 * (*v17 >> 3) + 11] & (0x1EFBu >> HIBYTE(v6[2 * (*v17 >> 3) + 11])))] != 7931 )
          goto LABEL_42;
        v19 = *v17 >> 3;
        v20 = v6[2 * v19 + 11] & (0x1EFBu >> HIBYTE(v6[2 * v19 + 11]));
        v21 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5
                                                                            + *(_QWORD *)((char *)&v6[2 * v19 + 16]
                                                                                        + HIWORD(v6[2 * (unsigned int)v6[2 * v19 + 5] + 3 + v20]))))(
                          a1: v18,
                          a2: v20,
                          a3: v17);
        if ( v21 == v6 )
          goto LABEL_43;
        v77 = v21;
        if ( (unsigned __int16)v6[2 * v6[2 * (*v21 >> 3) + 5]
                                + 3
                                + (v6[2 * (*v21 >> 3) + 11] & (0x61Bu >> HIBYTE(v6[2 * (*v21 >> 3) + 11])))] == 1563 )
        {
          v23 = *v21 >> 3;
          v24 = v6[2 * v23 + 11];
          v79 = &v6[2 * v6[2 * v23 + 5]];
          v83 = v24 & (0x61Bu >> SHIBYTE(v24));
          v25 = v79[v83 + 3];
          v76 = &v6[2 * v23];
          result = ((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v5 + *(_QWORD *)((char *)v76 + HIWORD(v25) + 8)))(
                     a1: v22,
                     a2: v79,
                     a3: v21);
          if ( (_DWORD)result == 0 )
            goto LABEL_24;
          v28 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5
                                                                              + *(_QWORD *)((char *)v76
                                                                                          + HIWORD(v79[v83 + 3])
                                                                                          + 16)))(
                            a1: v26,
                            a2: v27,
                            a3: v77);
          if ( v28 == v6
            || (_DWORD)(v31 = (unsigned __int16)v6[2 * v6[2 * (*v28 >> 3) + 5]
                                                 + 3
                                                 + (v6[2 * (*v28 >> 3) + 11]
                                                  & (0x61Cu >> HIBYTE(v6[2 * (*v28 >> 3) + 11])))]) == 1564 )
          {
            if ( v28 != v6 )
            {
              v32 = *v28 >> 3;
              v33 = &v6[2 * v6[2 * v32 + 5]];
              v34 = v6[2 * v32 + 11] & (0x61Cu >> HIBYTE(v6[2 * v32 + 11]));
              v35 = (__int64)&v6[2 * v32];
              v36 = *(_QWORD *)(v35 + HIWORD(v33[v34 + 3]) + 8);
              v75 = v35;
              v74 = v28;
              v73 = v33;
              LODWORD(v81) = v34;
              v37 = ((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v5 + v36))(a1: v29, a2: v33, a3: v28);
              v38 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5
                                                                       + *(_QWORD *)(v75
                                                                                   + HIWORD(v73[(unsigned int)v81 + 3])
                                                                                   + 16));
              v75 = v37;
              v41 = v38(a1: v39, a2: v40, a3: v74);
              sub_1815A59A0(
                a1: v43,
                a2: v44,
                a3: v80,
                a4: v42,
                a5: v75,
                a6: v41,
                a7: v72,
                a8: (int)v73,
                a9: (int)v74,
                a10: v75,
                a11: (int)v76,
                a12: (int)v77,
                a13: (int)v78,
                a14: (int)v79,
                a15: v80,
                a16: v81);
              while ( 1 )
              {
                result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5
                                                                             + *(_QWORD *)((char *)v76
                                                                                         + HIWORD(v79[v83 + 3])
                                                                                         + 8)))(
                           a1: v45,
                           a2: v46,
                           a3: v77);
                if ( (_DWORD)result == 0 )
                {
LABEL_24:
                  if ( *(int *)(v7 + 16) <= 0 )
                    return MEMORY[0x18277F280]();
                  return result;
                }
                v47 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5
                                                                                    + *(_QWORD *)((char *)v76
                                                                                                + HIWORD(v79[v83 + 3])
                                                                                                + 16)))(
                                  a1: v63,
                                  a2: v64,
                                  a3: v77);
                if ( v47 != v6
                  && (unsigned __int16)v6[2 * v6[2 * (*v47 >> 3) + 5]
                                        + 3
                                        + (v6[2 * (*v47 >> 3) + 11] & (0x61Cu >> HIBYTE(v6[2 * (*v47 >> 3) + 11])))] != 1564 )
                {
                  goto LABEL_49;
                }
                if ( v47 == v6 )
                  goto LABEL_48;
                v50 = *v47 >> 3;
                v51 = &v6[2 * v6[2 * v50 + 5]];
                v52 = v6[2 * v50 + 11] & (0x61Cu >> HIBYTE(v6[2 * v50 + 11]));
                v53 = (__int64)&v6[2 * v50];
                v54 = *(_QWORD *)(v53 + HIWORD(v51[v52 + 3]) + 8);
                v74 = v47;
                v75 = v53;
                v73 = v51;
                LODWORD(v81) = v52;
                v55 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + v54))(a1: v53, a2: v49, a3: v47);
                v56 = v75;
                v57 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5
                                                                         + *(_QWORD *)(v75
                                                                                     + HIWORD(v73[(unsigned int)v81 + 3])
                                                                                     + 16));
                v75 = v55;
                v59 = v57(a1: v56, a2: v58, a3: v74);
                sub_1815A59A0(
                  a1: v61,
                  a2: v62,
                  a3: v80,
                  a4: v60,
                  a5: v75,
                  a6: v59,
                  a7: v72,
                  a8: (int)v73,
                  a9: (int)v74,
                  a10: v75,
                  a11: (int)v76,
                  a12: (int)v77,
                  a13: (int)v78,
                  a14: (int)v79,
                  a15: v80,
                  a16: v81);
              }
            }
            goto LABEL_46;
          }
          goto LABEL_47;
        }
LABEL_44:
        LODWORD(result) = MEMORY[0x182770780]();
        do
        {
          v82 = result;
          MEMORY[0x182771080]();
LABEL_46:
          v28 = (_DWORD *)MEMORY[0x182771080]();
LABEL_47:
          MEMORY[0x18276FC00](a1: v29, a2: v30, a3: v28, a4: v31, a5: v6 + 8540888);
LABEL_48:
          v47 = (_DWORD *)MEMORY[0x182771080]();
LABEL_49:
          LODWORD(result) = MEMORY[0x18276FC00](a1: v48, a2: v78, a3: v47, a4: v77, a5: v6 + 8540888);
LABEL_50:
          if ( __builtin_isnan(v66) )
          {
            v67 = 0;
          }
          else if ( v66 > 0.0 )
          {
            v67 = ~v67;
          }
LABEL_27:
          if ( v67 > 0x40000000 )
            JUMPOUT(0x302B32305LL);
          v68 = v67;
        }
        while ( (_DWORD)v65 == 0 );
        v69 = v6[2 * v65 + 2];
        for ( i = (unsigned int)v69; v68 > (int)i; i = v71 )
        {
          v71 = 2 * i;
          if ( *(int *)(v7 + 16) <= 0 )
            LODWORD(result) = MEMORY[0x18277F280]();
        }
        v82 = result;
        if ( (int)i > v69 )
        {
          v81 = __PAIR64__(v68, i);
          sub_1815A7080(a1: v14, a2: v15, a3: v16, a4: i, a5: (unsigned int)i);
        }
      }
LABEL_41:
      MEMORY[0x182771080]();
LABEL_42:
      MEMORY[0x182770780]();
LABEL_43:
      MEMORY[0x182771080]();
      goto LABEL_44;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v14, a2: v15, a3: v80);
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_40;
}
