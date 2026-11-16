// sub_1815C12E0
// rva 0x015c12e0  size 240  section .text  group text
// window base 0x1815c12e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C12E0(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 result; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v11 + 8) )
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
    return sub_1815C13E0();
  }
  else
  {
    result = *(_QWORD *)(v11 + 40);
    v13 = result + 40;
    if ( (unsigned __int64)(result + 40) > *(_QWORD *)(v11 + 32) )
    {
      return sub_1815C136C(a1, a2, a3, a4: v13, a5, a6, a7, a8, a9, a10);
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v13;
      *(_DWORD *)result = 35840424;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_DWORD *)(result + 24) = a1;
      *(_DWORD *)(result + 20) = a6;
      *(_DWORD *)(result + 16) = (unsigned __int64)(a2 - v10) >> 3;
      *(_DWORD *)(result + 8) = a5;
      v14 = (unsigned __int64)(a3 - v10) >> 3;
      *(_DWORD *)(result + 4) = v14;
      if ( *(int *)(v11 + 16) <= 0 )
        return sub_1815C13AB(a1, a2, a3, a4: v14, a5, a6, a7, a8, a9, a10);
    }
  }
  return result;
}
