// sub_19329B9D3
// rva 0x1329b9d3  size 149  section .text  group text
// window base 0x19329b9d3: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_19329B9D3(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebx
  int v7; // ebx
  int v9; // [rsp-58h] [rbp-58h] BYREF
  __int64 v10; // [rsp-50h] [rbp-50h]
  __int64 v11; // [rsp-48h] [rbp-48h]
  int v12; // [rsp-30h] [rbp-30h]
  int v13; // [rsp-28h] [rbp-28h]
  __int64 v14; // [rsp-18h] [rbp-18h]

  if ( (v6 & 8) != 0 )
    v7 = v12 + v6;
  else
    v7 = v13 ^ v6;
  if ( (v7 & 3) == 0 )
    sub_19329D690(a1, a2, a3, a4: v7 ^ 0x9A465F96, a5, a6, a7: v9, a8: v10, a9: v11);
  return sub_1932C8DE0(a1, a2, a3, a4: (unsigned __int64)&v9 ^ v14, a5, a6);
}
