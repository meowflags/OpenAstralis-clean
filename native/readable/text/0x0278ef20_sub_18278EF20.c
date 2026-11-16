// sub_278EF20
// rva 0x0278ef20  size 212  section .text  group text
// window base 0x18278ef20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278EF20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 i; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v28; // edx
  int v29; // ecx
  int v30; // edi
  int v31; // esi
  int v32; // r8d
  int v33; // r9d
  char v34; // [rsp+0h] [rbp-28h] BYREF
  __int64 v35; // [rsp+10h] [rbp-18h]
  int v36; // [rsp+1Ch] [rbp-Ch]
  int v37; // [rsp+20h] [rbp-8h]
  unsigned int v38; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v16 + 8) )
  {
    *(double *)a7.m128_u64 = sub_1EB84E0();
    goto LABEL_12;
  }
  v35 = a3;
  if ( a3 == v15 )
  {
LABEL_12:
    sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v34);
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
    return sub_278F000(a1: v30, a2: v31, a3: v28, a4: v29, a5: v32, a6: v33, a7: a15);
  }
  v38 = sub_27B6940();
  v37 = sub_27B6940(a1: v17, a2: v18, a3: v35);
  if ( v37 < 1 )
  {
    i = 0;
  }
  else
  {
    sub_27B6940(a1: v20, a2: v21, a3: v35);
    sub_27B0E20(a1: v22, a2: v23, a3: v35);
    for ( i = 1; ; i = (unsigned int)(v36 + 1) )
    {
      v19 = v35;
      if ( v37 <= (int)i )
        break;
      v36 = i;
      sub_27B6940();
      sub_27B0E20(a1: v25, a2: v26, a3: v35);
    }
  }
  if ( *(int *)(v16 + 16) <= 0 )
    sub_277F280(a1: v20, a2: v21, a3: v19, a4: i);
  return v38;
}
