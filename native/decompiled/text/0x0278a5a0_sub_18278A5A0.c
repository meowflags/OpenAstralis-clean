// sub_18278A5A0
// rva 0x0278a5a0  size 159  section .text  group text
// window base 0x18278a5a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18278A5A0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        unsigned __int64 a13,
        __int64 a14)
{
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // [rsp+0h] [rbp-68h]
  _BYTE v25[48]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int *v26; // [rsp+50h] [rbp-18h]
  unsigned __int64 v27; // [rsp+58h] [rbp-10h]
  __int64 v28; // [rsp+60h] [rbp-8h]

  if ( a13 == 0 )
    return 0;
  v14 = 283396968;
  v15 = MEMORY[0x10E44B68];
  if ( MEMORY[0x10E44B68] != 0 )
  {
    v27 = a13;
  }
  else
  {
    v28 = 283396968;
    v27 = a13;
    v26 = (unsigned int *)v25;
    MEMORY[0x10E44A50](a1, a2, a3: 283396968, a4: v25);
    v17 = v26;
    v14 = v28;
    *(_QWORD *)v28 = v26[1];
    MEMORY[0x10E443D0] = v17[10];
    v15 = *(_QWORD *)v14;
  }
  if ( v15 != 0 )
    return v27 % v15 == 0;
  sub_18276E7E0(
    a1,
    a2,
    a3: v14,
    a4: 0,
    a5: v27,
    a6: a14,
    a7: a3,
    a8: a4,
    a9: a5,
    a10: a6,
    a11: a7,
    a12: a8,
    a13: a9,
    a14: a10,
    a15: v24);
  __builtin_debugtrap();
  return sub_18278A640(a1: v20, a2: v21, a3: v18, a4: v19, a5: v22, a6: v23);
}
