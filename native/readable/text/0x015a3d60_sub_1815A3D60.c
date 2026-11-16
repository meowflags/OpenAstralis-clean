// sub_15A3D60
// rva 0x015a3d60  size 1022  section .text  group text
// window base 0x1815a3d60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A3D60(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  unsigned int v7; // ebx
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
  _DWORD *v20; // r8
  unsigned int v21; // r8d
  unsigned __int64 v22; // r10
  __int64 v24; // rbp
  void (__fastcall *v25)(unsigned __int64, _DWORD *, _DWORD *); // rcx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // [rsp+0h] [rbp-48h] BYREF
  __int64 v37; // [rsp+10h] [rbp-38h]
  _DWORD *v38; // [rsp+18h] [rbp-30h]
  unsigned __int64 v39; // [rsp+20h] [rbp-28h]
  __int64 v40; // [rsp+28h] [rbp-20h]
  unsigned int *v41; // [rsp+30h] [rbp-18h]
  _DWORD *v42; // [rsp+38h] [rbp-10h]
  signed int v43; // [rsp+44h] [rbp-4h]

  v42 = a5;
  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v10 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_37;
  }
  v41 = a3;
  if ( a5 == v9 )
  {
LABEL_37:
    v30 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v30 + 48) > *(_QWORD *)(v10 + 32) )
    {
      v30 = sub_1EAA920(a1, a2, a3: 34101256);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v30 + 48;
      *(_DWORD *)v30 = 34101256;
      *(_DWORD *)(v30 + 4) = 0;
      *(_QWORD *)(v30 + 8) = 0;
      *(_QWORD *)(v30 + 16) = 0;
      *(_QWORD *)(v30 + 24) = 0;
      *(_QWORD *)(v30 + 32) = 0;
      *(_QWORD *)(v30 + 40) = 0;
    }
    *(_DWORD *)(v30 + 20) = 46923644;
    *(_DWORD *)(v30 + 16) = v9[93585974];
    *(_DWORD *)(v30 + 12) = (unsigned __int64)(v30 - (_QWORD)v9) >> 3;
    v40 = v30;
    sub_503B9A0(a1, a2, a3: v30, a4, a5: 0);
    v34 = v40;
    goto LABEL_40;
  }
  v11 = a3[1];
  if ( (_DWORD)v11 == 0 )
    goto LABEL_41;
  v12 = (unsigned int)v9[2 * v11 + 3];
  v40 = (__int64)&v9[2 * v12];
  if ( (_DWORD)v12 == 0 )
    goto LABEL_42;
  v43 = v9[2 * v12 + 2];
  v13 = sub_15A45A0();
  if ( v13 > v43 )
  {
    v16 = v41;
  }
  else
  {
    v16 = v41;
    v17 = v41[3];
    if ( (int)v17 >= 0 )
    {
      v7 = v43;
      v18 = v40;
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
            v22 = ((unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)(((unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)v16 - v22) >> 9) + 0x38) != 0 )
              *(_BYTE *)(((unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)v16 - v22) >> 9) + 0x38) = 0;
          }
          v20 = &v9[2 * v9[2 * v19 + 5]];
          v14 = (unsigned __int64)&v9[2 * v15];
          if ( (_DWORD)v15 != 0 )
          {
            v7 = (unsigned int)v42;
            if ( (unsigned __int16)v9[2 * v9[2 * (*v42 >> 3) + 5]
                                    + 3
                                    + (v9[2 * (*v42 >> 3) + 11] & (0x636u >> HIBYTE(v9[2 * (*v42 >> 3) + 11])))] != 1590 )
              goto LABEL_44;
            v39 = (unsigned __int64)&v9[2 * v15];
            v43 = v13;
            v24 = *v42 >> 3;
            v25 = (void (__fastcall *)(unsigned __int64, _DWORD *, _DWORD *))(v8
                                                                            + *(_QWORD *)((char *)&v9[2 * v24]
                                                                                        + HIWORD(v9[2 * v9[2 * v24 + 5] + 3 + (v9[2 * v24 + 11] & (0x636u >> HIBYTE(v9[2 * v24 + 11])))])));
            v38 = v20;
            v25(a1: v14, a2: v20, a3: v42);
            v29 = v41[1];
            if ( (_DWORD)v29 == 0 )
              goto LABEL_45;
            if ( v9[2 * v29 + 11] != v41[6] )
            {
              while ( 1 )
              {
                v35 = *(_QWORD *)(v10 + 40);
                if ( (unsigned __int64)(v35 + 40) > *(_QWORD *)(v10 + 32) )
                {
                  v35 = sub_1EAA920(a1: v27, a2: v28, a3: 34449872);
                }
                else
                {
                  *(_QWORD *)(v10 + 40) = v35 + 40;
                  *(_DWORD *)v35 = 34449872;
                  *(_DWORD *)(v35 + 4) = 0;
                  *(_QWORD *)(v35 + 8) = 0;
                  *(_QWORD *)(v35 + 16) = 0;
                  *(_QWORD *)(v35 + 24) = 0;
                  *(_QWORD *)(v35 + 32) = 0;
                }
                *(_DWORD *)(v35 + 20) = 46923644;
                *(_DWORD *)(v35 + 16) = v9[93585974];
                *(_DWORD *)(v35 + 12) = (unsigned __int64)(v35 - (_QWORD)v9) >> 3;
                v37 = v35;
                sub_503B9A0(a1: v27, a2: v28, a3: v35, a4: v26, a5: 0);
                v34 = v37;
LABEL_40:
                sub_2769900(a1: v32, a2: v33, a3: v34, a4: v31, a5: &a7);
LABEL_41:
                sub_2771080();
LABEL_42:
                v13 = sub_2771080();
LABEL_43:
                v43 = v13;
                v13 = sub_2771220(a1: v14, a2: v15, a3: (unsigned int)v17, a4: v17, a5: v7);
LABEL_44:
                v39 = v14;
                v38 = v20;
                v43 = v13;
                sub_2770780();
LABEL_45:
                sub_2771080();
              }
            }
            if ( *(int *)(v10 + 16) <= 0 )
              sub_277F280();
            return 1;
          }
          if ( *(int *)(v10 + 16) <= 0 )
            v13 = sub_277F280(a1: v14);
        }
        else
        {
          v21 = v17 + 1;
          v16[3] = v17 + 1;
          if ( v7 <= (unsigned int)v17 )
            goto LABEL_43;
          v16[2] = *(_DWORD *)(v18 + 4 * v17 + 12);
          if ( (*v16 & 2) != 0 )
          {
            v15 = (unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL;
            v14 = ((unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)(((unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)v16 - v14) >> 9) + 0x38) != 0 )
              *(_BYTE *)(((unsigned __int64)v16 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)v16 - v14) >> 9) + 0x38) = 0;
          }
          if ( *(int *)(v10 + 16) <= 0 )
            v13 = sub_277F280();
          v17 = v21;
        }
      }
    }
  }
  if ( *(int *)(v10 + 16) <= 0 )
  {
    v43 = v13;
    sub_277F280(a1: v14, a2: v15, a3: v16);
  }
  return 0;
}
