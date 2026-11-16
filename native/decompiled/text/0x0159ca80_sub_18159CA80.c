// sub_18159CA80
// rva 0x0159ca80  size 109  section .text  group text
// window base 0x18159ca80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159CA80()
{
  __int64 v0; // r14
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *(unsigned int *)(v0 + 376613504);
  if ( (_DWORD)v2 == 47076562 )
    v3 = v0 + 35127280;
  else
    v3 = v0 + 8 * v2;
  if ( v3 != v0 && *(_DWORD *)v3 >> 3 != 4261917 )
    goto LABEL_11;
  if ( v3 == v0 )
  {
    MEMORY[0x18276EFE0]();
LABEL_11:
    MEMORY[0x18276EAE0]();
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
    return sub_18159CB00();
  }
  return *(_BYTE *)(v3 + 4) != 0 && *(_QWORD *)(v0 + 376613408) == v1;
}
