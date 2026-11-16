// sub_132AA5C0
// rva 0x132aa5c0  size 156  section .text  group text
// window base 0x1932aa5c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AA5C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi

  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 760LL))(
         a1,
         a2: a5,
         a3,
         a4,
         a5: MEMORY[0x337ed8]/* 0x337ed8 */);
  if ( v6 == 0 )
    return JNU_ThrowNullPointerException(a1: 0, a2: v7, a3: 537232, a4);
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 832LL))(
    a1: v6,
    a2: v7,
    a3: v6,
    a4,
    a5: MEMORY[0x337ef0]/* 0x337ef0 */,
    a6: v7);
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 832LL))(
    a1: v9,
    a2: v10,
    a3: v9,
    a4,
    a5: MEMORY[0x337ee8]/* 0x337ee8 */,
    a6: v10);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(
           a1: v11,
           a2: v12,
           a3: v11,
           a4);
}
