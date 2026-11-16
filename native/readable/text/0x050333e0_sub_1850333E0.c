// sub_50333E0
// rva 0x050333e0  size 60  section .text  group text
// window base 0x1850333e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50333E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  int v6; // eax
  __int64 v8; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v6 = *(_DWORD *)(a3 + 12);
  if ( a5 != 0 )
    *(_DWORD *)(a3 + 12) = v6 & 0xFFFFFFFB;
  else
    *(_DWORD *)(a3 + 12) = v6 | 4;
  if ( *(int *)(v5 + 16) <= 0 )
    sub_277F280();
  return a3;
}
