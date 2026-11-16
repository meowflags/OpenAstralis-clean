// sub_2785740
// rva 0x02785740  size 267  section .text  group text
// window base 0x182785740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2785740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = sub_2785A40();
  if ( v13 == 0 )
    return sub_208D220(a1, a2: v8, a3, a4: v7, a5, a6);
  v9 = sub_2785AC0();
  if ( sub_278A640(a1: v13, a2: v9, a3: v6 + 376652416, a4: 3, a5: a1, a6) == 0 )
    return sub_208D220(a1, a2: a1, a3);
  MEMORY[0x10e44c90]/* 0x10e44c90 */(
    a1: MEMORY[0x10e44528]/* 0x10e44528 */ - MEMORY[0x10e44830]/* 0x10e44830 */ + a1,
    a2: v10,
    a3: MEMORY[0x10e44528]/* 0x10e44528 */,
    a4: MEMORY[0x10e44528]/* 0x10e44528 */ - MEMORY[0x10e44830]/* 0x10e44830 */ + a1,
    a5: MEMORY[0x10e44d80]/* 0x10e44d80 */ - MEMORY[0x10e44528]/* 0x10e44528 */);
  return 0;
}
