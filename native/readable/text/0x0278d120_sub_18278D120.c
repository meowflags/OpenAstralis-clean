// sub_278D120
// rva 0x0278d120  size 373  section .text  group text
// window base 0x18278d120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278D120(
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
        __m128 a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  char v27; // [rsp+0h] [rbp-28h] BYREF
  __int64 v28; // [rsp+8h] [rbp-20h]
  __int64 v29; // [rsp+10h] [rbp-18h]
  int v30; // [rsp+18h] [rbp-10h]
  unsigned int v31; // [rsp+1Ch] [rbp-Ch]
  __int64 v32; // [rsp+20h] [rbp-8h]

  v32 = a3;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v15 + 8) )
  {
    *(double *)a7.m128_u64 = sub_1EB84E0();
  }
  else if ( a5 != v14 )
  {
    v16 = *(_DWORD *)(a5 + 4);
    *(_DWORD *)(a3 + 4) = v16;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v25 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v25) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v25) >> 9) + 0x38) = 0;
    }
    v17 = *(unsigned int *)(a5 + 8);
    *(_DWORD *)(a3 + 8) = v17;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v26 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v26) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v26) >> 9) + 0x38) = 0;
    }
    v18 = *(_QWORD *)(v15 + 40);
    v19 = v18 + 24;
    if ( (unsigned __int64)(v18 + 24) > *(_QWORD *)(v15 + 32) )
    {
      v31 = v17;
      v30 = v16;
      v29 = a5;
      v18 = sub_1EAA840(a1: v19, a2, a3: 34084944, a4: v17, a5: 2);
      v17 = v31;
      v16 = v30;
    }
    else
    {
      *(_QWORD *)(v15 + 40) = v19;
      *(_QWORD *)v18 = 34084944;
      *(_DWORD *)(v18 + 8) = 2;
      *(_DWORD *)(v18 + 12) = 0;
      *(_QWORD *)(v18 + 16) = 0;
      v29 = a5;
    }
    *(_DWORD *)(v18 + 16) = v17;
    *(_DWORD *)(v18 + 12) = v16;
    v28 = v18;
    result = sub_631FE80(a1: 1, a2, a3: v18, a4: v17, a5: 0, a6: 2);
    v24 = v32;
    *(_DWORD *)(v32 + 12) = result;
    if ( *(int *)(v15 + 16) <= 0 )
      return sub_277F280(a1: v22, a2: v23, a3: v24, a4: v21);
    return result;
  }
  sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v27);
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
  return sub_278D2A0();
}
