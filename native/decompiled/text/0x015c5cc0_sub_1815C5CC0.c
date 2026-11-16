// sub_1815C5CC0
// rva 0x015c5cc0  size 134  section .text  group text
// window base 0x1815c5cc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C5CC0()
{
  __int64 v0; // r15
  int v1; // eax
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v6; // [rsp+0h] [rbp-18h] BYREF
  int v7; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v6 <= *(_QWORD *)(v0 + 8) )
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
    return sub_1815C5D60();
  }
  else
  {
    v1 = MEMORY[0x18CD92F40]();
    v4 = *(_QWORD *)(v0 + 40);
    if ( (unsigned __int64)(v4 + 24) > *(_QWORD *)(v0 + 32) )
    {
      v7 = v1;
      v4 = MEMORY[0x181EAA920](a1: v2, a2: v3, a3: 35846800);
      v1 = v7;
    }
    else
    {
      *(_QWORD *)(v0 + 40) = v4 + 24;
      *(_DWORD *)v4 = 35846800;
      *(_DWORD *)(v4 + 4) = 0;
      *(_QWORD *)(v4 + 8) = 0;
      *(_QWORD *)(v4 + 16) = 0;
    }
    *(_DWORD *)(v4 + 8) = v1 >> 3;
    if ( *(int *)(v0 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v4;
  }
}
