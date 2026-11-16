// sub_5027AA0
// rva 0x05027aa0  size 108  section .text  group text
// window base 0x185027aa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5027AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *, __int64, __int64, __int64); // rax
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+8h] [rbp-20h]
  __int64 v13; // [rsp+10h] [rbp-18h]
  _DWORD *v14; // [rsp+18h] [rbp-10h]
  __int64 v15; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v8 + 8) )
  {
    v12 = a1;
    v13 = a6;
    v15 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v7 )
  {
    v15 = a3;
    v9 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64, __int64))(v6
                                                                                       + *(_QWORD *)&v7[2 * (*a5 >> 3) + 36]);
    v14 = a5;
    v13 = a6;
    v12 = a1;
    result = v9(a1, a2, a3: a5, a4, a5: a6, a6: a1);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
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
  return sub_5027B20();
}
