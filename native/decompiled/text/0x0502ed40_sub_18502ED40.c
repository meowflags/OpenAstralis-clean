// sub_18502ED40
// rva 0x0502ed40  size 47  section .text  group text
// window base 0x18502ed40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502ED40()
{
  __int64 v0; // r14
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = *(unsigned int *)(v1 + 72);
  if ( (_DWORD)v2 == 0 )
    return v0;
  v3 = *(unsigned int *)(v0 + 8 * v2 + 72);
  if ( (_DWORD)v3 != 0 )
    return v0 + 8 * v3;
  else
    return v0 + 8 * v2;
}
