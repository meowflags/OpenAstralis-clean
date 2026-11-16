// sub_2779880
// rva 0x02779880  size 173  section .text  group text
// window base 0x182779880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2779880(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  char *v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v8 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_2779940)();
  }
  else
  {
    v9 = *(unsigned int *)(v8 + 72);
    if ( (_DWORD)v9 != 0
      && ((_DWORD)(v14 = (unsigned int)v7[2 * v9 + 18]) == 0 ? (a4 = &v7[2 * v9]) : (a4 = &v7[2 * v14]),
          a4 != v7 && *a4 >> 3 == 5067607) )
    {
      v16 = a3;
      v17 = &a7;
      result = sub_2779940(a1, a2, a3: &a7, a4: v16, a5: v16);
    }
    else
    {
      v17 = &a7;
      v16 = a3;
      result = sub_277DB20(a1, a2, a3: &a7, a4, a5: a3);
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v12, a2: v13, a3: v11);
  }
  return result;
}
