// sub_15A5080
// rva 0x015a5080  size 898  section .text  group text
// window base 0x1815a5080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A5080(
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
  void (__fastcall *v21)(__int64, _DWORD *, _DWORD *, _QWORD, __int64, _DWORD *); // rcx
  _DWORD *v22; // rsi
  _DWORD *v23; // r8
  __int64 result; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  char v31; // [rsp+0h] [rbp-58h] BYREF
  __int64 v32; // [rsp+10h] [rbp-48h]
  _DWORD *v33; // [rsp+18h] [rbp-40h]
  __int64 v34; // [rsp+20h] [rbp-38h]
  _DWORD *v35; // [rsp+28h] [rbp-30h]
  __int64 v36; // [rsp+30h] [rbp-28h]
  __int64 v37; // [rsp+38h] [rbp-20h]
  _DWORD *v38; // [rsp+40h] [rbp-18h]
  unsigned int v39; // [rsp+4Ch] [rbp-Ch]
  unsigned int v40; // [rsp+50h] [rbp-8h]
  unsigned int v41; // [rsp+54h] [rbp-4h]

  v38 = (_DWORD *)a5;
  if ( (unsigned __int64)&v31 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_25;
  }
  v37 = a3;
  if ( (_DWORD *)a5 == v8 )
  {
LABEL_25:
    v25 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v25 + 48) > *(_QWORD *)(v9 + 32) )
      goto LABEL_35;
    *(_QWORD *)(v9 + 40) = v25 + 48;
    *(_DWORD *)v25 = 34101256;
    *(_DWORD *)(v25 + 4) = 0;
    *(_QWORD *)(v25 + 8) = 0;
    *(_QWORD *)(v25 + 16) = 0;
    *(_QWORD *)(v25 + 24) = 0;
    *(_QWORD *)(v25 + 32) = 0;
    *(_QWORD *)(v25 + 40) = 0;
LABEL_27:
    *(_DWORD *)(v25 + 20) = 46923644;
    *(_DWORD *)(v25 + 16) = v8[93585974];
    *(_DWORD *)(v25 + 12) = (unsigned __int64)(v25 - (_QWORD)v8) >> 3;
    v36 = v25;
    sub_503B9A0(a1, a2, a3: v25, a4, a5: 0);
    v29 = v36;
    goto LABEL_28;
  }
  v41 = *(_DWORD *)(a3 + 44);
  sub_15A4C20(a1, a2, a3, a4: a3, a5, a6, a7: v31);
  v12 = *(unsigned int *)(v37 + 12);
  v13 = &v8[2 * v12];
  v36 = (__int64)v13;
  if ( (_DWORD)v12 == 0 )
    goto LABEL_29;
  v14 = v8[2 * v12 + 2];
  v40 = v14;
  v15 = 0;
  while ( 1 )
  {
    v39 = v15;
    if ( v14 <= (int)v15 )
      break;
    if ( v14 <= (unsigned int)v15 )
      goto LABEL_30;
    for ( i = &v8[2 * v13[v15 + 3]]; ; i = &v8[2 * v35[6]] )
    {
      v35 = i;
      if ( i == v8 )
        break;
      v16 = (__int64 (__fastcall *)(_QWORD, _DWORD *, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*i >> 3) + 38]);
      v17 = v16(a1: v16, a2: i, a3: i);
      if ( (_DWORD *)v17 == v8 )
      {
        v34 = v17;
      }
      else
      {
        if ( v8 + 94153502 == (_DWORD *)v17 )
          v18 = (__int64)v8;
        else
          v18 = v17;
        if ( (unsigned __int16)v8[2 * v8[2 * (*v38 >> 3) + 5]
                                + 3
                                + (v8[2 * (*v38 >> 3) + 11] & (0x632u >> HIBYTE(v8[2 * (*v38 >> 3) + 11])))] != 1586 )
        {
          v34 = v17;
          sub_2770780(a1: v10, a2: v35);
LABEL_35:
          v25 = sub_1EAA920(a1, a2, a3: 34101256);
          goto LABEL_27;
        }
        v34 = v17;
        v19 = *v38 >> 3;
        v20 = v8[2 * v19 + 11] & (0x632u >> HIBYTE(v8[2 * v19 + 11]));
        v21 = (void (__fastcall *)(__int64, _DWORD *, _DWORD *, _QWORD, __int64, _DWORD *))(v7
                                                                                          + *(_QWORD *)((char *)&v8[2 * v19] + HIWORD(v8[2 * (unsigned int)v8[2 * v19 + 5] + 3 + v20])));
        v21(a1: v20, a2: v35, a3: v38, a4: v21, a5: v18, a6: &v8[2 * v35[5]]);
      }
      v22 = v35;
      v23 = &v8[2 * v35[6]];
      if ( v41 != *(_DWORD *)(v37 + 44) )
      {
        while ( 1 )
        {
          v30 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v30 + 40) > *(_QWORD *)(v9 + 32) )
          {
            v33 = v23;
            v30 = sub_1EAA920(a1: v10, a2: v22, a3: 34449872);
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v30 + 40;
            *(_DWORD *)v30 = 34449872;
            *(_DWORD *)(v30 + 4) = 0;
            *(_QWORD *)(v30 + 8) = 0;
            *(_QWORD *)(v30 + 16) = 0;
            *(_QWORD *)(v30 + 24) = 0;
            *(_QWORD *)(v30 + 32) = 0;
            v33 = v23;
          }
          *(_DWORD *)(v30 + 20) = 46923644;
          *(_DWORD *)(v30 + 16) = v8[93585974];
          *(_DWORD *)(v30 + 12) = (unsigned __int64)(v30 - (_QWORD)v8) >> 3;
          v32 = v30;
          sub_503B9A0(a1: v10, a2: v22, a3: v30, a4: v30, a5: 0);
          v29 = v32;
LABEL_28:
          sub_2769900(a1: v27, a2: v28, a3: v29, a4: v26, a5: &a7);
LABEL_29:
          sub_2771080();
LABEL_30:
          sub_2771220(a1: v10, a2: i, a3: v39, a4: v13, a5: v40);
        }
      }
    }
    v15 = v39 + 1;
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280(a1: v10, a2: i, a3: v37);
    v14 = v40;
    v13 = (_DWORD *)v36;
  }
  result = v41;
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280(a1: v10, a2: i, a3: v37);
  return result;
}
