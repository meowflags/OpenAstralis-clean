// sub_184F3A640
// rva 0x04f3a640  size 109  section .text  group text
// window base 0x184f3a640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3A640(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *, _QWORD, _QWORD, __int64); // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v15; // [rsp+10h] [rbp-18h]
  __int64 v16; // [rsp+18h] [rbp-10h]
  unsigned int v17; // [rsp+24h] [rbp-4h]

  v15 = a3;
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
    return sub_184F3A6C0();
  }
  else
  {
    v17 = a5;
    v16 = a6;
    v9 = MEMORY[0x184F93A60](a1, a2, a3: a6);
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
