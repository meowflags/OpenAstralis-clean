// sub_15A6CA0
// rva 0x015a6ca0  size 962  section .text  group text
// window base 0x1815a6ca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A6CA0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  _DWORD *i; // rsi
  __int64 v12; // rax
  _DWORD *v13; // rcx
  int v14; // ebx
  __int64 v15; // rbp
  __int64 (__fastcall *v16)(_QWORD, _DWORD *, _DWORD *); // rdi
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, _DWORD *, _DWORD *, _QWORD, __int64, _DWORD *); // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  _DWORD *v24; // r8
  unsigned __int64 v25; // rax
  __int64 result; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  char v33; // [rsp+0h] [rbp-58h] BYREF
  __int64 v34; // [rsp+10h] [rbp-48h]
  _DWORD *v35; // [rsp+18h] [rbp-40h]
  __int64 v36; // [rsp+20h] [rbp-38h]
  _DWORD *v37; // [rsp+28h] [rbp-30h]
  __int64 v38; // [rsp+30h] [rbp-28h]
  __int64 v39; // [rsp+38h] [rbp-20h]
  _DWORD *v40; // [rsp+40h] [rbp-18h]
  unsigned int v41; // [rsp+4Ch] [rbp-Ch]
  unsigned int v42; // [rsp+50h] [rbp-8h]
  unsigned int v43; // [rsp+54h] [rbp-4h]

  v40 = (_DWORD *)a5;
  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_27;
  }
  v39 = a3;
  if ( (_DWORD *)a5 == v8 )
  {
LABEL_27:
    v27 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v27 + 48) > *(_QWORD *)(v9 + 32) )
      goto LABEL_37;
    *(_QWORD *)(v9 + 40) = v27 + 48;
    *(_DWORD *)v27 = 34101256;
    *(_DWORD *)(v27 + 4) = 0;
    *(_QWORD *)(v27 + 8) = 0;
    *(_QWORD *)(v27 + 16) = 0;
    *(_QWORD *)(v27 + 24) = 0;
    *(_QWORD *)(v27 + 32) = 0;
    *(_QWORD *)(v27 + 40) = 0;
LABEL_29:
    *(_DWORD *)(v27 + 20) = 46923644;
    *(_DWORD *)(v27 + 16) = v8[93585974];
    *(_DWORD *)(v27 + 12) = (unsigned __int64)(v27 - (_QWORD)v8) >> 3;
    v38 = v27;
    sub_503B9A0(a1, a2, a3: v27, a4, a5: 0);
    v31 = v38;
    goto LABEL_30;
  }
  v43 = *(_DWORD *)(a3 + 44);
  sub_15A4C20(a1, a2, a3, a4: a3, a5, a6, a7: v33);
  v12 = *(unsigned int *)(v39 + 12);
  v13 = &v8[2 * v12];
  v38 = (__int64)v13;
  if ( (_DWORD)v12 == 0 )
    goto LABEL_31;
  v14 = v8[2 * v12 + 2];
  v42 = v14;
  v15 = 0;
  while ( 1 )
  {
    v41 = v15;
    if ( v14 <= (int)v15 )
      break;
    if ( v14 <= (unsigned int)v15 )
      goto LABEL_32;
    for ( i = &v8[2 * v13[v15 + 3]]; ; i = &v8[2 * *(unsigned int *)(v23 + 24)] )
    {
      v37 = i;
      if ( i == v8 )
        break;
      v16 = (__int64 (__fastcall *)(_QWORD, _DWORD *, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*i >> 3) + 38]);
      v17 = v16(a1: v16, a2: i, a3: i);
      if ( (_DWORD *)v17 == v8 )
      {
        v36 = v17;
        v23 = (unsigned __int64)v37;
      }
      else
      {
        if ( v8 + 94153502 == (_DWORD *)v17 )
          v18 = (__int64)v8;
        else
          v18 = v17;
        if ( (unsigned __int16)v8[2 * v8[2 * (*v40 >> 3) + 5]
                                + 3
                                + (v8[2 * (*v40 >> 3) + 11] & (0x633u >> HIBYTE(v8[2 * (*v40 >> 3) + 11])))] != 1587 )
        {
          v36 = v17;
          sub_2770780(a1: v10, a2: v37);
LABEL_37:
          v27 = sub_1EAA920(a1, a2, a3: 34101256);
          goto LABEL_29;
        }
        v36 = v17;
        v19 = *v40 >> 3;
        v20 = v8[2 * v19 + 11] & (0x633u >> HIBYTE(v8[2 * v19 + 11]));
        v21 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *, _QWORD, __int64, _DWORD *))(v7
                                                                                             + *(_QWORD *)((char *)&v8[2 * v19 + 2] + HIWORD(v8[2 * (unsigned int)v8[2 * v19 + 5] + 3 + v20])));
        v22 = v21(a1: v20, a2: v37, a3: v40, a4: v21, a5: v18, a6: &v8[2 * v37[5]]);
        v23 = (unsigned __int64)v37;
        v37[5] = (unsigned __int64)(v22 - (_QWORD)v8) >> 3;
        if ( (*(_DWORD *)v23 & 2) != 0 )
        {
          v25 = (v23 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v25) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v25) >> 9) + 0x38) = 0;
        }
      }
      v24 = &v8[2 * *(unsigned int *)(v23 + 24)];
      if ( v43 != *(_DWORD *)(v39 + 44) )
      {
        while ( 1 )
        {
          v32 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v32 + 40) > *(_QWORD *)(v9 + 32) )
          {
            v35 = v24;
            v32 = sub_1EAA920(a1: v10, a2: v23, a3: 34449872);
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v32 + 40;
            *(_DWORD *)v32 = 34449872;
            *(_DWORD *)(v32 + 4) = 0;
            *(_QWORD *)(v32 + 8) = 0;
            *(_QWORD *)(v32 + 16) = 0;
            *(_QWORD *)(v32 + 24) = 0;
            *(_QWORD *)(v32 + 32) = 0;
            v35 = v24;
          }
          *(_DWORD *)(v32 + 20) = 46923644;
          *(_DWORD *)(v32 + 16) = v8[93585974];
          *(_DWORD *)(v32 + 12) = (unsigned __int64)(v32 - (_QWORD)v8) >> 3;
          v34 = v32;
          sub_503B9A0(a1: v10, a2: v23, a3: v32, a4: v32, a5: 0);
          v31 = v34;
LABEL_30:
          sub_2769900(a1: v29, a2: v30, a3: v31, a4: v28, a5: &a7);
LABEL_31:
          sub_2771080();
LABEL_32:
          sub_2771220(a1: v10, a2: i, a3: v41, a4: v13, a5: v42);
        }
      }
    }
    v15 = v41 + 1;
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280(a1: v10, a2: i, a3: v39);
    v14 = v42;
    v13 = (_DWORD *)v38;
  }
  result = v43;
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280(a1: v10, a2: i, a3: v39);
  return result;
}
