// sub_184F417C0
// rva 0x04f417c0  size 102  section .text  group text
// window base 0x184f417c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F417C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  _DWORD *v8; // rcx
  __int64 v10; // [rsp+0h] [rbp-8h] BYREF

  v7 = a3;
  v8 = a5;
  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0](a1, a2, a3, a4: a5);
    goto LABEL_9;
  }
  if ( a5 != v5 )
  {
    a3 = *a5 >> 3;
    if ( (_DWORD)a3 != 4288437 )
      goto LABEL_10;
  }
  if ( a5 == v5 )
  {
LABEL_9:
    MEMORY[0x182771080](a1, a2, a3, a4: v8);
LABEL_10:
    MEMORY[0x18276FC00](a1, a2, a3: v8, a4: v8, a5: v5 + 8576874);
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
    return sub_184F41840();
  }
  if ( *(int *)(v6 + 16) <= 0 )
    v7 = MEMORY[0x18277F280](a1, a2, a3, a4: a5);
  return (unsigned int)(*(char *)(v7 + 4) - *((char *)v8 + 4));
}
