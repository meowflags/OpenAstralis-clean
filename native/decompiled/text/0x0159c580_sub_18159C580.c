// sub_18159C580
// rva 0x0159c580  size 134  section .text  group text
// window base 0x18159c580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159C580(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 result; // rax
  int v7; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB83C0]();
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18159C620();
  }
  else
  {
    *(_DWORD *)(v4 + 376613336) = 0;
    result = sub_1815A85E0(a1, a2, a3: v4 + 376613360, a4, a5: 0);
    *(_QWORD *)(result + 16) = 0;
    *(_QWORD *)result = 0;
    *(_QWORD *)(result + 8) = 0;
    *(_BYTE *)(result + 24) = 0;
    *(_DWORD *)(v4 + 376613344) = -1;
    *(_DWORD *)(v4 + 376613348) = 0;
    *(_QWORD *)(v4 + 376613408) = 0;
    __faststorefence();
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
