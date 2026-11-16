// sub_1932AA540
// rva 0x132aa540  size 127  section .text  group text
// window base 0x1932aa540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932AA540(__int64 a1, _DWORD a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi

  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 760LL))(
         a1,
         a2: a5,
         a3,
         a4,
         a5: MEMORY[0x337ED8]);
  if ( v6 == 0 )
    return sub_1932B15C0(a1: 0, a2: v7, a3: 537232, a4);
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a4 + 872LL))(
    a1: v6,
    a2: v7,
    a3: v6,
    a4,
    a5: MEMORY[0x337EF8],
    a6: (unsigned int)v7);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(
           a1: v9,
           a2: v10,
           a3: v9,
           a4);
}
