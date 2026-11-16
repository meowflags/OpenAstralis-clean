// sub_181EAEAC0
// rva 0x01eaeac0  size 87  section .text  group text
// window base 0x181eaeac0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EAEAC0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 result; // rax

  if ( a1 != nullptr )
  {
    *(_QWORD *)(a5 + 128) = a1;
    *(_QWORD *)(a5 + 136) = a6;
    if ( (_DWORD)a2 != 0 )
      *a1 = (__int64)a6 >> 4 << 56;
  }
  else
  {
    MEMORY[0x1828C1C40](a1: 0, a2, a3: v6 + 361300432);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181EAEB20();
  }
  return result;
}
