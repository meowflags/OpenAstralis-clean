// sub_18278A1C0
// rva 0x0278a1c0  size 194  section .text  group text
// window base 0x18278a1c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18278A1C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned int v8; // eax
  char v9; // [rsp+24h] [rbp-14h]
  __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = a6;
  v9 = a1;
  if ( a5 != 0 )
  {
    if ( (unsigned int)sub_18278A5A0(a1, a2, a3: v6 + 376652416) == 0 )
      return 0;
    a6 = v10;
  }
  if ( a6 == 0 )
    return 0;
  if ( (v9 & 4) != 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      v8 = 64;
    }
    else
    {
      if ( (v9 & 1) != 0 )
        JUMPOUT(0x304ED3268LL);
      v8 = 16;
    }
  }
  else if ( (v9 & 2) != 0 )
  {
    v8 = 4;
  }
  else
  {
    if ( (v9 & 1) != 0 )
      JUMPOUT(0x304ED327ELL);
    v8 = 1;
  }
  return MEMORY[0x10E44A88](a1, a2, a3: a6, a4: a5, a5: 4096, a6: v8);
}
