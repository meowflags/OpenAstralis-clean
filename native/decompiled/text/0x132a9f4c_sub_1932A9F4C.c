// sub_1932A9F4C
// rva 0x132a9f4c  size 150  section .text  group text
// window base 0x1932a9f4c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A9F4C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi

  if ( MEMORY[0x3374EC] != 0 )
    return MEMORY[0x3374F0];
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 48LL))(a1, a2, a3: 537160);
  if ( v6 == 0 )
    return 0xFFFFFFFFLL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1152LL))(
         a1: v6,
         a2: v7,
         a3: v6,
         a4,
         a5: 537200,
         a6: 537192);
  if ( v8 == 0 )
    return 0xFFFFFFFFLL;
  result = (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1168LL))(
             a1: v9,
             a2: v10,
             a3: v9,
             a4,
             a5: v8);
  MEMORY[0x3374F0] = (unsigned __int8)result;
  MEMORY[0x3374EC] = 1;
  return result;
}
