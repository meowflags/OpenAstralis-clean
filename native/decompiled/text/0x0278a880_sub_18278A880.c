// sub_18278A880
// rva 0x0278a880  size 203  section .text  group text
// window base 0x18278a880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18278A880(
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
  __int64 v14; // r14
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned int v18; // eax
  _BYTE v19[8]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE *v20; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+34h] [rbp-14h]
  __int64 v22; // [rsp+38h] [rbp-10h]
  unsigned __int64 v23; // [rsp+40h] [rbp-8h]

  v23 = a13;
  v22 = a14;
  v21 = a1;
  if ( a13 == 0
    || (unsigned int)sub_18278A5A0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11: v14 + 376652416, a12, a13, a14) == 0
    || v22 == 0 )
  {
    return 0xFFFFFFFFLL;
  }
  if ( (v21 & 4) != 0 )
  {
    if ( (v21 & 2) != 0 )
    {
      v18 = 64;
    }
    else
    {
      if ( (v21 & 1) != 0 )
        JUMPOUT(0x304ED3931LL);
      v18 = 16;
    }
  }
  else if ( (v21 & 2) != 0 )
  {
    v18 = 4;
  }
  else
  {
    if ( (v21 & 1) != 0 )
      JUMPOUT(0x304ED3947LL);
    v18 = 1;
  }
  v20 = v19;
  if ( (unsigned int)MEMORY[0x10E44620](a1: v16, a2: v17, a3: v22, a4: v23, a5: v18, a6: v19) != 0 )
    JUMPOUT(0x304ED390ALL);
  return 0xFFFFFFFFLL;
}
