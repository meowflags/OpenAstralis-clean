// sub_184F56800
// rva 0x04f56800  size 170  section .text  group text
// window base 0x184f56800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F56800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v13; // [rsp+0h] [rbp-8h] BYREF

  v7 = a5;
  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0](a1, a2, a3, a4: a5);
    goto LABEL_11;
  }
  v8 = *(unsigned __int16 *)(v5 + 2LL * ((unsigned __int16)a5 >> 5) + 377194084) | ((unsigned __int16)a5 >> 1) & 0xFu;
  if ( (unsigned int)v8 >= 0x70 )
  {
LABEL_11:
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)v8, a4: v7, a5: 112);
    goto LABEL_12;
  }
  v9 = *(unsigned __int16 *)(v5 + 2 * v8 + 377198196) | (unsigned int)(v7 & 1);
  if ( (unsigned int)v9 >= 8 )
  {
LABEL_12:
    MEMORY[0x182771220](a1, a2, a3: v9, a4: v7, a5: 8);
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
    return sub_184F568C0();
  }
  v10 = *(unsigned int *)(v5 + 4 * v9 + 377198436);
  if ( (v10 & 0x20000) != 0 )
    v11 = (unsigned int)(v7 + ((32 * (int)v10) >> 23));
  else
    v11 = (unsigned int)v7;
  if ( *(int *)(v6 + 16) <= 0 )
    MEMORY[0x18277F280](a1, a2, a3: v10, a4: v7, a5: v11);
  return (unsigned int)v11;
}
