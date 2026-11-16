// sub_1329CD30
// rva 0x1329cd30  size 123  section .text  group text
// window base 0x19329cd30: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1329CD30(
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
  __int64 *v9; // rdi
  unsigned __int64 v10; // rax
  char v11; // cl
  unsigned __int64 v12; // rbx
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]
  unsigned __int64 v17; // [rsp+30h] [rbp-28h]
  unsigned __int64 v18; // [rsp+38h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp+18h]

  v5 = a4;
  v6 = 0;
  v15 = a4 ^ 0x76373A6418D56F29LL;
  v16 = a4 - 0x719B253D96F93AB1LL;
  v17 = 0xAABEB20CEECAAA07LL * a4;
  v18 = a4 ^ 0xC455AC8A729987A4LL;
  v7 = (a4 & 3) + 1;
  if ( (a4 & 3) != 0xFFFFFFFF )
  {
    a5 = (unsigned __int64 *)&v15;
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
      *(v9 - 1) = (v10 ^ (v5 >> v11)) - 0x3483CB5ED70CA6A9LL;
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
    sub_1329CBA0(a1, a2, a3, a4: v12 ^ 0x2A06A788D07304A9LL, a5);
  return sub_132C8DE0(a1, a2, a3, a4: (unsigned __int64)&v14 ^ v19, a5, a6: v6);
}
