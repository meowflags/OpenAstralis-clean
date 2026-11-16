// sub_1EBEFA0
// rva 0x01ebefa0  size 47  section .text  group text
// window base 0x181ebefa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBEFA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r15
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int v12; // esi
  int v13; // r8d
  int v14; // r9d
  char v15; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v15);
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
    return sub_1EBEFE0(a1: v11, a2: v12, a3: v9, a4: v10, a5: v13, a6: v14, a7);
  }
  else
  {
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return *(_DWORD *)(a3 + 8) != -1;
  }
}
