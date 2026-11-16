// sub_132AA44C
// rva 0x132aa44c  size 115  section .text  group text
// window base 0x1932aa44c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall sub_132AA44C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi

  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 760LL))(
         a1,
         a2: a5,
         a3,
         a4,
         a5: MEMORY[0x337f38]/* 0x337f38 */);
  if ( v6 != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 832LL))(
      a1: v6,
      a2: v7,
      a3: v6,
      a4,
      a5: MEMORY[0x337f18]/* 0x337f18 */,
      a6: v7);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(a1: v8, a2: v9, a3: v8, a4);
    LOBYTE(v6) = 1;
  }
  return v6;
}
