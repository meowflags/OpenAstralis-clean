// sub_184F1EEA0
// rva 0x04f1eea0  size 91  section .text  group text
// window base 0x184f1eea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1EEA0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v14; // [rsp+8h] [rbp-10h]
  unsigned int v15; // [rsp+14h] [rbp-4h]

  v14 = a3;
  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F1EF00();
  }
  else
  {
    v15 = a5;
    v8 = MEMORY[0x184F8C700](a1, a2, a3: a5);
    v9 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v5
                                                                             + *(_QWORD *)(v6 + 8LL * (*v14 >> 3) + 520));
    result = v9(a1: v10, a2: v11, a3: v14, a4: v9, a5: v8);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
