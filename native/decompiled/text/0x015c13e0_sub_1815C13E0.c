// sub_1815C13E0
// rva 0x015c13e0  size 86  section .text  group text
// window base 0x1815c13e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C13E0(__int64 a1, __int64 a2)
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
    return sub_1815C1440();
  }
  else
  {
    result = *(_QWORD *)(v2 + 40);
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v2 + 32) )
    {
      result = MEMORY[0x181EAA920](a1, a2, a3: 35840568);
    }
    else
    {
      *(_QWORD *)(v2 + 40) = result + 16;
      *(_DWORD *)result = 35840568;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
    }
    if ( *(int *)(v2 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
