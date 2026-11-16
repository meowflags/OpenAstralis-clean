// sub_4F1EE40
// rva 0x04f1ee40  size 91  section .text  group text
// window base 0x184f1ee40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F1EE40(float a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+8h] [rbp-10h]
  float v14; // [rsp+14h] [rbp-4h]

  v13 = a4;
  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F1EEA0();
  }
  else
  {
    v14 = a1;
    v7 = sub_610D980();
    v8 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v4
                                                                             + *(_QWORD *)(v5 + 8LL * (*v13 >> 3) + 520));
    result = v8(a1: v9, a2: v10, a3: v13, a4: v8, a5: v7);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
