// sub_181ED3860
// rva 0x01ed3860  size 102  section .text  group text
// window base 0x181ed3860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED3860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  char v16; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v16);
    goto LABEL_9;
  }
  v8 = (_DWORD *)MEMORY[0x185039DE0](a1, a2, a3: v6 + 94165114);
  if ( v8 != v6 && *v8 >> 3 != 4260808 )
    goto LABEL_10;
  if ( v8 == v6 )
  {
LABEL_9:
    v8 = (_DWORD *)MEMORY[0x182771080]();
LABEL_10:
    MEMORY[0x18276FC00](a1: v10, a2: v11, a3: v8, a4: v9, a5: v6 + 8521616);
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
    return sub_181ED38E0(a1: v14, a2: v15, a3: v13);
  }
  if ( *(int *)(v7 + 16) <= 0 )
    v8 = (_DWORD *)MEMORY[0x18277F280]();
  return v8[1] == 0;
}
