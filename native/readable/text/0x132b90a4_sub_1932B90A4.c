// sub_132B90A4
// rva 0x132b90a4  size 54  section .text  group text
// window base 0x1932b90a4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B90A4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD a5, _DWORD a6, __int64 a7)
{
  a7 = a3;
  if ( a4 == -1 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)((unsigned int)__imp_KERNEL32.dll!SetFileInformationByHandle(a1, a2, a3: 6, a4, a5: &a7) != 0) - 1;
}
