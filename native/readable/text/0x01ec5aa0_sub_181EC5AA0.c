// sub_1EC5AA0
// rva 0x01ec5aa0  size 139  section .text  group text
// window base 0x181ec5aa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC5AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // r9d
  __int64 result; // rax
  __int64 v10; // r9
  char v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+10h] [rbp-18h]
  __int64 v13; // [rsp+18h] [rbp-10h]
  int v14; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    v13 = a5;
    v12 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v11);
    goto LABEL_11;
  }
  v8 = *(_DWORD *)(a3 + 8);
  result = (unsigned int)a5;
  if ( v8 == 0 || v8 != (_DWORD)a5 )
  {
    v10 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v10 != 0 )
    {
      v13 = a5;
      v12 = a3;
      v14 = a5;
      result = sub_1EBF720(a1, a2, a3: v6 + 8 * v10, a4, (unsigned int)a5, a6: 1);
      goto LABEL_5;
    }
LABEL_11:
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
    __builtin_debugtrap();
    return sub_1EC5B40();
  }
  v14 = a5;
  v13 = a5;
  v12 = a3;
LABEL_5:
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
