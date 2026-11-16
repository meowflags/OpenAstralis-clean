// sub_184F2D1A0
// rva 0x04f2d1a0  size 70  section .text  group text
// window base 0x184f2d1a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2D1A0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 (*v8)(void); // rax
  __int64 result; // rax
  _QWORD v10[2]; // [rsp+0h] [rbp-18h] BYREF
  int v11; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)v10 <= *(_QWORD *)(v7 + 8) )
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
    return sub_184F2D200();
  }
  else
  {
    v8 = (__int64 (*)(void))(v5 + *(_QWORD *)(v6 + 8LL * (*a3 >> 3) + 216));
    v10[1] = a3;
    v11 = a5;
    result = v8();
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
