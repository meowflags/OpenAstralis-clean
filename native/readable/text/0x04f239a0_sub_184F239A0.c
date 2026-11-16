// sub_4F239A0
// rva 0x04f239a0  size 171  section .text  group text
// window base 0x184f239a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F239A0(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+18h] [rbp-20h]
  __int64 v12; // [rsp+20h] [rbp-18h]
  unsigned int v13; // [rsp+2Ch] [rbp-Ch]
  unsigned int v14; // [rsp+30h] [rbp-8h]
  unsigned int v15; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
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
    return sub_4F23A60();
  }
  else
  {
    if ( *(_BYTE *)(a3 + 25) != 0 )
    {
      v14 = a1;
      v13 = a6;
      v12 = a5;
      v11 = a3;
      v15 = sub_6116840();
    }
    else
    {
      v15 = 0;
      v14 = a1;
      v13 = a6;
      v12 = a5;
      v11 = a3;
    }
    sub_4F25140(a1: v14, a2, a3: v11, a4, a5: v12, a6: v13);
    result = sub_6116940(a1: v7, a2: v8, a3: v15);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
