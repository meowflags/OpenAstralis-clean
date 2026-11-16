// sub_18502A500
// rva 0x0502a500  size 142  section .text  group text
// window base 0x18502a500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502A500(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+18h] [rbp-20h]
  __int64 v14; // [rsp+20h] [rbp-18h]
  unsigned int v15; // [rsp+28h] [rbp-10h]
  unsigned int v16; // [rsp+2Ch] [rbp-Ch]
  unsigned int v17; // [rsp+30h] [rbp-8h]
  unsigned int v18; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v18 = a1;
  v17 = a6;
  v14 = a5;
  v13 = a3;
  v16 = MEMORY[0x186116840]();
  v15 = MEMORY[0x184ECBCE0](a1: v18, a2: v8, a3: v13, a4: v7, a5: v14, a6: v17);
  MEMORY[0x186116940](a1: v9, a2: v10, a3: v16);
  if ( *(int *)(v6 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v15;
}
