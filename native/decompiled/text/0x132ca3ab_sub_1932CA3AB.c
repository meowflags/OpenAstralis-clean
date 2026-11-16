// sub_1932CA3AB
// rva 0x132ca3ab  size 47  section .text  group text
// window base 0x1932ca3ab: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932CA3AB(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a3 + 48) != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(**(_QWORD **)(a3 + 96) + 1360LL))(
             a1,
             a2,
             a3: *(_QWORD *)(a3 + 112));
  return result;
}
