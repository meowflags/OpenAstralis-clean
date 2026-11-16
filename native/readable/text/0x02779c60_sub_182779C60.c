// sub_2779C60
// rva 0x02779c60  size 486  section .text  group text
// window base 0x182779c60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2779C60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __m128 v22; // xmm6
  __m128 v23; // xmm7
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // xmm0
  __m128 v34; // xmm1
  __m128 v35; // xmm2
  __m128 v36; // xmm3
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  __m128 v39; // xmm6
  __m128 v40; // xmm7
  __int64 v41; // rcx
  char v42; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v43; // [rsp+14h] [rbp-24h]
  __int64 v44; // [rsp+18h] [rbp-20h]
  __int64 v45; // [rsp+20h] [rbp-18h]
  __int64 v46; // [rsp+28h] [rbp-10h]
  __int64 v47; // [rsp+30h] [rbp-8h]

  v46 = a3;
  if ( (unsigned __int64)&v42 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( *(int *)(v4 + 336) >= 1 )
  {
    result = *(_QWORD *)(v3 + 376178832);
    if ( result == 0 )
    {
LABEL_20:
      if ( *(int *)(v4 + 16) <= 0 )
        return sub_277F280(a1, a2, a3);
      return result;
    }
    v6 = *(unsigned int *)(result + 72);
    if ( (_DWORD)v6 == 0
      || (v7 = *(_DWORD *)(v3 + 8 * v6) >> 3, *(__int16 *)(v3 + 8 * v7 + 62) >= 3)
      && *(_DWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 8 * v7 + 16) + 20) == 70129 )
    {
LABEL_8:
      a3 = *(_QWORD *)(result + 256);
      while ( 1 )
      {
        result = v46;
        if ( a3 == 0 )
          goto LABEL_20;
        v24 = *(unsigned int *)(a3 + 72);
        v25 = v3 + 8 * v24;
        if ( (_DWORD)v24 != 0 )
        {
          v26 = *(_DWORD *)(v3 + 8 * v24) >> 3;
          if ( *(__int16 *)(v3 + 8 * v26 + 62) >= 3
            && *(_DWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 8 * v26 + 16) + 20) == 70129 )
          {
            v45 = v25;
          }
          else
          {
            v47 = a3;
            v27 = *(unsigned int *)(v46 + 24);
            v45 = v25;
            v44 = v3 + 8 * v27;
            v43 = v27;
            v28 = sub_1EF00C0(a1, a2, a3: v25);
            v41 = v43;
            if ( v43 == 0 )
              goto LABEL_28;
            sub_586AB00(a1: v29, a2: v30, a3: v44, a4: v43, a5: v45, a6: v28);
            a3 = v47;
          }
        }
        else
        {
          v45 = v3 + 8 * v24;
        }
        if ( *(int *)(v4 + 16) <= 0 )
          a3 = sub_277F280(a1, a2, a3);
        else
          a3 = *(_QWORD *)(a3 + 256);
      }
    }
    v47 = *(_QWORD *)(v3 + 376178832);
    v8 = *(unsigned int *)(a3 + 24);
    v45 = v3 + 8 * v6;
    v44 = v3 + 8 * v8;
    v43 = v8;
    v9 = sub_1EF00C0(a1, a2, a3: v45);
    if ( v43 != 0 )
    {
      sub_586AB00(a1: v12, a2: v13, a3: v44, a4: v11, a5: v45, a6: v9);
      result = v47;
      goto LABEL_8;
    }
LABEL_27:
    sub_2771080(
      a1: v12,
      a2: v13,
      a3: v10,
      a4: v45,
      a5: v14,
      a6: v15,
      a7: v16,
      a8: v17,
      a9: v18,
      a10: v19,
      a11: v20,
      a12: v21,
      a13: v22,
      a14: v23,
      a15: v42);
LABEL_28:
    sub_2771080(
      a1: v29,
      a2: v30,
      a3: v47,
      a4: v41,
      a5: v31,
      a6: v32,
      a7: v33,
      a8: v34,
      a9: v35,
      a10: v36,
      a11: v37,
      a12: v38,
      a13: v39,
      a14: v40,
      a15: v42);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2779E60();
  }
  *(double *)v16.m128_u64 = sub_28C1C40(a1, a2, a3: v3 + 368616744);
  goto LABEL_27;
}
