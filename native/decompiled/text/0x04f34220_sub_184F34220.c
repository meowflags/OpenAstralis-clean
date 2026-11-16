// sub_184F34220
// rva 0x04f34220  size 77  section .text  group text
// window base 0x184f34220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F34220(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  void (*v8)(void); // rax
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+8h] [rbp-10h]
  int v12; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
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
    return sub_184F34280();
  }
  else
  {
    v8 = (void (*)(void))(v5 + *(_QWORD *)(v6 + 8LL * (*a3 >> 3) + 176));
    v12 = a5;
    v11 = a3;
    v8();
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return (__int64)v11;
  }
}
