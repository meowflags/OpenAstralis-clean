// sub_18505BD60
// rva 0x0505bd60  size 148  section .text  group text
// window base 0x18505bd60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18505BD60(int a1, int a2, __int64 a3, __int64 a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v12 <= *(_QWORD *)(v9 + 8) )
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
    return sub_18505BE00();
  }
  else
  {
    result = *(_QWORD *)(v9 + 40);
    v11 = result + 24;
    if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v9 + 32) )
    {
      return sub_18505BDC7(a1, a2, a3, a4: v11, a5, a6, a7, a8);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v11;
      *(_DWORD *)result = 43319192;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_DWORD *)(result + 8) = 1;
      *(_DWORD *)(result + 4) = (unsigned __int64)(a3 - v8) >> 3;
      if ( *(int *)(v9 + 16) <= 0 )
      {
        v12[2] = a3;
        return MEMORY[0x18277F280]();
      }
    }
  }
  return result;
}
