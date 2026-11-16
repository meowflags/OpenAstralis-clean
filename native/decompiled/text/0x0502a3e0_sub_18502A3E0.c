// sub_18502A3E0
// rva 0x0502a3e0  size 110  section .text  group text
// window base 0x18502a3e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502A3E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+18h] [rbp-10h]
  unsigned int v11; // [rsp+20h] [rbp-8h]
  unsigned int v12; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v3 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v10 = a3;
  v12 = MEMORY[0x186116840]();
  v11 = MEMORY[0x184ECB100](a1: v4, a2: v5, a3: v10);
  MEMORY[0x186116940](a1: v6, a2: v7, a3: v12);
  if ( *(int *)(v3 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v11;
}
