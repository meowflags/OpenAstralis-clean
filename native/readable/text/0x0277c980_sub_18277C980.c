// sub_277C980
// rva 0x0277c980  size 309  section .text  group text
// window base 0x18277c980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277C980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // r8d
  int v19; // r9d
  int v20; // ecx
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // r9d
  int v24; // ecx
  int v25; // edi
  int v26; // esi
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rsi
  _DWORD *v37; // rax
  _DWORD *v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __m128 v41; // xmm0
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // r9
  __m128 v46; // xmm1
  __m128 v47; // xmm2
  __m128 v48; // xmm3
  __m128 v49; // xmm4
  __m128 v50; // xmm5
  __m128 v51; // xmm6
  __m128 v52; // xmm7
  double v53; // xmm0_8
  char v54; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v55; // [rsp+18h] [rbp-30h]
  __int64 v56; // [rsp+20h] [rbp-28h]
  __int64 v57; // [rsp+28h] [rbp-20h]
  __int64 v58; // [rsp+30h] [rbp-18h]
  int v59; // [rsp+38h] [rbp-10h]
  int v60; // [rsp+3Ch] [rbp-Ch]
  __int64 v61; // [rsp+40h] [rbp-8h]

  v57 = a3;
  v56 = a5;
  if ( (unsigned __int64)&v54 <= *(_QWORD *)(v8 + 8) )
  {
    v37 = (_DWORD *)sub_1EB83C0();
    v38 = v55;
    v55 = v37;
    *(double *)v41.m128_u64 = sub_1EB8320(a1: v39, a2: v40, a3: v38);
    *(_QWORD *)&v53 = sub_2769900(
                        a1: v43,
                        a2: v44,
                        a3: v55,
                        a4: v42,
                        a5: (__int64)&a7,
                        a6: v45,
                        a7: v41,
                        a8: v46,
                        a9: v47,
                        a10: v48,
                        a11: v49,
                        a12: v50,
                        a13: v51,
                        a14: v52).m128i_u64[0];
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
    return sub_277CAC0(a1: v53);
  }
  else
  {
    v55 = (_DWORD *)(v7 + 376614544);
    sub_1EB8140(a1, a2, a3: v7 + 376614544);
    v12 = sub_277B0C0(a1: v10, a2: v11, a3: v56, a4: v9, a5: 1);
    if ( (_DWORD)v12 != 0 )
      JUMPOUT(0x304EC59D6LL);
    v61 = v12;
    v60 = 0;
    v59 = 0;
    v14 = sub_2787840(a1: 0, a2: v13, a3: v7 + 376612728, a4: 0, a5: v56, a6: 0);
    if ( v14 != 0 )
    {
      v58 = v14;
      sub_2780A20(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7: v54);
      sub_277A180(a1: v21, a2: v22, a3: v58, a4: v20, a5: v56, a6: v23);
      sub_2780920(a1: v25, a2: v26, a3: v58, a4: v24, a5: v27, a6: v28, a7: v54);
      sub_1EB8320(a1: v29, a2: v30, a3: v55);
      if ( *(int *)(v8 + 16) <= 0 )
        sub_277F280(a1: v31, a2: v32, a3: v61);
      return 1;
    }
    else
    {
      sub_1EB8320(a1: v16, a2: v17, a3: v55);
      if ( *(int *)(v8 + 16) <= 0 )
        sub_277F280(a1: v35, a2: v36, a3: v34);
      return 0;
    }
  }
}
