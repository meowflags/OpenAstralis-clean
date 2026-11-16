// sub_5043180
// rva 0x05043180  size 144  section .text  group text
// window base 0x185043180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5043180(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a3);
    goto LABEL_7;
  }
  v6 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v6 == 0 )
  {
LABEL_7:
    sub_2771080(a1, a2, a3, a4: a3);
    goto LABEL_8;
  }
  v7 = v4 + 8LL * *(unsigned int *)(a3 + 8);
  v10 = a3;
  sub_5046420(a1, a2, a3: v4 + 8 * v6, a4, a5: v7);
  result = *(unsigned int *)(v10 + 4);
  if ( (_DWORD)result == 0 )
  {
LABEL_8:
    sub_2771080();
    sub_2771080();
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
    return sub_5043220();
  }
  if ( *(int *)(v5 + 16) <= 0 )
    return sub_277F280();
  return result;
}
