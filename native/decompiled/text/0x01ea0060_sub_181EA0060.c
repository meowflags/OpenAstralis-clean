// sub_181EA0060
// rva 0x01ea0060  size 248  section .text  group text
// window base 0x181ea0060: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA0060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi

  v6 = *(_QWORD *)(a5 + 16);
  if ( v6 != 0 )
    v7 = a5 + v6;
  else
    v7 = 0;
  v8 = *(_QWORD *)(a5 + 24);
  if ( v8 != 0 )
    v9 = a5 + v8;
  else
    v9 = 0;
  if ( v9 != 0 )
  {
    if ( v7 != 0 )
      v10 = v7 - v9;
    else
      v10 = 0;
    *(_QWORD *)(v9 + 16) = v10;
  }
  else
  {
    *(_QWORD *)(a3 + 32) = v7;
  }
  if ( v7 != 0 )
  {
    if ( v9 != 0 )
      v11 = v9 - v7;
    else
      v11 = 0;
    *(_QWORD *)(v7 + 24) = v11;
  }
  else
  {
    *(_QWORD *)(a3 + 40) = v9;
  }
  *(_QWORD *)(a5 + 16) = 0;
  *(_QWORD *)(a5 + 24) = 0;
  *(_DWORD *)(a5 + 40) = 0;
  v12 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v12 != 0 )
    return MEMORY[0x181E80360](a1, a2, a3: v5 + 8 * v12, a4: v9, a5: *(_QWORD *)a5);
  MEMORY[0x18276EFE0]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_181EA0160(a1: v15, a2: v16, a3: v14);
}
