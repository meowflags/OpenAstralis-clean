// sub_184F23900
// rva 0x04f23900  size 145  section .text  group text
// window base 0x184f23900: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F23900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+18h] [rbp-10h]
  unsigned int v11; // [rsp+20h] [rbp-8h]
  unsigned int v12; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_184F239A0();
  }
  else
  {
    if ( *(_BYTE *)(a3 + 25) != 0 )
    {
      v11 = a5;
      v10 = a3;
      v12 = MEMORY[0x186116840]();
    }
    else
    {
      v12 = 0;
      v11 = a5;
      v10 = a3;
    }
    sub_184F24DE0(a1, a2, a3: v10, a4, a5: v11);
    result = MEMORY[0x186116940](a1: v6, a2: v7, a3: v12);
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
