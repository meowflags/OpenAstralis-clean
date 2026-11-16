// sub_502C120
// rva 0x0502c120  size 88  section .text  group text
// window base 0x18502c120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502C120(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  char v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+8h] [rbp-10h]
  __int64 v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v19 = a5;
  v18 = a3;
  sub_502B860(a1, a2, a3, a4, a5, a6, a7: v17);
  v11 = sub_1EF1B00(a1: v9, a2: v10, a3: v6 + 376351776, a4: v8, a5: v18);
  if ( v11 == v6 )
    v15 = v19;
  else
    v15 = v11;
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1: v13, a2: v14, a3: v12, a4: v15);
  return v15;
}
