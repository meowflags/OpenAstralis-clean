// sub_181EA0880
// rva 0x01ea0880  size 279  section .text  group text
// window base 0x181ea0880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA0880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx

  v7 = *(_QWORD *)(a3 + 16);
  if ( v7 == 0 )
    JUMPOUT(0x181EA0979LL);
  if ( a5 != v6 )
  {
    v8 = *a5 >> 3;
    v9 = (unsigned int)v6[2 * v8 + 11];
    v10 = (unsigned int)v9 & (0x205u >> SBYTE3(v9));
    v11 = *(_QWORD *)((char *)&v6[2 * v8] + HIWORD(v6[2 * (unsigned int)v6[2 * v8 + 5] + 3 + v10]));
    ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))(v5 + v11))(
      a1: v10,
      a2: v9,
      a3: a5,
      a4: v11,
      a5: v7);
    JUMPOUT(0x181EA094FLL);
  }
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
  return sub_181EA09A0();
}
