// sub_2787600
// rva 0x02787600  size 267  section .text  group text
// window base 0x182787600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2787600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int (__fastcall *v11)(__int64, __int64, __int64, __int64); // r10
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __m128 v24; // xmm0
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r9
  __m128 v29; // xmm1
  __m128 v30; // xmm2
  __m128 v31; // xmm3
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  __m128 v34; // xmm6
  __m128 v35; // xmm7
  int v36; // edx
  int v37; // ecx
  int v38; // edi
  int v39; // esi
  int v40; // r8d
  int v41; // r9d
  _BYTE v42[32]; // [rsp+0h] [rbp-68h] BYREF
  _DWORD *v43; // [rsp+20h] [rbp-48h]
  __int64 v44; // [rsp+28h] [rbp-40h]
  __int64 v45; // [rsp+30h] [rbp-38h]
  char v46; // [rsp+38h] [rbp-30h] BYREF
  void *v47; // [rsp+40h] [rbp-28h]
  _BYTE *v48; // [rsp+48h] [rbp-20h]
  __int64 v49; // [rsp+50h] [rbp-18h]
  int v50; // [rsp+64h] [rbp-4h]

  v45 = a3;
  if ( (unsigned __int64)v42 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
LABEL_10:
    v43 = (_DWORD *)sub_28C1C40(a1: v15, a2: v16, a3: v7 + 367618984);
    *(double *)v24.m128_u64 = sub_1EB8320(a1: v22, a2: v23, a3: v44);
    sub_2769900(
      a1: v26,
      a2: v27,
      a3: v43,
      a4: v25,
      a5: (__int64)&a7,
      a6: v28,
      a7: v24,
      a8: v29,
      a9: v30,
      a10: v31,
      a11: v32,
      a12: v33,
      a13: v34,
      a14: v35);
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
    return sub_2787720(a1: v38, a2: v39, a3: v36, a4: v37, a5: v40, a6: v41, a7);
  }
  v44 = v7 + 376614544;
  sub_1EB8140(a1, a2, a3: v7 + 376614544);
  v9 = v45;
  v10 = *(_QWORD *)(v45 + 8);
  v47 = nullptr;
  v48 = nullptr;
  v49 = *(_QWORD *)(v8 + 56);
  *(_QWORD *)(v8 + 56) = &v46;
  v11 = (unsigned int (__fastcall *)(__int64, __int64, __int64, __int64))MEMORY[0x10e44bf0]/* 0x10e44bf0 */;
  v47 = &loc_182787664;
  v48 = v42;
  *(_DWORD *)(v8 + 20) = 3;
  v14 = v11(a1: v12, a2: v13, a3: v9, a4: v10);
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v8 + 20), 3, 1) == 3 )
  {
    *(_QWORD *)(v8 + 56) = *(_QWORD *)(*(_QWORD *)(v8 + 56) + 24LL);
  }
  else
  {
    v50 = v14;
    sub_277F4A0(a1: v15, a2: v16, a3: 1, a4: v14, a5: 1u);
    LODWORD(v14) = v50;
  }
  if ( (_DWORD)v14 == 0 )
    goto LABEL_10;
  v50 = v14;
  result = sub_1EB8320(a1: v15, a2: v16, a3: v44);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280(a1: v20, a2: v21, a3: v18, a4: v19);
  return result;
}
