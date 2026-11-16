// sub_15AC7C0
// rva 0x015ac7c0  size 166  section .text  group text
// window base 0x1815ac7c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15AC7C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  __int64 v16; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_15AC880)();
  }
  result = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)result == 0 )
  {
    v16 = a5;
    v15 = a3;
    if ( *(int *)(v6 + 16) > 0 )
      return result;
    return sub_277F280();
  }
  v16 = a5;
  v15 = a3;
  v14 = v5 + 376614544;
  sub_1EB8320(a1, a2, a3: v5 + 376614544);
  sub_15AC880(a1: v9, a2: v10, a3: v15, a4: v8, a5: v16);
  result = sub_1EB8140(a1: v11, a2: v12, a3: v14);
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280();
  return result;
}
