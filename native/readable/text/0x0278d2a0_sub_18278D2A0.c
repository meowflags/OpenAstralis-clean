// sub_278D2A0
// rva 0x0278d2a0  size 189  section .text  group text
// window base 0x18278d2a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278D2A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
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
  _DWORD *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 result; // rax
  int v18; // eax
  __int64 v19; // rcx
  char v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v15 + 8) )
  {
    *(double *)a7.m128_u64 = sub_1EB84E0();
    goto LABEL_19;
  }
  if ( a5 != v14 )
  {
    v16 = *a5 >> 3;
    if ( SHIWORD(v14[2 * v16 + 15]) >= 2 && v14[2 * v14[2 * v16 + 4] + 4] == 2003 )
    {
      v18 = *(_DWORD *)(a3 + 4);
      if ( v18 != 0 )
      {
        v19 = (unsigned int)a5[1];
        if ( (_DWORD)v19 == 0 )
        {
          result = 0;
          goto LABEL_14;
        }
        if ( (_DWORD)v19 != v18 )
        {
LABEL_21:
          result = 0;
LABEL_14:
          if ( *(int *)(v15 + 16) <= 0 )
            return sub_277F280(a1, a2, a3, a4: v19);
          return result;
        }
        if ( *(_DWORD *)(a3 + 8) != 0 )
        {
          v19 = 0;
          if ( a5[2] != 0 )
            JUMPOUT(0x304ED6321LL);
          result = 0;
          goto LABEL_14;
        }
LABEL_20:
        sub_2771080(a1, a2, a3, a4: v19, (__int64)a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v20);
        goto LABEL_21;
      }
LABEL_19:
      sub_2771080(a1, a2, a3, a4, (__int64)a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v20);
      goto LABEL_20;
    }
  }
  if ( *(int *)(v15 + 16) <= 0 )
    sub_277F280(a1, a2, a3, a4);
  return 0;
}
