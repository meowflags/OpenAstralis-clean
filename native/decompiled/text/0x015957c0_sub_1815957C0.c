// sub_1815957C0
// rva 0x015957c0  size 150  section .text  group text
// window base 0x1815957c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815957C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _BYTE v13[8]; // [rsp+10h] [rbp-18h] BYREF
  _BYTE *v14; // [rsp+18h] [rbp-10h]
  __int64 v15; // [rsp+20h] [rbp-8h]

  v15 = a3;
  v14 = v13;
  v3 = MEMORY[0x181EB6540](a1, a2, a3, a4: a3, a5: v13);
  if ( v3 != 0 )
    MEMORY[0x181EB6CE0](a1: v6, a2: v7, a3: v3, a4: v5, a5: 301999072);
  v8 = 1;
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)0x14, 3, 1) != 3 )
    MEMORY[0x18277F4A0](a1: v6, a2: v7, a3: 1, a4: 1, a5: 0);
  if ( *v14 == 0 )
    MEMORY[0x181EB79A0]();
  sub_181595540(a1: v6, a2: v7, a3: v4, a4: v8);
  result = MEMORY[0x181EB69E0]();
  if ( (_DWORD)result != 0 )
  {
    MEMORY[0x181EB6CE0](a1: v11, a2: v12, a3: (unsigned int)result, a4: v10, a5: 301999376);
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
    return sub_181595860();
  }
  return result;
}
