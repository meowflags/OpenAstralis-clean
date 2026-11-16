// sub_132A4CB0
// rva 0x132a4cb0  size 147  section .text  group text
// window base 0x1932a4cb0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A4CB0(__int64 a1, __int64 a2, _WORD *a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi

  if ( *a3 != 1 )
    return 0;
  v5 = sub_1932CA1FD(a1, a2: a3 + 1, a3, a4: a3 + 1);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1408LL))(
         a1: v6,
         a2: v7,
         a3: v5,
         a4);
  v10 = v8;
  if ( v8 != 0
    && ((*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a4 + 1664LL))(
          a1: v8,
          a2: v9,
          a3: v8,
          a4,
          a5: 0,
          a6: v5),
        (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
          a1: v11,
          a2: v12,
          a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
          a4) != 0) )
  {
    return 0;
  }
  else
  {
    return v10;
  }
}
