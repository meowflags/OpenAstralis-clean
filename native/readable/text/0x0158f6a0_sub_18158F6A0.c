// sub_158F6A0
// rva 0x0158f6a0  size 175  section .text  group text
// window base 0x18158f6a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_158F6A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *); // rax
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+10h] [rbp-18h]
  _DWORD *v13; // [rsp+18h] [rbp-10h]
  _DWORD *v14; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v8 + 8) )
  {
    v14 = a6;
    v13 = a5;
    v12 = a3;
    sub_1EB84E0();
    goto LABEL_8;
  }
  if ( a5 != v7 && *a5 >> 3 != 4260335 )
    goto LABEL_9;
  if ( a6 == v7 )
  {
LABEL_8:
    v14 = a6;
    v13 = a5;
    v12 = a3;
    sub_2771080();
LABEL_9:
    sub_276FC00(a1, a2, a3: a5, a4: a3, a5: v7 + 8520670);
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
    return sub_158F760();
  }
  v12 = a3;
  v9 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*a6 >> 3) + 64]);
  v14 = a6;
  v13 = a5;
  result = v9(a1, a2, a3: a6);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
