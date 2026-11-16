// sub_184F39E80
// rva 0x04f39e80  size 109  section .text  group text
// window base 0x184f39e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F39E80(float a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *, _QWORD, _QWORD, __int64); // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v15; // [rsp+8h] [rbp-10h]
  float v16; // [rsp+10h] [rbp-8h]
  unsigned int v17; // [rsp+14h] [rbp-4h]

  v15 = a4;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v8 + 8) )
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
    return sub_184F39F00();
  }
  else
  {
    v17 = a6;
    v16 = a1;
    v9 = MEMORY[0x18610D980]();
    v10 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _QWORD, __int64))(v6
                                                                                      + *(_QWORD *)(v7
                                                                                                  + 8LL * (*v15 >> 3)
                                                                                                  + 440));
    result = v10(a1: v11, a2: v12, a3: v15, a4: v10, a5: v17, a6: v9);
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
