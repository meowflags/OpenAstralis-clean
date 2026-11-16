// sub_5039F20
// rva 0x05039f20  size 185  section .text  group text
// window base 0x185039f20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5039F20(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+8h] [rbp-10h]
  _DWORD *v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    v11 = a3;
    sub_1EB84E0();
LABEL_13:
    v11 = a3;
    sub_2771080();
    goto LABEL_14;
  }
  v12 = a5;
  v8 = *a3 >> 3;
  if ( SHIWORD(v6[2 * v8 + 15]) < 4 || v6[2 * v6[2 * v8 + 4] + 6] != 71171 )
  {
    if ( a5 != v6 )
    {
      v11 = a3;
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*a5 >> 3) + 98]))(
                 a1,
                 a2,
                 a3: a5);
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_277F280();
    }
    goto LABEL_13;
  }
  v11 = a3;
  if ( a5 == v6 )
  {
LABEL_14:
    sub_2771080();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_5039FE0();
  }
  result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*a5 >> 3) + 94]))(
             a1,
             a2,
             a3: a5);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
