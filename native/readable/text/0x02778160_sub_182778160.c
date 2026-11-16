// sub_2778160
// rva 0x02778160  size 148  section .text  group text
// window base 0x182778160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2778160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  _QWORD v11[2]; // [rsp+0h] [rbp-18h] BYREF
  int v12; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)v11 <= *(_QWORD *)(v6 + 8) )
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
    return sub_2778200();
  }
  if ( (_DWORD)a3 != 0 )
  {
    v11[1] = a5;
    v12 = a3;
    result = sub_58D7440(a1, a2, a3: v5 + 376257960);
    if ( *(int *)(v6 + 16) > 0 )
      return result;
    return sub_277F280(a1: v9, a2: v10, a3: v8);
  }
  v12 = 0;
  if ( a5 == v5 )
  {
    result = sub_58D7440(a1, a2, a3: v5 + 376257960);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280(a1: v9, a2: v10, a3: v8);
  }
  else
  {
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280(a1, a2, a3);
    return a5;
  }
  return result;
}
