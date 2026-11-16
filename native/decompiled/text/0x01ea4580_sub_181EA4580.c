// sub_181EA4580
// rva 0x01ea4580  size 55  section .text  group text
// window base 0x181ea4580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_181EA4580(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax

  v3 = *(_QWORD *)(v2 + 376178832);
  if ( *(_QWORD *)(v3 + 256) != 0 )
  {
    MEMORY[0x1828C1C40](a1, a2, a3: v2 + 368047304);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_181EA45C0();
  }
  else
  {
    sub_181E99600(a1, a2, a3: *(_QWORD **)(v3 + 48));
  }
}
