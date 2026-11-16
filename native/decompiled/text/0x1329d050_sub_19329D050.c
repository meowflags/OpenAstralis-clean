// sub_19329D050
// rva 0x1329d050  size 123  section .text  group text
// window base 0x19329d050: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_19329D050(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 *a6)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // r10d
  unsigned __int64 v8; // rdx
  int v9; // ebx
  __int64 *v10; // rdi
  unsigned __int64 v11; // rdx
  char v12; // al
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]
  unsigned __int64 v16; // [rsp+10h] [rbp-28h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]
  __int64 v18; // [rsp+20h] [rbp-18h]
  __int64 v19; // [rsp+30h] [rbp-8h]

  v6 = a4;
  v14 = a4 ^ 0x44534E60FC5529DCLL;
  v7 = 0;
  v15 = a4 - 0x723D653C1B514CBELL;
  v8 = 0xE5DF9AF3843AA64DLL;
  v16 = 0xE30FB73F039D60F7LL * a4;
  v17 = a4 ^ 0xE5DF9AF3843AA64DLL;
  if ( (a4 & 3) != 0xFFFFFFFF )
  {
    a6 = &v14;
    v9 = 5;
    v19 = a1;
    v10 = &v14;
    do
    {
      ++v10;
      ++a6;
      v11 = v6 >> v9;
      v9 += 5;
      *(v10 - 1) = (*(a6 - 1) ^ v11) - 0x30FEC21428D5BBE7LL;
      a5 = (unsigned __int64)*(a6 - 1) >> (63 - (unsigned __int8)v7++);
      v8 = a5 | (*(a6 - 1) << v7);
      v6 ^= v8;
    }
    while ( v7 < (a4 & 3) + 1 );
    a1 = v19;
  }
  if ( (v6 & 8) != 0 )
    v12 = v15 + v6;
  else
    v12 = v16 ^ v6;
  if ( (v12 & 3) != 0 && (v12 & 3) == 1 )
    v8 = 0xE7185995670D81A3LL;
  return sub_1932C8DE0(a1, a2, a3: v8, a4: (unsigned __int64)&v14 ^ v18, a5, a6);
}
