// sub_182763600
// rva 0x02763600  size 62  section .text  group text
// window base 0x182763600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182763600(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  __int64 v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v3 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_182763640)();
  }
  else
  {
    v13 = a3;
    v4 = MEMORY[0x181599120]();
    result = sub_182763640(a1: v6, a2: v7, a3: v13, a4: v5, a5: v4);
    if ( *(int *)(v3 + 16) <= 0 )
      return sub_18277F280(a1: v10, a2: v11, a3: v9);
  }
  return result;
}
