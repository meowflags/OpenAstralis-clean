// sub_184F45700
// rva 0x04f45700  size 75  section .text  group text
// window base 0x184f45700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F45700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 result; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  int v15; // r8d
  int v16; // r9d
  _QWORD v17[2]; // [rsp+0h] [rbp-18h] BYREF
  int v18; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)v17 <= *(_QWORD *)(v8 + 8) )
  {
    v18 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v7 )
  {
    v9 = *(unsigned int *)(a3 + 8);
    v17[1] = a3;
    v18 = a5;
    result = sub_184F45AA0(a1, a2, a3, a4: (unsigned int)a5, a5, a6: v9);
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
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
  return sub_184F45760(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15, a6: v16, a7);
}
