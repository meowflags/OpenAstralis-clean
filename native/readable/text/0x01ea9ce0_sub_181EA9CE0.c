// sub_1EA9CE0
// rva 0x01ea9ce0  size 124  section .text  group text
// window base 0x181ea9ce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA9CE0(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v6; // r14
  __int64 v7; // rax

  if ( a1 != 0 )
  {
    if ( *a6 != 0 )
      v7 = v6 + 8LL * (unsigned int)*a6;
    else
      v7 = 0;
  }
  else
  {
    v7 = *(_QWORD *)a6;
  }
  if ( *(_DWORD *)(a3 + 4) != 0 )
    return sub_1E88140(
             a1: *(_QWORD *)(v6 + 376657408),
             a2: v7,
             a3: a6,
             a4: *(_QWORD *)(v6 + 376657400),
             a5: a1,
             a6: *(_QWORD *)(v6 + 376657400));
  sub_276EFE0();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_1EA9D60();
}
