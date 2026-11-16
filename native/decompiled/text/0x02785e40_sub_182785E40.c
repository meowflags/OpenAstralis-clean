// sub_182785E40
// rva 0x02785e40  size 615  section .text  group text
// window base 0x182785e40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182785E40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm0
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  __m128 v30; // xmm3
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  __m128 v33; // xmm6
  __m128 v34; // xmm7
  unsigned int v35; // eax
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 i; // r8
  _DWORD *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // r9
  __m128 v47; // xmm0
  __m128 v48; // xmm1
  __m128 v49; // xmm2
  __m128 v50; // xmm3
  __m128 v51; // xmm4
  __m128 v52; // xmm5
  __m128 v53; // xmm6
  __m128 v54; // xmm7
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  char v58; // [rsp+0h] [rbp-48h] BYREF
  __int64 v59; // [rsp+10h] [rbp-38h]
  _DWORD *v60; // [rsp+18h] [rbp-30h]
  __int64 v61; // [rsp+20h] [rbp-28h]
  __int64 v62; // [rsp+30h] [rbp-18h]
  unsigned int v63; // [rsp+38h] [rbp-10h]
  unsigned int v64; // [rsp+3Ch] [rbp-Ch]
  __int64 v65; // [rsp+40h] [rbp-8h]

  v62 = a3;
  v65 = a5;
  if ( (unsigned __int64)&v58 <= *(_QWORD *)(v15 + 8) )
  {
    *(double *)v27.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_15;
  }
  v16 = sub_18278B160(a1, a2, a3: a5);
  v64 = v16;
  if ( v16 != 0 )
  {
    v63 = sub_18278ADC0(a1: v16, a2: 0, a3: 0, a4: 0, a5: 0, a6: v65);
    sub_182785CE0(a1: v18, a2: v19, a3: v63, a4: v17, a5: v20, a6: v21, a7: v58);
    v35 = v63;
    if ( (v63 & 0x80000000) == 0 )
    {
      v36 = *(_QWORD *)(v15 + 40);
      v37 = (2LL * v63 + 19) & 0x3FFFFFFF8LL;
      if ( v37 >= 0x20000 || v36 + v37 > *(_QWORD *)(v15 + 32) )
        JUMPOUT(0x18278600CLL);
      *(_QWORD *)(v15 + 40) = v36 + v37;
      *(_QWORD *)v36 = 34089376;
      *(_DWORD *)(v36 + 8) = v35;
      *(_DWORD *)(v36 + 12) = 0;
      if ( v37 - 16 >= 0x800 )
        JUMPOUT(0x182786034LL);
      for ( i = 16; v37 > i; i += 8LL )
        *(_QWORD *)(v36 + i) = 0;
      return sub_182785F4A(a1: v23, a2: v24, a3: v36, a4: v37, a5: i, a6: v26, a7, a8, a9, a10, a11, a12, a13, a14);
    }
LABEL_15:
    v59 = sub_182770E80(
            a1: v23,
            a2: v24,
            a3: v63,
            a4: v22,
            a5: v25,
            a6: v26,
            a7: v27,
            a8: v28,
            a9: v29,
            a10: v30,
            a11: v31,
            a12: v32,
            a13: v33,
            a14: v34,
            a15: v58);
    MEMORY[0x18503AEA0](a1: v56, a2: v57, a3: v60, a4: v55, a5: v59);
    while ( 1 )
    {
      sub_182769900(
        a1: v44,
        a2: v45,
        a3: v60,
        a4: v43,
        a5: (__int64)&a7,
        a6: v46,
        a7: v47,
        a8: v48,
        a9: v49,
        a10: v50,
        a11: v51,
        a12: v52,
        a13: v53,
        a14: v54);
      v60 = v40;
      *(double *)v47.m128_u64 = MEMORY[0x181EBBCC0](a1: v41, a2: v42, a3: v61);
    }
  }
  if ( *(int *)(v15 + 16) <= 0 )
    JUMPOUT(0x18278604ALL);
  return v14 + 373281248;
}
