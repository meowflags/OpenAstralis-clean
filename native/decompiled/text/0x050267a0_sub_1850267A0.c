// sub_1850267A0
// rva 0x050267a0  size 70  section .text  group text
// window base 0x1850267a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850267A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v7 )
  {
    v9 = *(unsigned int *)(a5 + 28);
    if ( (_DWORD)v9 == 0 )
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
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_185026800(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15, a6: v16, a7);
    }
    if ( *(int *)(v8 + 16) <= 0 )
      v9 = MEMORY[0x18277F280]();
    return v7 + 8LL * *(unsigned int *)(v7 + 8 * v9 + 100);
  }
  MEMORY[0x182771080]();
  goto LABEL_9;
}
