// sub_501B7A0
// rva 0x0501b7a0  size 461  section .text  group text
// window base 0x18501b7a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501B7A0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _DWORD *a5, int a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  char v26; // [rsp+0h] [rbp-28h] BYREF
  __int64 v27; // [rsp+8h] [rbp-20h]
  unsigned int *v28; // [rsp+10h] [rbp-18h]
  _DWORD *v29; // [rsp+18h] [rbp-10h]
  int v30; // [rsp+24h] [rbp-4h]

  v29 = a5;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_13;
  }
  v28 = a3;
  if ( a5 == v8 )
  {
LABEL_13:
    v22 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v22 + 48) > *(_QWORD *)(v9 + 32) )
      goto LABEL_17;
    *(_QWORD *)(v9 + 40) = v22 + 48;
    *(_DWORD *)v22 = 34101256;
    *(_DWORD *)(v22 + 4) = 0;
    *(_QWORD *)(v22 + 8) = 0;
    *(_QWORD *)(v22 + 16) = 0;
    *(_QWORD *)(v22 + 24) = 0;
    *(_QWORD *)(v22 + 32) = 0;
    *(_QWORD *)(v22 + 40) = 0;
    goto LABEL_15;
  }
  v10 = a3[2];
  if ( v10 < 0 || v10 >= (int)a3[3] )
  {
    if ( *(int *)(v9 + 16) <= 0 )
    {
      v30 = a3[2];
      sub_277F280();
    }
    return 0;
  }
  else
  {
    v27 = (__int64)&v8[2 * a3[1]];
    v30 = v10;
    sub_501CF00(a1, a2, a3: v10, a4: v27, a5: v27, a6, a7: v26);
    v14 = *(unsigned __int16 *)(v27 + 2 * v30 + 12);
    v15 = *v29 >> 3;
    v16 = &v8[2 * v8[2 * v15 + 5]];
    v17 = (unsigned __int16)v16[(v8[2 * v15 + 11] & (0x641u >> HIBYTE(v8[2 * v15 + 11]))) + 3];
    if ( (_DWORD)v17 != 1601 )
    {
      while ( 1 )
      {
        sub_2770780(a1: v12, a2: v13, a3: v16, a4: v17, a5: v14);
LABEL_17:
        v22 = sub_1EAA920(a1, a2, a3: 34101256);
LABEL_15:
        *(_DWORD *)(v22 + 20) = 46923644;
        *(_DWORD *)(v22 + 16) = v8[93585974];
        *(_DWORD *)(v22 + 12) = (unsigned __int64)(v22 - (_QWORD)v8) >> 3;
        v27 = v22;
        sub_503B9A0(a1, a2, a3: v22, a4, a5: 0);
        sub_2769900(a1: v24, a2: v25, a3: v27, a4: v23, a5: &a7);
      }
    }
    v18 = *v29 >> 3;
    v19 = &v8[2 * v8[2 * v18 + 5]];
    v20 = v8[2 * v18 + 11] & (0x641u >> HIBYTE(v8[2 * v18 + 11]));
    v21 = HIWORD(v19[v20 + 3]);
    ((void (__fastcall *)(__int64, _DWORD *, _DWORD *, __int64, __int64))(v7 + *(_QWORD *)((char *)&v8[2 * v18] + v21)))(
      a1: v20,
      a2: v19,
      a3: v29,
      a4: v21,
      a5: v14);
    ++v28[2];
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return 1;
  }
}
