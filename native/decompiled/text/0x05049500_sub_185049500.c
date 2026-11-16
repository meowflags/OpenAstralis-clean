// sub_185049500
// rva 0x05049500  size 54  section .text  group text
// window base 0x185049500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185049500(int a1, int a2, __int64 a3, int a4, __int64 a5, int a6, char a7)
{
  __int64 v7; // r15
  __int64 result; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int v12; // esi
  int v13; // r8d
  int v14; // r9d
  char v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_185049540(a1: v11, a2: v12, a3: v9, a4: v10, a5: v13, a6: v14, a7);
  }
  else
  {
    v16 = a3;
    result = sub_185049540(a1, a2, a3, a4, a5: 0, a6, a7: v15);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
