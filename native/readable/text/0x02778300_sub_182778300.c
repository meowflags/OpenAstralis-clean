// sub_2778300
// rva 0x02778300  size 94  section .text  group text
// window base 0x182778300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_2778300(int a1, int a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  _DWORD *result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r9
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __m128 v20; // xmm6
  __m128 v21; // xmm7
  int v22; // edx
  int v23; // ecx
  int v24; // edi
  int v25; // esi
  int v26; // r8d
  int v27; // r9d
  char v28; // [rsp+0h] [rbp-18h] BYREF
  __int64 v29; // [rsp+8h] [rbp-10h]
  int v30; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v8 + 8) )
  {
    v30 = a5;
    v29 = a3;
    result = (_DWORD *)sub_1EB84E0();
    goto LABEL_6;
  }
  v29 = a3;
  v30 = a5;
  result = (_DWORD *)sub_2778360(a1, a2, a3, a4: a5, a5, a6, a7: v28);
  if ( result != v7 )
  {
LABEL_6:
    sub_2769900(
      a1: v11,
      a2: v12,
      a3: result,
      a4: v29,
      a5: (__int64)&a7,
      a6: v13,
      a7: v14,
      a8: v15,
      a9: v16,
      a10: v17,
      a11: v18,
      a12: v19,
      a13: v20,
      a14: v21);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_2778360(a1: v24, a2: v25, a3: v22, a4: v23, a5: v26, a6: v27, a7);
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return (_DWORD *)sub_277F280(a1: v11, a2: v12, a3: v10);
  return result;
}
