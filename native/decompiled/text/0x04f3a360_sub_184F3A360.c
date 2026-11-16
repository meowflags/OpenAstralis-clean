// sub_184F3A360
// rva 0x04f3a360  size 143  section .text  group text
// window base 0x184f3a360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3A360(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *); // rax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, __int64, _DWORD *, _QWORD, _QWORD, __int64); // rcx
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v14; // [rsp+10h] [rbp-18h]
  _DWORD *v15; // [rsp+18h] [rbp-10h]
  unsigned int v16; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v8 + 8) )
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
    return sub_184F3A400();
  }
  else
  {
    v15 = a3;
    if ( a6 == v7 )
    {
      v14 = a6;
      v16 = a5;
      v10 = (__int64)(v7 + 88325320);
    }
    else
    {
      v16 = a5;
      v9 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*a6 >> 3) + 26]);
      v14 = a6;
      v10 = v9(a1, a2, a3: a6);
    }
    v11 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _QWORD, __int64))(v6
                                                                                      + *(_QWORD *)&v7[2 * (*v15 >> 3) + 110]);
    result = v11(a1, a2, a3: v15, a4: v11, a5: v16, a6: v10);
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
