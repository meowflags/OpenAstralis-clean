// sub_132AA2C0
// rva 0x132aa2c0  size 246  section .text  group text
// window base 0x1932aa2c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall sub_132AA2C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi

  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 760LL))(
         a1,
         a2,
         a3,
         a4,
         a5: MEMORY[0x337f38]/* 0x337f38 */);
  if ( v5 != 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 760LL))(
           a1: v6,
           a2: v5,
           a3: v5,
           a4,
           a5: MEMORY[0x337f30]/* 0x337f30 */);
    if ( v7 != 0 )
    {
LABEL_5:
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1664LL))(
        a1: v7,
        a2: v8,
        a3: v7,
        a4,
        a5: 0,
        a6: 16);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(
        a1: v11,
        a2: v12,
        a3: v11,
        a4);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(
        a1: v13,
        a2: v14,
        a3: v14,
        a4);
      return 1;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)a4 + 1408LL))(
           a1: 0,
           a2: v8,
           a3: 16,
           a4);
    if ( v9 != 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 832LL))(
        a1: v9,
        a2: v10,
        a3: v10,
        a4,
        a5: MEMORY[0x337f30]/* 0x337f30 */,
        a6: v9);
      goto LABEL_5;
    }
  }
  return 0;
}
