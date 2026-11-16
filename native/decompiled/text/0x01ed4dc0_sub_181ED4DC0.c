// sub_181ED4DC0
// rva 0x01ed4dc0  size 143  section .text  group text
// window base 0x181ed4dc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED4DC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  char v20; // [rsp+0h] [rbp-18h] BYREF
  __int64 v21; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v20);
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
    return sub_181ED4E60(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7);
  }
  else
  {
    v21 = v7 + 376660576;
    result = MEMORY[0x1853F1A20](a1, a2, a3: v7 + 376660576);
    if ( result != v7 )
    {
      if ( MEMORY[0x1853F1A20](a1: v10, a2: v11, a3: v21) != v7 )
      {
        while ( MEMORY[0x1853F1A20](a1: v12, a2: v13, a3: v21) != v7 )
        {
          if ( *(int *)(v8 + 16) <= 0 )
            MEMORY[0x18277F280]();
        }
      }
      result = MEMORY[0x1827D6480](a1: v12, a2: v13, a3: v7 + 376660608);
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
