// sub_184F24F00
// rva 0x04f24f00  size 78  section .text  group text
// window base 0x184f24f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F24F00(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64, __int64, _DWORD *, bool, bool); // rax
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
    return sub_184F24F60();
  }
  else
  {
    v8 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, bool, bool))(v5 + *(_QWORD *)(v6 + 8LL * (*a3 >> 3) + 184));
    v11 = a5;
    v10[1] = a3;
    result = v8(a1, a2, a3, a4: a5 != 0, a5: a5 != 0);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
