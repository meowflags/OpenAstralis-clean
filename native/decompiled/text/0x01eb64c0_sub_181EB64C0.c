// sub_181EB64C0
// rva 0x01eb64c0  size 109  section .text  group text
// window base 0x181eb64c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB64C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  if ( a3 == 0 )
    return 2;
  v3 = *(_QWORD *)(a3 + 208);
  if ( v3 == 0 )
    return 2;
  if ( (v3 & 0x7FFFF) != 0 )
    JUMPOUT(0x303D404E8LL);
  sub_181EB6D20();
  return sub_181EB6AC0();
}
