// sub_505BB20
// rva 0x0505bb20  size 554  section .text  group text
// window base 0x18505bb20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_505BB20(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rbx
  _DWORD *v20; // rsi
  __int64 v21; // rdi
  int v22; // ebp
  __int64 (__fastcall *v23)(__int64, _DWORD *, _DWORD *); // rcx
  int v24; // eax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v31; // [rsp+10h] [rbp-18h]
  _DWORD *v32; // [rsp+18h] [rbp-10h]
  int v33; // [rsp+24h] [rbp-4h]

  v32 = a3;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*a3 >> 3) + 28]))(
              a1,
              a2,
              a3,
              a4: a3) != 0 )
  {
    v13 = (unsigned int)v32[1];
    if ( (_DWORD)v13 == 0 )
      goto LABEL_14;
    v14 = v8[2 * v13] >> 3;
    if ( (unsigned __int16)v8[2 * v8[2 * v14 + 5] + 3 + (v8[2 * v14 + 11] & (0x16D4u >> HIBYTE(v8[2 * v14 + 11])))] != 5844 )
      goto LABEL_15;
    v15 = v8[2 * v13] >> 3;
    v16 = v8[2 * v15 + 11] & (0x16D4u >> HIBYTE(v8[2 * v15 + 11]));
    v17 = HIWORD(v8[2 * (unsigned int)v8[2 * v15 + 5] + 3 + v16]);
    v18 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD))(v7
                                                                                         + *(_QWORD *)((char *)&v8[2 * v15 + 4] + v17)))(
                      a1: v11,
                      a2: v16,
                      a3: &v8[2 * v13],
                      a4: v17,
                      a5: (unsigned int)v32[2]);
    if ( v18 == v8 )
      goto LABEL_16;
    if ( (unsigned __int16)v8[2 * v8[2 * (*v18 >> 3) + 5]
                            + 3
                            + (v8[2 * (*v18 >> 3) + 11] & (0x59Au >> HIBYTE(v8[2 * (*v18 >> 3) + 11])))] != 1434 )
    {
      while ( 1 )
      {
        sub_2770780();
LABEL_18:
        v26 = sub_1EAA920(a1: v11, a2: v12, a3: 34152072);
LABEL_13:
        *(_DWORD *)(v26 + 20) = 46923644;
        *(_DWORD *)(v26 + 16) = v8[93585974];
        *(_DWORD *)(v26 + 12) = (unsigned __int64)(v26 - (_QWORD)v8) >> 3;
        v31 = (_DWORD *)v26;
        sub_503B9A0(a1: v11, a2: v12, a3: (unsigned int *)v26, a4: v10, a5: 0);
        sub_2769900(a1: v28, a2: v29, a3: v31, a4: v27, a5: &a7);
LABEL_14:
        sub_2771080();
LABEL_15:
        sub_2770780();
LABEL_16:
        sub_2771080();
      }
    }
    v19 = *v18 >> 3;
    v20 = &v8[2 * v8[2 * v19 + 5]];
    v21 = v8[2 * v19 + 11] & (0x59Au >> HIBYTE(v8[2 * v19 + 11]));
    v22 = v32[2];
    v23 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v7
                                                              + *(_QWORD *)((char *)&v8[2 * v19 + 6]
                                                                          + HIWORD(v20[v21 + 3])));
    v31 = v18;
    v33 = v22;
    v24 = v23(a1: v21, a2: v20, a3: v18);
    v32[2] = v33 + v24;
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return v31;
  }
  v26 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v26 + 40) > *(_QWORD *)(v9 + 32) )
    goto LABEL_18;
  *(_QWORD *)(v9 + 40) = v26 + 40;
  *(_DWORD *)v26 = 34152072;
  *(_DWORD *)(v26 + 4) = 0;
  *(_QWORD *)(v26 + 8) = 0;
  *(_QWORD *)(v26 + 16) = 0;
  *(_QWORD *)(v26 + 24) = 0;
  *(_QWORD *)(v26 + 32) = 0;
  goto LABEL_13;
}
