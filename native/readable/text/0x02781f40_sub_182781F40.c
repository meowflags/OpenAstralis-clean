// sub_2781F40
// rva 0x02781f40  size 408  section .text  group text
// window base 0x182781f40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2781F40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        int a8,
        int a9,
        __int64 a10)
{
  _DWORD *v10; // rbx
  _DWORD *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r9
  __m128 v19; // xmm0
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 result; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r9
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  __m128i v31; // xmm5
  __m128i v32; // xmm6
  __m128i v33; // xmm7
  _DWORD *v34; // rax
  _DWORD *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // rax
  _DWORD *v39; // rax
  __int64 v40; // rdx
  char v41; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v42; // [rsp+8h] [rbp-30h]
  _DWORD *v43; // [rsp+10h] [rbp-28h]
  __int64 v44; // [rsp+18h] [rbp-20h]
  __int64 v45; // [rsp+20h] [rbp-18h]
  __int64 v46; // [rsp+28h] [rbp-10h]
  __int64 v47; // [rsp+30h] [rbp-8h]

  v45 = a5;
  if ( (unsigned __int64)&v41 <= *(_QWORD *)(v12 + 8) )
  {
    v44 = a3;
    sub_1EB83C0();
  }
  else if ( (_DWORD *)a5 != v11 )
  {
    v13 = *(_QWORD *)(a5 + 8);
    if ( v13 == 0 )
      return sub_18278201D(a1, a2, a3, a4, a5, a6, a7: a8, a8: a9, a9: a10);
    *(_QWORD *)(a5 + 8) = *(_QWORD *)v13;
    *(_QWORD *)v13 = 0;
    v14 = *(unsigned int *)(v13 + 16);
    v10 = &v11[2 * v14];
    if ( (_DWORD)v14 == 0 )
      goto LABEL_15;
    v44 = a3;
    v43 = &v11[2 * v14];
    v47 = v13;
    sub_27814A0(a1, a2, a3: v43, a4: v14, a5: v13, a6, a7: v41);
    v20 = v47;
    *(_QWORD *)(v47 + 8) = 0;
    *(_BYTE *)(v20 + 20) = 1;
    while ( 1 )
    {
      result = *(_QWORD *)(v45 + 8);
      if ( result == 0 )
        break;
      *(_QWORD *)(v45 + 8) = *(_QWORD *)result;
      *(_QWORD *)result = 0;
      v21 = *(unsigned int *)(result + 16);
      if ( (_DWORD)v21 == 0 )
      {
        v42 = &v11[2 * v21];
        v26 = sub_276E420(a1: v16, a2: v17, a3: v19);
        v35 = v39;
        v10 = v42;
        v36 = v40;
        goto LABEL_11;
      }
      v42 = &v11[2 * v21];
      v46 = result;
      sub_27814A0(a1: v16, a2: v17, a3: v42, a4: (__int64)v42, a5: result, a6: v18, a7: v41);
      v15 = v46;
      *(_QWORD *)(v46 + 8) = 0;
      *(_BYTE *)(v15 + 20) = 1;
    }
    if ( *(int *)(v12 + 16) <= 0 )
      return sub_277F280(a1: v16, a2: v17, a3: v15, a4: v20);
    return result;
  }
  v44 = a3;
  sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v41);
LABEL_15:
  v44 = a3;
  v26 = sub_276E420(a1, a2, a3: a7);
  v47 = v37;
  v35 = v38;
  v36 = v47;
LABEL_11:
  while ( v10 != v11 )
  {
    *(_QWORD *)(v36 + 8) = 0;
    *(_BYTE *)(v36 + 20) = 1;
    v26 = sub_2769900(
            a1: v23,
            a2: v24,
            a3: v35,
            a4: (__int64)v35,
            a5: (__int64)&a8,
            a6: v25,
            a7: (__m128)v26.m128i_i128,
            a8: (__m128)v27.m128i_i128,
            a9: (__m128)v28.m128i_i128,
            a10: (__m128)v29.m128i_i128,
            a11: (__m128)v30.m128i_i128,
            a12: (__m128)v31.m128i_i128,
            a13: (__m128)v32.m128i_i128,
            a14: (__m128)v33.m128i_i128);
    v35 = v34;
    v10 = v42;
    v36 = v46;
  }
  sub_276EFE0(a1: v23, a2: v24, a3: v44, a4: (_DWORD)v35, a5: v45, a6: v25, a7: v41);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_27820E0();
}
