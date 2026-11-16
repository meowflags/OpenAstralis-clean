// sub_1932BEA6C
// rva 0x132bea6c  size 347  section .text  group text
// window base 0x1932bea6c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __noreturn sub_1932BEA6C(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // r8d
  char *i; // r9
  int v11; // ecx

  v6 = 0;
  v9 = sub_1932CA1FD(a1, a2, a3, a4: a3);
  for ( i = a3; v9 > 0; v6 = v11 + 31 * v6 )
  {
    v11 = *i;
    --v9;
    ++i;
  }
  sub_1932C8CD0(a1: 0, a2: v8, a3: v7, a4: *(_QWORD *)(a4 + 56));
}
