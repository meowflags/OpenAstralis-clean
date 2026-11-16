// sub_1932AD7F4
// rva 0x132ad7f4  size 127  section .text  group text
// window base 0x1932ad7f4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1932AD7F4(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v5; // rax
  char *v6; // rsi
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  _BYTE *v11; // rsi

  if ( *a3 != 0 )
  {
    v5 = sub_1932CA1FD(a1, a2: a4, a3, a4);
    v7 = *v6;
    v9 = sub_1932CA1FD(a1: v5, a2: v6, a3: v8, a4: a3);
    if ( v10 + v9 + (unsigned __int64)(v7 != 0) + 1 <= 0x400 )
    {
      if ( *v11 != 0 )
        sub_1932CA281(a1: v10, a2: v11, a3: 538824, a4: v11);
      sub_1932CA281(a1: v10, a2: v11, a3, a4: v11);
    }
  }
}
