// sub_132CA59A
// rva 0x132ca59a  size 96  section .text  group text
// window base 0x1932ca59a: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132CA59A(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r8

  if ( *(_QWORD *)(a3 + 80) != 0 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(**(_QWORD **)(a3 + 144) + 1360LL))(
               a1,
               a2,
               a3: *(_QWORD *)(a3 + 176));
  v5 = *(_QWORD *)(a3 + 88);
  if ( v5 != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a3 + 144)
                                                                                         + 1536LL))(
             a1,
             a2,
             a3: *(_QWORD *)(a3 + 168),
             a4: *(_QWORD *)(a3 + 144),
             a5: v5,
             a6: 2);
  return result;
}
