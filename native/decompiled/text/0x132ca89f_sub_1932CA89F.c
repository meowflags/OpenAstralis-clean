// sub_1932CA89F
// rva 0x132ca89f  size 53  section .text  group text
// window base 0x1932ca89f: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932CA89F(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 result; // rax

  v3 = *(_QWORD *)(a3 + 40);
  if ( v3 != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a3 + 96)
                                                                                         + 1536LL))(
             a1,
             a2,
             a3: *(_QWORD *)(a3 + 104),
             a4: *(_QWORD *)(a3 + 96),
             a5: v3,
             a6: 2);
  return result;
}
