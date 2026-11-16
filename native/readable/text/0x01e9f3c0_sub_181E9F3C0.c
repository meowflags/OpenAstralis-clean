// sub_1E9F3C0
// rva 0x01e9f3c0  size 152  section .text  group text
// window base 0x181e9f3c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9F3C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  char v13; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v14; // [rsp+8h] [rbp-10h]
  __int64 v15; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    v15 = a3;
    sub_1EB84E0(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v13);
LABEL_12:
    sub_2771080();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1E9F460(a1: v11, a2: v12, a3: v10);
  }
  if ( a5 != v6 )
  {
    v8 = *a5 >> 3;
    if ( SHIWORD(v6[2 * v8 + 15]) < 3 || v6[2 * v6[2 * v8 + 4] + 5] != 20033 )
    {
      v15 = a3;
      sub_276FC00(a1, a2, a3: a5, a4, a5: v6 + 10115918);
    }
  }
  v15 = a3;
  v14 = a5;
  sub_1E806A0(a1, a2, a3: a5);
  if ( v14 == v6 )
    goto LABEL_12;
  result = (unsigned int)v14[4];
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
