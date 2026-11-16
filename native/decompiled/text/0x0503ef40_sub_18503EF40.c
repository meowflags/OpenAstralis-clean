// sub_18503EF40
// rva 0x0503ef40  size 84  section .text  group text
// window base 0x18503ef40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18503EF40(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 (__fastcall *v6)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v7; // r8
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v9 <= *(_QWORD *)(v5 + 8) )
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
    return sub_18503EFA0();
  }
  else
  {
    v6 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v3
                                                                             + *(_QWORD *)(v4 + 8LL * (*a3 >> 3) + 168));
    v7 = v4 + 8LL * *(unsigned int *)(v4 + 374343876);
    v9[2] = a3;
    result = v6(a1, a2, a3, a4: v6, a5: v7);
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
