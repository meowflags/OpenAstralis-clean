// sub_1815C7480
// rva 0x015c7480  size 136  section .text  group text
// window base 0x1815c7480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C7480(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v4 <= *(_QWORD *)(v2 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_1815C7520();
  }
  else
  {
    result = *(_QWORD *)(v2 + 40);
    if ( (unsigned __int64)(result + 32) > *(_QWORD *)(v2 + 32) )
    {
      result = MEMORY[0x181EAA920](a1, a2, a3: 35850152);
    }
    else
    {
      *(_QWORD *)(v2 + 40) = result + 32;
      *(_DWORD *)result = 35850152;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
    }
    *(_BYTE *)(result + 16) = 1;
    *(_DWORD *)(result + 8) = 1036831949;
    *(_DWORD *)(result + 4) = 1028443341;
    if ( *(int *)(v2 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
