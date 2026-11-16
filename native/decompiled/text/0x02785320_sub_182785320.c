// sub_182785320
// rva 0x02785320  size 102  section .text  group text
// window base 0x182785320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182785320(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // r8
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 (__fastcall *v22)(__int64, __int64, __int64, __int64, __int64, __int64); // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 (__fastcall *v31)(__int64, __int64, __int64, __int64, __int64, __int64); // r10
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  int v41; // edx
  int v42; // ecx
  int v43; // edi
  int v44; // esi
  int v45; // r8d
  int v46; // r9d
  _BYTE v47[40]; // [rsp-28h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+0h] [rbp-78h]
  __int64 v49; // [rsp+8h] [rbp-70h]
  char v50; // [rsp+10h] [rbp-68h] BYREF
  void *v51; // [rsp+18h] [rbp-60h]
  _BYTE *v52; // [rsp+20h] [rbp-58h]
  __int64 v53; // [rsp+28h] [rbp-50h]
  __int64 v54; // [rsp+38h] [rbp-40h]
  __int64 v55; // [rsp+40h] [rbp-38h]
  __int64 (__fastcall *v56)(__int64, __int64, __int64, __int64, __int64, __int64); // [rsp+48h] [rbp-30h]
  __int64 v57; // [rsp+50h] [rbp-28h]
  __int64 v58; // [rsp+58h] [rbp-20h]
  char v59; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v60; // [rsp+70h] [rbp-8h]
  int v61; // [rsp+74h] [rbp-4h]

  if ( (unsigned __int64)&v59 <= *(_QWORD *)(v16 + 8) )
  {
    v61 = a3;
    *(double *)a5.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_7;
  }
  v17 = (unsigned int)(a3 + 1);
  if ( __OFADD__(1, (_DWORD)a3) )
  {
LABEL_7:
    v61 = a3;
    sub_182770920(
      a1,
      a2,
      a3,
      a4,
      a5: v17,
      a6: a14,
      a7: a5,
      a8: a6,
      a9: a7,
      a10: a8,
      a11: a9,
      a12: a10,
      a13: a11,
      a14: a12,
      a15: v59);
    goto LABEL_8;
  }
  if ( is_mul_ok(8u, v17) )
  {
    v61 = a3;
    v60 = 8 * v17;
    result = MEMORY[0x182084FE0](a1, a2, a3: (unsigned int)(8 * v17), a4: v15 + 376669488, a5: v15 + 376669488);
    if ( *(int *)(v16 + 16) <= 0 )
      return sub_18277F280(a1: v20, a2: v21, a3: v19, a4: v60);
    return result;
  }
LABEL_8:
  sub_182770920(
    a1,
    a2,
    a3,
    a4,
    a5: v17,
    a6: a14,
    a7: a5,
    a8: a6,
    a9: a7,
    a10: a8,
    a11: a9,
    a12: a10,
    a13: a11,
    a14: a12,
    a15: v59);
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
  if ( (unsigned __int64)v47 <= *(_QWORD *)(v16 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_1827854C0(a1: v43, a2: v44, a3: v41, a4: v42, a5: v45, a6: v46, a7: a15);
  }
  else
  {
    v58 = v24;
    v57 = v26;
    v56 = v22;
    v49 = v27;
    v48 = v15 + 376358856;
    v28 = MEMORY[0x181EBA520](a1: v24, a2: v25, a3: v15 + 376358856, a4: v23, a5: v27);
    v51 = nullptr;
    v52 = nullptr;
    v53 = *(_QWORD *)(v16 + 56);
    *(_QWORD *)(v16 + 56) = &v50;
    v29 = v58;
    v30 = v57;
    v55 = v28;
    v31 = v56;
    v51 = &loc_182785429;
    v52 = v47;
    *(_DWORD *)(v16 + 20) = 3;
    v54 = v31(a1: v32, a2: v33, a3: v28, a4: v16, a5: v29, a6: v30);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v16 + 20), 3, 1) == 3 )
      *(_QWORD *)(v16 + 56) = *(_QWORD *)(*(_QWORD *)(v16 + 56) + 24LL);
    else
      sub_18277F4A0(a1: v35, a2: v36, a3: 1, a4: v34, a5: 1u);
    MEMORY[0x181EBB1E0](a1: v35, a2: v36, a3: v48, a4: v34, a5: v55);
    if ( *(int *)(v16 + 16) <= 0 )
      sub_18277F280(a1: v39, a2: v40, a3: v37, a4: v38);
    return v54;
  }
}
