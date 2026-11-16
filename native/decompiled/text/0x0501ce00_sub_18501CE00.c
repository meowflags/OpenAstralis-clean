// sub_18501CE00
// rva 0x0501ce00  size 107  section .text  group text
// window base 0x18501ce00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501CE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // edi
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-28h] BYREF
  int v11; // [rsp+1Ch] [rbp-Ch]
  int v12; // [rsp+20h] [rbp-8h]
  unsigned int v13; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v10 <= *(_QWORD *)(v7 + 8) )
  {
    v11 = a5;
    v12 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a6 != v6 )
  {
    v8 = *(_DWORD *)(a6 + 8) >> 1;
    v10[2] = a6;
    v13 = v8;
    v12 = a3;
    v11 = a5;
    result = MEMORY[0x18632A360](a1: v6 + 376643464, a2, a3, a4: (unsigned int)a3, a5, a6: v8);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v13);
    return result;
  }
  MEMORY[0x182771080]();
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
  return sub_18501CE80();
}
