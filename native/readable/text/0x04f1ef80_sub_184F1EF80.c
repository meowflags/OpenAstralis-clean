// sub_4F1EF80
// rva 0x04f1ef80  size 89  section .text  group text
// window base 0x184f1ef80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F1EF80(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+0h] [rbp-18h] BYREF

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
    return sub_4F1EFE0();
  }
  else
  {
    if ( a5 == v6 )
      v8 = v6 + 353301280;
    else
      v8 = a5;
    v11[2] = a5;
    v9 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v5
                                                                             + *(_QWORD *)(v6 + 8LL * (*a3 >> 3) + 520));
    v11[1] = a3;
    result = v9(a1, a2, a3, a4: v9, a5: v8);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
