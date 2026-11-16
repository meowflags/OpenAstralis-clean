// sub_181596840
// rva 0x01596840  size 166  section .text  group text
// window base 0x181596840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181596840(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  unsigned int v17; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v4 + 8) )
  {
    v16 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v3 )
  {
    v5 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v5 == 0 )
    {
LABEL_12:
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
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_181596900();
    }
    v6 = *(_DWORD *)(v3 + 8 * v5 + 8);
    v7 = (unsigned int)*(char *)(a3 + 12);
    v8 = (v6 >> *(_BYTE *)(a3 + 12)) - 1;
    v16 = a3;
    v9 = MEMORY[0x184FF7A20](a1, a2, a3, a4: v7, a5: 46, a6: v8);
    if ( v9 == -1 )
    {
      v17 = 0xFFFFFFFF;
      result = v3 + 373281248;
    }
    else
    {
      v17 = v9;
      result = MEMORY[0x184FFD140](a1: v12, a2: v13, a3: v16, a4: v11, a5: 0, a6: v9);
    }
    if ( *(int *)(v4 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v12, a2: v13, a3: v10, a4: v17);
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_12;
}
