// sub_184F25280
// rva 0x04f25280  size 55  section .text  group text
// window base 0x184f25280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F25280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-18h] BYREF
  int v8; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)v7 <= *(_QWORD *)(v5 + 8) )
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
    return sub_184F252C0();
  }
  else
  {
    v7[1] = a3;
    v8 = a5;
    result = sub_184F258E0();
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
