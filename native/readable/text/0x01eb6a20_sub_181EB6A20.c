// sub_1EB6A20
// rva 0x01eb6a20  size 146  section .text  group text
// window base 0x181eb6a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB6A20(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15

  if ( a3 != 0 && *(_DWORD *)(v5 + 72) == 0 )
  {
    sub_28C1C40(a1, a2, a3: v4 + 351110000);
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
    return sub_1EB6AC0();
  }
  else
  {
    sub_277A360(a1, a2, a3: v4, a4, a5: v4, a6: 1);
    return 0;
  }
}
