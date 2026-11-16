// sub_184F1B6E0
// rva 0x04f1b6e0  size 78  section .text  group text
// window base 0x184f1b6e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1B6E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 (*v9)(void); // rax
  __int64 result; // rax
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int64)v11 <= *(_QWORD *)(v8 + 8) )
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
    return sub_184F1B740();
  }
  else
  {
    v9 = (__int64 (*)(void))(v6 + *(_QWORD *)(v7 + 8LL * (*a3 >> 3) + 280));
    v11[4] = a3;
    v11[3] = a5;
    v11[2] = a6;
    result = v9();
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
