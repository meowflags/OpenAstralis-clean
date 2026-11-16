// sub_18277B2E0
// rva 0x0277b2e0  size 252  section .text  group text
// window base 0x18277b2e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277B2E0(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __m128 v24; // xmm6
  __m128 v25; // xmm7
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  __int64 v29; // rdi
  __int64 v30; // rsi
  int v31; // r8d
  int v32; // r9d
  __int64 result; // rax
  int v34; // edx
  int v35; // ecx
  int v36; // edi
  int v37; // esi
  int v38; // r8d
  int v39; // r9d
  int v40; // [rsp+0h] [rbp-38h] BYREF
  __int64 v41; // [rsp+8h] [rbp-30h]
  __int64 v42; // [rsp+10h] [rbp-28h]
  int v43; // [rsp+18h] [rbp-20h]
  __int64 v44; // [rsp+20h] [rbp-18h]
  __int64 v45; // [rsp+28h] [rbp-10h]
  __int64 v46; // [rsp+30h] [rbp-8h]

  v46 = a5;
  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v12 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18277B3E0(a1: v36, a2: v37, a3: v34, a4: v35, a5: v38, a6: v39, a7);
  }
  else
  {
    v45 = sub_18277AE40(a1, a2, a3, a4, a5: 0, a6, a7: v40, a8: v41, a9: a3, a10: v43, a11: v44, a12: v45);
    v26 = sub_18277AFA0(
            a1: v14,
            a2: v15,
            a3: v42,
            a4: v13,
            a5: v16,
            a6: v17,
            a7: v18,
            a8: v19,
            a9: v20,
            a10: v21,
            a11: v22,
            a12: v23,
            a13: v24,
            a14: v25);
    if ( v26 == v12 )
    {
      return sub_18277B34F(a1: v29, a2: v30, a3: v27, a4: v28, a5: v31, a6: v32, a7, a8, a9, a10, a11, a12);
    }
    else if ( v45 != 0 )
    {
      v44 = v26;
      result = MEMORY[0x181EF0420](a1: v29, a2: v30, a3: v26, a4: v45, a5: v45, a6: 0);
      if ( *(int *)(v12 + 16) <= 0 )
        JUMPOUT(0x18277B3BELL);
    }
    else
    {
      return sub_18277B391(a1: v29, a2: v30, a3: v27, a4: 0, a5: v31, a6: v32, a7, a8, a9, a10, a11);
    }
  }
  return result;
}
