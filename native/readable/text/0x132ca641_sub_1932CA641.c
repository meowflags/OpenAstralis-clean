// sub_132CA641
// rva 0x132ca641  size 74  section .text  group text
// window base 0x1932ca641: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132CA641(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a3 + 56);
  if ( v4 != 0 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a3 + 128)
                                                                                           + 1536LL))(
               a1,
               a2,
               a3: *(_QWORD *)(a3 + 144),
               a4: *(_QWORD *)(a3 + 128),
               a5: v4,
               a6: 2);
  v6 = *(_QWORD *)(a3 + 64);
  if ( v6 != 0 )
    return sub_1932C97D0(a1, a2, a3, a4: v6);
  return result;
}
