// sub_1932C5B34
// rva 0x132c5b34  size 97  section .text  group text
// window base 0x1932c5b34: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C5B34(_DWORD a1, _DWORD a2, _DWORD a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // rdx

  if ( (unsigned int)sub_1932C5EA0() != 0 )
    return 4294967294LL;
  v9 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 64LL);
  if ( v9 != 0 )
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v5 + 56))(
      a1: v6,
      a2: v7,
      a3: v9,
      a4: *(_QWORD *)(v5 + 64));
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(a4 + 56))(
    a1: v6,
    a2: v7,
    a3: *(_QWORD *)(a4 + 40),
    a4: *(_QWORD *)(a4 + 64));
  *(_QWORD *)(a4 + 40) = 0;
  return 0;
}
