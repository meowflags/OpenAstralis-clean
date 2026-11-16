// sub_27625C0
// rva 0x027625c0  size 134  section .text  group text
// window base 0x1827625c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27625C0(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  char v12; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+8h] [rbp-10h]
  __int64 v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    v13 = a5;
    v14 = a3;
    sub_1EB84E0();
    goto LABEL_8;
  }
  if ( a5 != v6 && *a5 >> 3 != 4262015 )
    goto LABEL_9;
  if ( a5 == v6 )
  {
LABEL_8:
    v14 = a3;
    sub_2771080(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v12);
LABEL_9:
    sub_276FC00(a1, a2, a3: (_DWORD)a5, a4: a3, a5: (_DWORD)v6 + 34096120, a6, a7: v12);
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
    return sub_2762660();
  }
  v14 = a3;
  v13 = a5;
  result = sub_4F636E0(a1, a2, a3: a5);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v10, a2: v11, a3: v9);
  return result;
}
