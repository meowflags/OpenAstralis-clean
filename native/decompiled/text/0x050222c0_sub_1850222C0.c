// sub_1850222C0
// rva 0x050222c0  size 84  section .text  group text
// window base 0x1850222c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850222C0(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+1Ch] [rbp-Ch]
  unsigned int v10; // [rsp+20h] [rbp-8h]
  unsigned int v11; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v6 + 8) )
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
    return sub_185022320();
  }
  else
  {
    v8[2] = a6;
    v11 = a1;
    v8[1] = a3;
    v10 = a5;
    v9 = a2;
    result = MEMORY[0x185017700](a1: a5, a2, a3: a6, a4: a5, a5: a1, a6: a3);
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
