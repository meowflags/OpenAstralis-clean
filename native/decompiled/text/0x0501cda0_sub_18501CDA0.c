// sub_18501CDA0
// rva 0x0501cda0  size 84  section .text  group text
// window base 0x18501cda0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501CDA0(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  char v8; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+8h] [rbp-10h]
  int v10; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_18501CE00();
  }
  else
  {
    v10 = a5;
    v9 = a3;
    sub_18501CF00(a1, a2, a3: a5, a4, a5: a3, a6, a7: v8);
    result = *(unsigned __int16 *)(v9 + 2 * v10 + 12);
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
