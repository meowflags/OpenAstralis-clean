// sub_185022240
// rva 0x05022240  size 104  section .text  group text
// window base 0x185022240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185022240(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  int v7; // eax
  _QWORD v9[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+1Ch] [rbp-Ch]
  unsigned int v11; // [rsp+20h] [rbp-8h]
  int v12; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v9 <= *(_QWORD *)(v6 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1850222C0();
  }
  else
  {
    v9[2] = a3;
    v12 = a5;
    v9[1] = a6;
    v11 = a1;
    v10 = a2;
    v7 = sub_18501DC20(a1: a6, a2: a1, a3, a4: a2, a5, a6: a2);
    if ( *(int *)(v6 + 16) <= 0 )
      v7 = MEMORY[0x18277F280]();
    return v7 == 0;
  }
}
