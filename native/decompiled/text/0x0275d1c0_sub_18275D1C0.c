// sub_18275D1C0
// rva 0x0275d1c0  size 88  section .text  group text
// window base 0x18275d1c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_18275D1C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  char *result; // rax
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  _DWORD *v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (char *)sub_18275D220();
  }
  else
  {
    v12 = a5;
    v11 = a3;
    sub_18275A260(a1, a2, a3, a4: (int)a5, a5);
    result = *(char **)(v11 + 8);
    if ( v12 == v5 )
      LODWORD(result) = *result;
    else
      LODWORD(result) = result[(_QWORD)v12];
    if ( *(int *)(v6 + 16) <= 0 )
      LODWORD(result) = sub_18277F280(a1: v7, a2: v8, a3: v11);
    return (char *)(int)result;
  }
}
