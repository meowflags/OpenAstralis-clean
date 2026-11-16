// sub_5044240
// rva 0x05044240  size 62  section .text  group text
// window base 0x185044240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5044240(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  int v4; // eax
  __int64 v6; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v6 <= *(_QWORD *)(v3 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_5044280();
  }
  else
  {
    v4 = *(_DWORD *)(a3 + 136);
    if ( *(int *)(v3 + 16) <= 0 )
      v4 = sub_277F280();
    if ( v4 != 0 )
      JUMPOUT(0x30A05F26ALL);
    return 0;
  }
}
