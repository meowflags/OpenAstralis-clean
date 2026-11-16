// sub_182782EA0
// rva 0x02782ea0  size 164  section .text  group text
// window base 0x182782ea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_182782EA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v9; // [rsp+40h] [rbp-8h]

  v2 = MEMORY[0x10E44820](a1, a2, a3: 419, a4: 1);
  if ( v2 == 0 )
    return 0;
  v9 = (v2 + 63) & 0xFFFFFFFFFFFFFFC0LL;
  *(_QWORD *)(v9 + 264) = v2;
  MEMORY[0x10E44200](a1: v4, a2: v5, a3: v3, a4: v9 + 80);
  MEMORY[0x10E44588](a1: v6, a2: v7, a3: v9, a4: v9 + 176);
  *(_QWORD *)(v9 + 256) = v9;
  return v9;
}
