// sub_27814A0
// rva 0x027814a0  size 405  section .text  group text
// window base 0x1827814a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_27814A0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r8
  __int64 (__fastcall *v16)(_DWORD *, __int64, _DWORD *, __int64, __int64); // rbp
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __m128 v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  _DWORD *v25; // rax
  _DWORD *v26; // rdx
  __m128 v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r9
  __m128 v32; // xmm1
  __m128 v33; // xmm2
  __m128 v34; // xmm3
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  __m128 v37; // xmm6
  __m128 v38; // xmm7
  double v39; // xmm0_8
  char v40; // [rsp+0h] [rbp-58h] BYREF
  __int64 v41; // [rsp+10h] [rbp-48h]
  _DWORD *v42; // [rsp+18h] [rbp-40h]
  __int64 v43; // [rsp+20h] [rbp-38h]
  unsigned int v44; // [rsp+2Ch] [rbp-2Ch]
  _DWORD *v45; // [rsp+30h] [rbp-28h]
  __int64 v46; // [rsp+38h] [rbp-20h]
  __int64 v47; // [rsp+40h] [rbp-18h]
  __int64 v48; // [rsp+48h] [rbp-10h]
  __int64 v49; // [rsp+50h] [rbp-8h]

  v45 = a3;
  v49 = a5;
  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v9 + 8) )
    goto LABEL_10;
  v44 = *a3 >> 3;
  if ( ((unsigned int (*)(void))(v7 + *(_QWORD *)(v8 + 8LL * v44 + 120)))() == 0 )
  {
    if ( v45[1] == 0 )
    {
      v25 = (_DWORD *)sub_276EFE0(a1: v11, a2: v12, a3: (_DWORD)v45, a4: v10, a5: v13, a6: v14, a7: v40);
      v26 = v42;
      v42 = v25;
      *(double *)v27.m128_u64 = sub_2782D80(a1: v47, a2: 0, a3: v26, a4: v48, a5: v43, a6: v48);
      *(_QWORD *)&v39 = sub_2769900(
                          a1: v29,
                          a2: v30,
                          a3: v42,
                          a4: v28,
                          a5: (__int64)&a7,
                          a6: v31,
                          a7: v27,
                          a8: v32,
                          a9: v33,
                          a10: v34,
                          a11: v35,
                          a12: v36,
                          a13: v37,
                          a14: v38).m128i_u64[0];
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
      sub_2781640(a1: v39);
      return;
    }
    if ( *(int *)(v9 + 16) > 0 )
      return;
LABEL_8:
    sub_277F280(a1: v11, a2: v12, a3: (__int64)v45, a4: v10);
    return;
  }
  v15 = *(unsigned int *)(v8 + 376351692);
  v48 = *(_QWORD *)(v8 + 376351696);
  v47 = *(_QWORD *)(v8 + 376351704);
  v16 = (__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * v44 + 112));
  v43 = v8 + 8 * v15;
  v42 = (_DWORD *)(v8 + 376656272);
  v46 = v16(a1: v45, a2: v8 + 376656272, a3: v45, a4: v48, a5: v49);
  *(double *)v20.m128_u64 = sub_2782D80(a1: v9, a2: 1, a3: v42, a4: v17, a5: v45, a6: v46);
  if ( v45[1] == 0 )
  {
    while ( 1 )
    {
      sub_276E420(a1: v18, a2: v19, a3: v20);
      v41 = v22;
      sub_28C1D00(a1: v23, a2: v24, a3: v22);
LABEL_10:
      *(double *)v20.m128_u64 = sub_1EB83C0();
    }
  }
  ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64, double))(v7 + *(_QWORD *)(v8 + 8LL * v44 + 160)))(
    a1: v18,
    a2: v19,
    a3: v45,
    a4: v45,
    a5: v49,
    a6: *(double *)v20.m128_u64);
  sub_2782D80(a1: v47, a2: 0, a3: v42, a4: v21, a5: v43, a6: v48);
  if ( *(int *)(v9 + 16) <= 0 )
    goto LABEL_8;
}
