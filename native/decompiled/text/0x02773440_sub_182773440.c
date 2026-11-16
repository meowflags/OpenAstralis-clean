// sub_182773440
// rva 0x02773440  size 47  section .text  group text
// window base 0x182773440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182773440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int64)v8 > *(_QWORD *)(v6 + 8) )
  {
    v8[2] = a1;
    v8[1] = a3;
    v8[4] = a5;
    v8[3] = a6;
    sub_182772E80(a1, a2, a3: a5, a4, a5: a6);
  }
  MEMORY[0x181EB83C0]();
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
  return sub_182773480();
}
