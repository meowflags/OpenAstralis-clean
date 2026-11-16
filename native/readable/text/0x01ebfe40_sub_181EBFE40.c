// sub_1EBFE40
// rva 0x01ebfe40  size 70  section .text  group text
// window base 0x181ebfe40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBFE40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  char v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+8h] [rbp-10h]
  __int64 v15; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v13);
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
    return sub_1EBFEA0();
  }
  else
  {
    v8 = v6 + 8LL * *(unsigned int *)(a3 + 4);
    v15 = a3;
    v14 = v8;
    result = sub_4F68F20(a1, a2, a3: v8);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v11, a2: v12, a3: v10, a4: v14);
  }
  return result;
}
