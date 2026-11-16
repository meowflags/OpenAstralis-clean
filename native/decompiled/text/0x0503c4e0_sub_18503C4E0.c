// sub_18503C4E0
// rva 0x0503c4e0  size 61  section .text  group text
// window base 0x18503c4e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18503C4E0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 (*v6)(void); // rax
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18503C520();
  }
  else
  {
    v6 = (__int64 (*)(void))(v3 + *(_QWORD *)(v4 + 8LL * (*a3 >> 3) + 136));
    v8[2] = a3;
    result = v6();
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
