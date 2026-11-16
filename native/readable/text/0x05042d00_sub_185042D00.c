// sub_5042D00
// rva 0x05042d00  size 75  section .text  group text
// window base 0x185042d00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5042D00(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // r14d
  __int64 v7; // r15
  int v8; // eax
  __int64 result; // rax
  char v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    v11 = a3;
    sub_1EB84E0();
    goto LABEL_6;
  }
  v8 = *(_DWORD *)(a3 + 4);
  if ( v8 == 0 )
  {
LABEL_6:
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_5042D60();
  }
  v11 = a3;
  result = sub_5046580(a1, a2, a3: v6 + 8 * v8, a4, a5, a6, a7: v10);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
