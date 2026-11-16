// sub_504B840
// rva 0x0504b840  size 56  section .text  group text
// window base 0x18504b840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504B840(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, char *a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  char v8; // [rsp+0h] [rbp-18h] BYREF
  char *v9; // [rsp+8h] [rbp-10h]
  unsigned __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
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
    return sub_504B880();
  }
  else
  {
    v10 = a3;
    v9 = a5;
    result = sub_503ACA0(a1, a2, a3, a4: (__int64)a5, a5, a6, a7: v8);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
