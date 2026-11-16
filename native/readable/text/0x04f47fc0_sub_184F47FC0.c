// sub_4F47FC0
// rva 0x04f47fc0  size 54  section .text  group text
// window base 0x184f47fc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F47FC0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  int v4; // eax
  _DWORD v6[6]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v6 <= *(_QWORD *)(v3 + 8) )
  {
    sub_1EB84E0();
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
    return sub_4F48000();
  }
  else
  {
    v6[5] = a3;
    v4 = sub_4F47B80(a1, a2, a3);
    if ( *(int *)(v3 + 16) <= 0 )
      v4 = sub_277F280();
    return v4 != 0;
  }
}
