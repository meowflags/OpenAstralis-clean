// sub_185027BE0
// rva 0x05027be0  size 123  section .text  group text
// window base 0x185027be0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185027BE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+8h] [rbp-30h]
  __int64 v11; // [rsp+10h] [rbp-28h]
  __int64 v12; // [rsp+18h] [rbp-20h]
  __int64 v13; // [rsp+20h] [rbp-18h]
  __int64 v14; // [rsp+28h] [rbp-10h]
  int v15; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    v15 = a4;
    v10 = a2;
    v11 = a1;
    v12 = a6;
    v14 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v6 )
  {
    v14 = a3;
    v13 = a5;
    v12 = a6;
    v11 = a1;
    v10 = a2;
    v15 = a4;
    result = MEMORY[0x184F9ED80](a1: a2, a2: (unsigned int)a4, a3: a5, a4, a5: a6, a6: a1);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_185027C60();
}
