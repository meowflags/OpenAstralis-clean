// sub_2778200
// rva 0x02778200  size 48  section .text  group text
// window base 0x182778200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2778200(int a1, int a2, __int64 a3, int a4, int a5, int a6, char a7)
{
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  char v18; // [rsp+0h] [rbp-18h] BYREF
  __int64 v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
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
    return sub_2778240(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7);
  }
  else
  {
    v19 = a3;
    result = sub_2778240(a1, a2, a3, a4, a5, a6, a7: v18);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v10, a2: v11, a3: v9);
  }
  return result;
}
