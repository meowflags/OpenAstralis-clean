// sub_184F39540
// rva 0x04f39540  size 88  section .text  group text
// window base 0x184f39540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F39540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // esi
  unsigned int v9; // eax
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  _QWORD v17[4]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v17 <= *(_QWORD *)(v7 + 8) )
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
    return sub_184F395A0(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16);
  }
  else
  {
    v8 = *(char *)(a3 + 12);
    v9 = *(_DWORD *)(a3 + 8);
    v10 = v6 + 8LL * *(unsigned int *)(a3 + 4);
    v17[3] = a3;
    v17[2] = a5;
    v18 = a6;
    result = MEMORY[0x184FF3C80](a1: a5, a2: a6, a3: v10, a4, a5: v8, a6: v9);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
