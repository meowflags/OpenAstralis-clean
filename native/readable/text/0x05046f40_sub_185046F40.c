// sub_5046F40
// rva 0x05046f40  size 55  section .text  group text
// window base 0x185046f40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5046F40(int a1, int a2, __int64 a3, int a4, __int64 a5, int a6, char a7)
{
  int v7; // r14d
  __int64 v8; // r15
  __int64 result; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  int v14; // r8d
  int v15; // r9d
  char v16; // [rsp+0h] [rbp-18h] BYREF
  __int64 v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
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
    return sub_5046F80(a1: v12, a2: v13, a3: v10, a4: v11, a5: v14, a6: v15, a7);
  }
  else
  {
    v17 = a3;
    result = sub_5046F80(a1, a2, a3, a4, a5: v7 + 377212680, a6, a7: v16);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
