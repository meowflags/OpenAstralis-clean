// sub_18158E500
// rva 0x0158e500  size 139  section .text  group text
// window base 0x18158e500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18158E500(int a1, int a2, __int64 a3, __int64 a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v9 + 8) )
  {
    v14 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_9;
  }
  v10 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_9:
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
    return sub_18158E5A0();
  }
  v11 = *(_DWORD *)(v8 + 8 * v10 + 16);
  if ( v11 == 0 )
    return sub_18158E54E(a1, a2, a3, a4: v10, a5, a6, a7, a8);
  if ( *(int *)(v9 + 16) <= 0 )
  {
    v14 = a3;
    v11 = MEMORY[0x18277F280]();
    a3 = v14;
  }
  if ( *(_BYTE *)(a3 + 8) != 0 )
    JUMPOUT(0x302B1A53ELL);
  return (unsigned int)(v11 + 38347);
}
