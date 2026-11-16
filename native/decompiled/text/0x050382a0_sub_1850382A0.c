// sub_1850382A0
// rva 0x050382a0  size 86  section .text  group text
// window base 0x1850382a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850382A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  __int64 v6; // [rsp+10h] [rbp-8h]

  v6 = a3;
  if ( (unsigned __int64)&v5 <= *(_QWORD *)(v3 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  sub_1850379A0(a1, a2, a3);
  result = *(unsigned int *)(v6 + 8);
  if ( *(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 12) / 4 <= (int)result )
    result = sub_185039180();
  if ( *(int *)(v3 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
