// sub_1E9D600
// rva 0x01e9d600  size 85  section .text  group text
// window base 0x181e9d600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_1E9D600(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rbx

  v5 = (char *)sub_1E9D760(a1, a2, a3: a5);
  if ( v5 == nullptr )
    return nullptr;
  v6 = *((_QWORD *)v5 + 4);
  if ( a3 > *(_QWORD *)v5 - v6 )
    return nullptr;
  v7 = &v5[v6];
  *((_QWORD *)v5 + 4) = &v7[a3] - v5;
  return v7;
}
