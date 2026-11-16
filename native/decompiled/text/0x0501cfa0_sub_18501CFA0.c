// sub_18501CFA0
// rva 0x0501cfa0  size 94  section .text  group text
// window base 0x18501cfa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501CFA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // r9d
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  _QWORD v14[2]; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+10h] [rbp-8h]
  int v16; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)v14 <= *(_QWORD *)(v6 + 8) )
  {
    v16 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v5 )
  {
    v7 = *(_DWORD *)(a5 + 8) >> 1;
    v14[1] = a5;
    v16 = a3;
    v15 = v7;
    result = MEMORY[0x18632A360](a1: v5 + 376643464, a2, a3, a4, a5: v7);
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v11, a2: v12, a3: v9, a4: v10, a5: v13, a6: v15);
    return result;
  }
  MEMORY[0x182771080]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_18501D000();
}
