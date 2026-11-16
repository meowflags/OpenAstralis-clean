// sub_15C5F20
// rva 0x015c5f20  size 237  section .text  group text
// window base 0x1815c5f20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C5F20(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 result; // rax
  __int64 v13; // rcx
  _QWORD v14[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int64)v14 <= *(_QWORD *)(v11 + 8) )
  {
    sub_1EB84E0();
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
    return sub_15C6020();
  }
  else
  {
    result = *(_QWORD *)(v11 + 40);
    v13 = result + 32;
    if ( (unsigned __int64)(result + 32) > *(_QWORD *)(v11 + 32) )
    {
      return sub_1815C5FB3(a1, a2, a3, a4: v13, a5, a6, a7, a8, a9, a10);
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v13;
      *(_DWORD *)result = 35847224;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_DWORD *)(result + 16) = (unsigned __int64)(a1 - v10) >> 3;
      *(_DWORD *)(result + 12) = (unsigned __int64)(a6 - v10) >> 3;
      *(_DWORD *)(result + 8) = (unsigned __int64)(a5 - v10) >> 3;
      *(_DWORD *)(result + 4) = (unsigned __int64)(a3 - v10) >> 3;
      if ( *(int *)(v11 + 16) <= 0 )
      {
        v14[4] = a1;
        v14[3] = a6;
        v14[2] = a5;
        v14[1] = a3;
        return sub_277F280();
      }
    }
  }
  return result;
}
