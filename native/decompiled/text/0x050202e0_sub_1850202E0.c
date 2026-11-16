// sub_1850202E0
// rva 0x050202e0  size 148  section .text  group text
// window base 0x1850202e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850202E0(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+10h] [rbp-18h]
  int v10; // [rsp+1Ch] [rbp-Ch]
  unsigned int v11; // [rsp+20h] [rbp-8h]
  unsigned int v12; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
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
    return sub_185020380();
  }
  if ( a5 >= 0x10000 )
  {
    v11 = a6;
    v12 = a1;
    v9 = a3;
    v10 = a5;
    result = sub_185020B00();
    if ( *(int *)(v6 + 16) > 0 )
      return result;
    return MEMORY[0x18277F280]();
  }
  v12 = a1;
  v11 = a6;
  v10 = a5;
  v9 = a3;
  result = MEMORY[0x1828310E0](a1: a6, a2: (unsigned __int16)a5, a3, a4, a5: 12, a6: a1);
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
