// sub_15939C0
// rva 0x015939c0  size 118  section .text  group text
// window base 0x1815939c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15939C0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, _QWORD *a5)
{
  __int64 (*v5)(void); // rax
  int v8; // [rsp+24h] [rbp-4h]

  if ( *a3 == 45 )
  {
    v5 = (__int64 (*)(void))(a3 + 1);
    v8 = 1;
  }
  else
  {
    v8 = 0;
    v5 = (__int64 (*)(void))a3;
  }
  if ( (unsigned int)sub_1591BC0(a1, a2, a3: v5, a4, (__int64)a5) == 0 )
    return 0;
  if ( v8 != 0 )
    *a5 = -*a5;
  return 1;
}
