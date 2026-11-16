// sub_15ACA60
// rva 0x015aca60  size 124  section .text  group text
// window base 0x1815aca60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15ACA60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-18h] BYREF
  __int64 v15; // [rsp+8h] [rbp-10h]
  __int64 v16; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15ACAE0(a1: v12, a2: v13, a3: v11);
  }
  else
  {
    v16 = a3;
    v15 = v3 + 376614544;
    sub_1EB8320(a1, a2, a3: v3 + 376614544);
    sub_2852A40(a1: v6, a2: v7, a3: v3 + 52423576, a4: v5, a5: v16);
    result = sub_1EB8140(a1: v8, a2: v9, a3: v15);
    if ( *(int *)(v4 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
