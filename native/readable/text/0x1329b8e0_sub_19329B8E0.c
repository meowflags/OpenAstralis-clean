// sub_1329B8E0
// rva 0x1329b8e0  size 123  section .text  group text
// window base 0x19329b8e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1329B8E0(
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
  int v12; // ebx
  int v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+10h] [rbp-48h]
  unsigned __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-28h]
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]
  __int64 v21; // [rsp+40h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp+18h]

  v5 = a4;
  v6 = 0;
  v17 = a4 ^ 0x86464BCBC3C992F0LL;
  v18 = a4 - 0x7DE1ED49328F03F7LL;
  v19 = 0x52A1855A2845D003LL * a4;
  v20 = a4 ^ 0xB6510EAE42DB58C3LL;
  v7 = (a4 & 3) + 1;
  if ( (a4 & 3) != 0xFFFFFFFF )
  {
    a5 = &v17;
    v25 = a1;
    v8 = 5;
    v9 = &v17;
    do
    {
      v10 = *a5;
      ++v9;
      v11 = v8;
      ++a5;
      v8 += 5;
      *(v9 - 1) = (v10 ^ (v5 >> v11)) - 0xF9DB7E757996CDBLL;
      a3 = *(a5 - 1) >> (63 - (unsigned __int8)v6);
      v6 = (unsigned int)(v6 + 1);
      v5 ^= a3 | (*(a5 - 1) << v6);
    }
    while ( (unsigned int)v6 < v7 );
    a1 = v25;
  }
  if ( (v5 & 8) != 0 )
    v12 = v18 + v5;
  else
    v12 = v19 ^ v5;
  if ( (v12 & 3) == 0 )
    sub_1329D690(a1, a2, a3, a4: v12 ^ 0x9A465F96, (_DWORD)a5, a6: v6, a7: v14, a8: v15, a9: v16);
  return sub_132C8DE0(a1, a2, a3, a4: (unsigned __int64)&v14 ^ v21, a5, a6: v6);
}
