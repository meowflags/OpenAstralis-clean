// sub_1932CA4E6
// rva 0x132ca4e6  size 180  section .text  group text
// window base 0x1932ca4e6: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932CA4E6(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v4 = *(_QWORD *)(a3 + 96);
  if ( v4 != 0 )
    result = MEMORY[0x79218](a1, a2, a3: 0, a4: v4);
  if ( *(_QWORD *)(a3 + 88) != 0 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(**(_QWORD **)(a3 + 272) + 1360LL))(
               a1,
               a2,
               a3: *(_QWORD *)(a3 + 288));
  v6 = *(_QWORD *)(a3 + 104);
  if ( v6 != 0 )
    result = sub_1932C97D0(a1, a2, a3, a4: v6);
  v7 = *(_QWORD *)(a3 + 64);
  if ( v7 != 0 )
    result = sub_1932C97D0(a1, a2, a3, a4: v7);
  v8 = *(_QWORD *)(a3 + 112);
  if ( v8 != 0 )
    result = sub_1932C97D0(a1, a2, a3, a4: v8);
  v9 = *(_QWORD *)(a3 + 72);
  if ( v9 != 0 )
    result = sub_1932C97D0(a1, a2, a3, a4: v9);
  v10 = *(_QWORD *)(a3 + 120);
  if ( v10 != 0 )
    result = sub_1932C97D0(a1, a2, a3, a4: v10);
  v11 = *(_QWORD *)(a3 + 56);
  if ( v11 != 0 )
    result = sub_1932C97D0(a1, a2, a3, a4: v11);
  v12 = *(_QWORD *)(a3 + 128);
  if ( v12 != 0 )
    return MEMORY[0x791E8](a1, a2, a3, a4: v12);
  return result;
}
