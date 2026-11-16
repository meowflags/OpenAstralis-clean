// sub_1815C79E0
// rva 0x015c79e0  size 166  section .text  group text
// window base 0x1815c79e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C79E0(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 result; // rax
  __int64 v7; // [rsp+0h] [rbp-18h] BYREF
  __int64 v8; // [rsp+8h] [rbp-10h]
  float v9; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v5 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815C7AA0();
  }
  else
  {
    result = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v5 + 32) )
    {
      v9 = a4;
      v8 = a3;
      result = MEMORY[0x181EAA920](a1, a2, a3: 35850672);
      a4 = v9;
      a3 = v8;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = result + 24;
      *(_DWORD *)result = 35850672;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
    }
    *(float *)(result + 8) = a4;
    *(_DWORD *)(result + 4) = (unsigned __int64)(a3 - v4) >> 3;
    if ( *(int *)(v5 + 16) <= 0 )
    {
      v9 = a4;
      v8 = a3;
      return MEMORY[0x18277F280]();
    }
  }
  return result;
}
