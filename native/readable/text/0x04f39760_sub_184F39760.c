// sub_4F39760
// rva 0x04f39760  size 102  section .text  group text
// window base 0x184f39760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F39760(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64); // rcx
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-18h] BYREF
  int v13; // [rsp+10h] [rbp-8h]
  int v14; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)v12 <= *(_QWORD *)(v8 + 8) )
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
    return sub_4F397E0();
  }
  else
  {
    if ( a6 != 0 )
      v9 = v7 + 350970688;
    else
      v9 = v7 + 361697768;
    v14 = a6;
    v10 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64))(v6
                                                                                       + *(_QWORD *)(v7 + 8LL * (*a3 >> 3) + 440));
    v12[1] = a3;
    v13 = a5;
    result = v10(a1, a2, a3, a4: v10, a5, a6: v9);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
