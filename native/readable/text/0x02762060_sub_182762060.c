// sub_2762060
// rva 0x02762060  size 57  section .text  group text
// window base 0x182762060: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2762060(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  char v14; // [rsp+0h] [rbp-18h] BYREF
  __int64 v15; // [rsp+8h] [rbp-10h]
  __int64 v16; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v14 > *(_QWORD *)(v8 + 8) )
  {
    v16 = a5;
    v15 = a3;
    v9 = sub_275B940(a1, a2, a3, a4: a3, a5: v7 + 359065640, a6, a7: v14);
    sub_2769900(a1: v11, a2: v12, a3: v9, a4: v10, a5: &a7);
  }
  sub_1EB84E0();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_27620A0();
}
