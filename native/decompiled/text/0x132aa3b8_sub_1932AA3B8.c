// sub_1932AA3B8
// rva 0x132aa3b8  size 148  section .text  group text
// window base 0x1932aa3b8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall sub_1932AA3B8(__int64 a1, _DWORD a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r9

  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 760LL))(
         a1,
         a2: a5,
         a3,
         a4,
         a5: MEMORY[0x337F38]);
  if ( v6 != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a4 + 872LL))(
      a1: v6,
      a2: v7,
      a3: v6,
      a4,
      a5: MEMORY[0x337F28],
      a6: (unsigned int)v7);
    if ( (int)v9 > 0 )
    {
      LOBYTE(v10) = 1;
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 840LL))(
        a1: v8,
        a2: v9,
        a3: v8,
        a4,
        a5: MEMORY[0x337F20],
        a6: v10);
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(a1: v8, a2: v9, a3: v8, a4);
    LOBYTE(v6) = 1;
  }
  return v6;
}
