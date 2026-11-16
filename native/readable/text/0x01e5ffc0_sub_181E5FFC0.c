// sub_1E5FFC0
// rva 0x01e5ffc0  size 73  section .text  group text
// window base 0x181e5ffc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E5FFC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(result) = *(_BYTE *)((int)(*(_QWORD *)(a3 + 16))++ + *(_QWORD *)(a3 + 8) + 12LL);
  if ( (unsigned __int8)result < 0xC0u )
    return (unsigned __int8)result;
  else
    return sub_1E60020(a1, a2, a3, a4: a3, a5: (unsigned __int8)result);
}
