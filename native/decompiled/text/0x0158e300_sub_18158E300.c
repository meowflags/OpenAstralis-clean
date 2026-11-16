// sub_18158E300
// rva 0x0158e300  size 139  section .text  group text
// window base 0x18158e300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18158E300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  int v8; // eax
  BOOL v9; // edx
  __int64 v10; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_14;
  }
  if ( a5 == a3 || a5 == v5 || *(_DWORD *)a5 >> 3 != 4474480 )
  {
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return a5 == a3;
  }
  v8 = *(_DWORD *)(a3 + 4);
  if ( v8 == 0 )
  {
LABEL_14:
    MEMORY[0x182771080]();
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
    return sub_18158E3A0();
  }
  if ( *(int *)(v6 + 16) <= 0 )
    v8 = MEMORY[0x18277F280]();
  v9 = *(_BYTE *)(a5 + 8) == *(_BYTE *)(a3 + 8);
  if ( *(_DWORD *)(a5 + 4) != v8 )
    JUMPOUT(0x302B1A36ALL);
  return v9;
}
