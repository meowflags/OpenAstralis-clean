// sub_184F3A720
// rva 0x04f3a720  size 88  section .text  group text
// window base 0x184f3a720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3A720(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // esi
  unsigned int v9; // eax
  __int64 v10; // rdi
  __int64 result; // rax
  _QWORD v12[4]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v12 <= *(_QWORD *)(v7 + 8) )
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
    return sub_184F3A780();
  }
  else
  {
    v8 = *(char *)(a3 + 12);
    v9 = *(_DWORD *)(a3 + 8);
    v10 = v6 + 8LL * *(unsigned int *)(a3 + 4);
    v12[3] = a3;
    v12[2] = a5;
    v13 = a6;
    result = MEMORY[0x184FF77A0](a1: a5, a2: a6, a3: v10, a4, a5: v8, a6: v9);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
