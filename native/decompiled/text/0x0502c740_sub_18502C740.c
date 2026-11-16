// sub_18502C740
// rva 0x0502c740  size 46  section .text  group text
// window base 0x18502c740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502C740()
{
  __int64 v0; // r14
  __int64 v1; // r15
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v3 <= *(_QWORD *)(v1 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  *(_DWORD *)(v0 + 374472212) = 0;
  if ( *(int *)(v1 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
