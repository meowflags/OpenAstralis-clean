// sub_27881E0
// rva 0x027881e0  size 88  section .text  group text
// window base 0x1827881e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27881E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rsi

  if ( MEMORY[0x10e44740]/* 0x10e44740 */(a1, a2, a3: *(_QWORD *)(v2 + 373390680), a4: 0) != 0 )
    return MEMORY[0x10e44288]/* 0x10e44288 */(a1: v4, a2: v5, a3: v3, a4: *(_QWORD *)(v2 + 373390680));
  sub_28C1C40(a1: v4, a2: v5, a3: v2 + 366996480);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_2788240();
}
