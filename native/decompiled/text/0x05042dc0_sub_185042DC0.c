// sub_185042DC0
// rva 0x05042dc0  size 75  section .text  group text
// window base 0x185042dc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185042DC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  int v6; // ecx
  _QWORD v8[3]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+18h] [rbp-10h]
  int v10; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v4 + 8) )
    goto LABEL_4;
  v5 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v5 != 0 )
  {
    v6 = *(char *)(a3 + 8);
    v9 = a3;
    v10 = v6;
    v8[2] = v3 + 8 * v5;
    MEMORY[0x1828C1C40](a1, a2, a3: v3 + 353318040);
LABEL_4:
    v9 = a3;
    MEMORY[0x181EB84E0]();
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
  return sub_185042E20();
}
