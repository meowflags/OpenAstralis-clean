// sub_4F1A020
// rva 0x04f1a020  size 134  section .text  group text
// window base 0x184f1a020: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F1A020(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64, __int64, _DWORD *); // rax
  __int64 v9; // rax
  void (__fastcall *v10)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+8h] [rbp-10h]
  _DWORD *v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F1A0C0();
  }
  else
  {
    v14 = a3;
    if ( a5 == v6 )
    {
      v13 = a5;
      v9 = (__int64)(v6 + 88325320);
    }
    else
    {
      v8 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*a5 >> 3) + 26]);
      v13 = a5;
      v9 = v8(a1, a2, a3: a5);
    }
    v10 = (void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v5 + *(_QWORD *)&v6[2 * (*v14 >> 3) + 88]);
    v10(a1, a2, a3: v14, a4: v10, a5: v9);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return (__int64)v14;
  }
}
