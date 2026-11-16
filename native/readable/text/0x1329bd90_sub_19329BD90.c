// sub_1329BD90
// rva 0x1329bd90  size 123  section .text  group text
// window base 0x19329bd90: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1329BD90(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  unsigned int v7; // r10d
  int v8; // r11d
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rax
  char v11; // cl
  unsigned __int64 v12; // rbx
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]
  unsigned __int64 v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+38h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp+18h]

  v5 = a4;
  v6 = 0;
  v15 = a4 ^ 0xE0350AB2CFF49F91LL;
  v16 = a4 + 0x2F31F77444B0BAC5LL;
  v17 = 0xD341FEEF8E0590EFLL * a4;
  v18 = a4 ^ 0x5686095817F9381FLL;
  v7 = (a4 & 3) + 1;
  if ( (a4 & 3) != 0xFFFFFFFF )
  {
    a5 = &v15;
    v23 = a1;
    v8 = 5;
    v9 = &v15;
    do
    {
      v10 = *a5;
      ++v9;
      v11 = v8;
      ++a5;
      v8 += 5;
      *(v9 - 1) = (v10 ^ (v5 >> v11)) - 0x3238266B70AEEF96LL;
      a3 = *(a5 - 1) >> (63 - (unsigned __int8)v6);
      v6 = (unsigned int)(v6 + 1);
      v5 ^= a3 | (*(a5 - 1) << v6);
    }
    while ( (unsigned int)v6 < v7 );
    a1 = v23;
  }
  if ( (v5 & 8) != 0 )
    v12 = v16 + v5;
  else
    v12 = v17 ^ v5;
  if ( (v12 & 3) == 0 )
    sub_1329BC00(a1, a2, a3, a4: v12 ^ 0x6F44DA781361762DLL, a5);
  return sub_132C8DE0(a1, a2, a3, a4: (unsigned __int64)&v14 ^ v19, a5, a6: v6);
}
