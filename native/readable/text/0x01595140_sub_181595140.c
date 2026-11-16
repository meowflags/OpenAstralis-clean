// sub_1595140
// rva 0x01595140  size 248  section .text  group text
// window base 0x181595140: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1595140(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned int v17; // [rsp+2Ch] [rbp-1Ch]

  MEMORY[0x12001380]/* 0x12001380 */(a1, a2, a3: 302000376, a4: 301999144);
  MEMORY[0x12002318]/* 0x12002318 */ = 4;
  MEMORY[0x12002338]/* 0x12002338 */ = a3;
  MEMORY[0x12002340]/* 0x12002340 */ = a5;
  MEMORY[0x1200234c]/* 0x1200234c */ = 0;
  MEMORY[0x1200234d]/* 0x1200234d */ = 1;
  v8 = sub_1EB6680(a1: v6, a2: v7, a3: 301998872);
  if ( v8 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)0x14, 3, 1) != 3 )
      sub_277F4A0(a1: v10, a2: v11, a3: 1, a4: v9, a5: 0);
    v8 = sub_1EB6D40(a1: v10, a2: v11, a3: 301998872);
  }
  if ( v8 != 0 )
  {
    v12 = sub_1EB6CE0(a1: v10, a2: v11, a3: v8, a4: v9, a5: 301998520);
  }
  else
  {
    v17 = sub_15954A0();
    v12 = sub_1EB69E0();
    if ( v12 == 0 )
    {
      sub_15957C0(a1: v14, a2: v15, a3: v5);
      return v17;
    }
  }
  sub_1EB6CE0(a1: v14, a2: v15, a3: v12, a4: v13, a5: 301999376);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_1595240();
}
