// sub_1932CA842
// rva 0x132ca842  size 93  section .text  group text
// window base 0x1932ca842: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932CA842(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // r8

  v4 = *(_QWORD *)(a3 + 32);
  if ( v4 != 0 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a3 + 96)
                                                                                           + 1536LL))(
               a1,
               a2,
               a3: *(_QWORD *)(a3 + 128),
               a4: *(_QWORD *)(a3 + 96),
               a5: v4,
               a6: 2);
  v6 = *(_QWORD *)(a3 + 40);
  if ( v6 != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(a3 + 96) + 1536LL))(
             a1,
             a2,
             a3: *(_QWORD *)(a3 + 128),
             a4: *(_QWORD *)(a3 + 96),
             a5: v6,
             a6: 0);
  return result;
}
