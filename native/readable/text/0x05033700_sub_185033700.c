// sub_5033700
// rva 0x05033700  size 70  section .text  group text
// window base 0x185033700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_5033700(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  char v8; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+10h] [rbp-18h]
  __int64 v10; // [rsp+18h] [rbp-10h]
  __int64 v11; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v10 = a5;
  v11 = a6;
  v9 = a3;
  sub_5032B40(a1, a2, a3, a4: a5, a5, a6, a7: v8);
  if ( *(int *)(v6 + 16) <= 0 )
    sub_277F280();
  return v9;
}
