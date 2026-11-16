// sub_181E9FB20
// rva 0x01e9fb20  size 139  section .text  group text
// window base 0x181e9fb20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9FB20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8

  *(_DWORD *)(a5 + 40) = (unsigned __int64)(a3 - v5) >> 3;
  v6 = *(_QWORD *)(a3 + 24);
  if ( v6 != 0 )
    v7 = v6 - a5;
  else
    v7 = 0;
  *(_QWORD *)(a5 + 24) = v7;
  *(_QWORD *)(a5 + 16) = 0;
  if ( v6 != 0 )
  {
    if ( a5 != 0 )
      v8 = a5 - v6;
    else
      v8 = 0;
    *(_QWORD *)(v6 + 16) = v8;
  }
  *(_QWORD *)(a3 + 24) = a5;
  if ( *(_QWORD *)(a3 + 16) == 0 )
    *(_QWORD *)(a3 + 16) = a5;
  v9 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v9 != 0 )
  {
    ++*(_QWORD *)(v5 + 8 * v9 + 16);
    result = *(unsigned int *)(v5 + 8 * v9 + 4);
    if ( (_DWORD)result != 0 )
      ++*(_QWORD *)(v5 + 376653760);
  }
  else
  {
    MEMORY[0x18276EFE0]();
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
    return sub_181E9FBC0(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15);
  }
  return result;
}
