// sub_1EB82C0
// rva 0x01eb82c0  size 86  section .text  group text
// window base 0x181eb82c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB82C0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax

  if ( a3 <= a5 )
    goto LABEL_6;
  if ( a5 == 1 )
  {
    *(_QWORD *)(v6 + 8) += 0x8000LL;
    return result;
  }
  if ( a5 < 1 )
  {
LABEL_6:
    if ( a3 <= a5 )
      JUMPOUT(0x303D42300LL);
    sub_28C1C40(a1, a2, a3: v5 + 367048928);
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
    return sub_1EB8320();
  }
  return result;
}
