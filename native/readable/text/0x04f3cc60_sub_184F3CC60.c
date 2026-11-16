// sub_4F3CC60
// rva 0x04f3cc60  size 84  section .text  group text
// window base 0x184f3cc60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F3CC60(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64); // rcx
  __int64 v9; // r9
  __int64 result; // rax
  _QWORD v11[2]; // [rsp+0h] [rbp-18h] BYREF
  int v12; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)v11 <= *(_QWORD *)(v7 + 8) )
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
    return sub_4F3CCC0();
  }
  else
  {
    v8 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64))(v5
                                                                                      + *(_QWORD *)(v6
                                                                                                  + 8LL * (*a3 >> 3)
                                                                                                  + 592));
    v9 = (unsigned int)a3[2];
    v11[1] = a3;
    v12 = a5;
    result = v8(a1, a2, a3, a4: v8, a5, a6: v9);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
