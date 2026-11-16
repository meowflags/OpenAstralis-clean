// sub_15A1C00
// rva 0x015a1c00  size 1194  section .text  group text
// window base 0x1815a1c00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A1C00(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // rbx
  __int64 v8; // r13
  _DWORD *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  unsigned int *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // r8
  _DWORD *v20; // r9
  _DWORD *v21; // r10
  unsigned int v22; // r8d
  unsigned __int64 v23; // r10
  _DWORD *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rsi
  _DWORD *v30; // rdi
  __int64 v31; // r12
  _DWORD *v32; // rsi
  void (__fastcall *v33)(_DWORD *, _DWORD *, _DWORD *, _QWORD, __int64, _DWORD *); // rcx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // [rsp+0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+10h] [rbp-48h]
  int v46; // [rsp+1Ch] [rbp-3Ch]
  _DWORD *v47; // [rsp+20h] [rbp-38h]
  _DWORD *v48; // [rsp+28h] [rbp-30h]
  __int64 v49; // [rsp+30h] [rbp-28h]
  __int64 v50; // [rsp+38h] [rbp-20h]
  _DWORD *v51; // [rsp+40h] [rbp-18h]
  unsigned int *v52; // [rsp+48h] [rbp-10h]
  int v53; // [rsp+54h] [rbp-4h]

  v52 = a3;
  v51 = a5;
  if ( (unsigned __int64)&v44 <= *(_QWORD *)(v10 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a5 != v9 )
  {
    v11 = a3[1];
    if ( (_DWORD)v11 == 0 )
      goto LABEL_47;
    v12 = (unsigned int)v9[2 * v11 + 3];
    v50 = (__int64)&v9[2 * v12];
    if ( (_DWORD)v12 == 0 )
      goto LABEL_48;
    v53 = v9[2 * v12 + 2];
    v13 = sub_15A45A0();
    if ( v13 > v53 )
    {
      v16 = v52;
    }
    else
    {
      v16 = v52;
      v17 = v52[3];
      if ( (int)v17 >= 0 )
      {
        v7 = (unsigned int)v53;
        v18 = v50;
        while ( 1 )
        {
          v19 = v16[2];
          if ( (_DWORD)v19 == 0 && v13 <= (int)v17 )
            break;
          if ( (_DWORD)v19 != 0 )
          {
            v15 = (unsigned int)v9[2 * v19 + 1];
            v16[2] = v9[2 * v19 + 6];
            if ( (*v16 & 2) != 0 )
            {
              v23 = ((unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)(((unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL)
                            + (((unsigned __int64)v16 - v23) >> 9)
                            + 0x38) != 0 )
                *(_BYTE *)(((unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)v16 - v23) >> 9) + 0x38) = 0;
            }
            v14 = (unsigned int)v9[2 * v19 + 5];
            v20 = &v9[2 * v14];
            v21 = &v9[2 * v15];
            if ( (_DWORD)v15 != 0 )
            {
              if ( (_DWORD)v15 == 47076751 )
                v7 = (__int64)v9;
              else
                v7 = (__int64)&v9[2 * v15];
              v25 = v51;
              if ( (unsigned __int16)v9[2 * v9[2 * (*v51 >> 3) + 5]
                                      + 3
                                      + (v9[2 * (*v51 >> 3) + 11] & (0x636u >> HIBYTE(v9[2 * (*v51 >> 3) + 11])))] != 1590 )
                goto LABEL_50;
              v26 = *(_QWORD *)(v10 + 40);
              v27 = v26 + 24;
              if ( (unsigned __int64)(v26 + 24) > *(_QWORD *)(v10 + 32) )
              {
                v49 = v7;
                v48 = v21;
                v47 = &v9[2 * v14];
                v46 = v14;
                v53 = v13;
                v28 = sub_1EAA920(a1: v14, a2: v27, a3: 34436688);
                v7 = v49;
                LODWORD(v14) = v46;
                v25 = v51;
              }
              else
              {
                *(_QWORD *)(v10 + 40) = v27;
                *(_DWORD *)v26 = 34436688;
                *(_DWORD *)(v26 + 4) = 0;
                *(_QWORD *)(v26 + 8) = 0;
                *(_QWORD *)(v26 + 16) = 0;
                v48 = v21;
                v47 = &v9[2 * v14];
                v53 = v13;
                v28 = v26;
              }
              *(_DWORD *)(v28 + 8) = v14;
              *(_DWORD *)(v28 + 4) = (unsigned __int64)(v7 - (_QWORD)v9) >> 3;
              v29 = *v25 >> 3;
              v30 = &v9[2 * v9[2 * v29 + 5]];
              v31 = v9[2 * v29 + 11] & (0x636u >> HIBYTE(v9[2 * v29 + 11]));
              v32 = &v9[2 * v29];
              v33 = (void (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, _QWORD, __int64, _DWORD *))(v8
                                                                                                 + *(_QWORD *)((char *)v32 + HIWORD(v30[v31 + 3])));
              v49 = v7;
              v33(a1: v30, a2: v32, a3: v25, a4: v33, a5: v28, a6: v20);
              v37 = v52[1];
              if ( (_DWORD)v37 == 0 )
                goto LABEL_51;
              if ( v9[2 * v37 + 11] != v52[6] )
              {
                while ( 1 )
                {
                  v43 = *(_QWORD *)(v10 + 40);
                  if ( (unsigned __int64)(v43 + 40) > *(_QWORD *)(v10 + 32) )
                  {
                    v43 = sub_1EAA920(a1: v35, a2: v36, a3: 34449872);
                  }
                  else
                  {
                    *(_QWORD *)(v10 + 40) = v43 + 40;
                    *(_DWORD *)v43 = 34449872;
                    *(_DWORD *)(v43 + 4) = 0;
                    *(_QWORD *)(v43 + 8) = 0;
                    *(_QWORD *)(v43 + 16) = 0;
                    *(_QWORD *)(v43 + 24) = 0;
                    *(_QWORD *)(v43 + 32) = 0;
                  }
                  *(_DWORD *)(v43 + 20) = 46923644;
                  *(_DWORD *)(v43 + 16) = v9[93585974];
                  *(_DWORD *)(v43 + 12) = (unsigned __int64)(v43 - (_QWORD)v9) >> 3;
                  v45 = v43;
                  sub_503B9A0(a1: v35, a2: v36, a3: v43, a4: v34, a5: 0);
                  v42 = v45;
LABEL_46:
                  sub_2769900(a1: v40, a2: v41, a3: v42, a4: v39, a5: &a7);
LABEL_47:
                  sub_2771080();
LABEL_48:
                  v13 = sub_2771080();
LABEL_49:
                  v53 = v13;
                  v13 = sub_2771220(a1: v14, a2: v15, a3: (unsigned int)v17, a4: v17, a5: (unsigned int)v7);
LABEL_50:
                  v49 = v7;
                  v48 = v21;
                  v47 = v20;
                  v53 = v13;
                  sub_2770780();
LABEL_51:
                  sub_2771080();
                }
              }
              if ( *(int *)(v10 + 16) <= 0 )
                sub_277F280();
              return 1;
            }
            if ( *(int *)(v10 + 16) <= 0 )
              v13 = sub_277F280();
          }
          else
          {
            v22 = v17 + 1;
            v16[3] = v17 + 1;
            if ( (unsigned int)v7 <= (unsigned int)v17 )
              goto LABEL_49;
            v16[2] = *(_DWORD *)(v18 + 4 * v17 + 12);
            if ( (*v16 & 2) != 0 )
            {
              v15 = (unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL;
              v14 = ((unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)(((unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL)
                            + (((unsigned __int64)v16 - v14) >> 9)
                            + 0x38) != 0 )
                *(_BYTE *)(((unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)v16 - v14) >> 9) + 0x38) = 0;
            }
            if ( *(int *)(v10 + 16) <= 0 )
              v13 = sub_277F280();
            v17 = v22;
          }
        }
      }
    }
    if ( *(int *)(v10 + 16) <= 0 )
    {
      v53 = v13;
      sub_277F280(a1: v14, a2: v15, a3: v16);
    }
    return 0;
  }
  v38 = *(_QWORD *)(v10 + 40);
  if ( (unsigned __int64)(v38 + 48) > *(_QWORD *)(v10 + 32) )
  {
    v38 = sub_1EAA920(a1, a2, a3: 34101256);
  }
  else
  {
    *(_QWORD *)(v10 + 40) = v38 + 48;
    *(_DWORD *)v38 = 34101256;
    *(_DWORD *)(v38 + 4) = 0;
    *(_QWORD *)(v38 + 8) = 0;
    *(_QWORD *)(v38 + 16) = 0;
    *(_QWORD *)(v38 + 24) = 0;
    *(_QWORD *)(v38 + 32) = 0;
    *(_QWORD *)(v38 + 40) = 0;
  }
  *(_DWORD *)(v38 + 20) = 46923644;
  *(_DWORD *)(v38 + 16) = v9[93585974];
  *(_DWORD *)(v38 + 12) = (unsigned __int64)(v38 - (_QWORD)v9) >> 3;
  v50 = v38;
  sub_503B9A0(a1, a2, a3: v38, a4, a5: 0);
  v42 = v50;
  goto LABEL_46;
}
