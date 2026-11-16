// sub_5027E20
// rva 0x05027e20  size 87  section .text  group text
// window base 0x185027e20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5027E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64, __int64, _DWORD *); // rax
  __int64 result; // rax
  _QWORD v10[2]; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)v10 <= *(_QWORD *)(v7 + 8) )
  {
    v11 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v6 )
  {
    v11 = a3;
    v8 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*a5 >> 3) + 34]);
    v10[1] = a5;
    result = v8(a1, a2, a3: a5);
    if ( *(int *)(v7 + 16) <= 0 )
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
  return sub_5027E80();
}
