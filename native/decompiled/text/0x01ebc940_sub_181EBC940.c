// sub_181EBC940
// rva 0x01ebc940  size 82  section .text  group text
// window base 0x181ebc940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBC940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  char v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v9);
  }
  else if ( *(_BYTE *)(a3 + 12) != 0 )
  {
    result = *(unsigned int *)(a3 + 8);
    *(_DWORD *)(v7 + 300) = result;
    *(_DWORD *)(a3 + 8) = 0;
    *(_BYTE *)(a3 + 12) = 0;
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v10 = a3;
  MEMORY[0x1828C1C40](a1, a2, a3: v6 + 368399904);
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
  return sub_181EBC9A0();
}
