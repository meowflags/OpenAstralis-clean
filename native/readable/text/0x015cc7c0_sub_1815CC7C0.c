// sub_15CC7C0
// rva 0x015cc7c0  size 307  section .text  group text
// window base 0x1815cc7c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15CC7C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 result; // rax
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int64)v15 <= *(_QWORD *)(v13 + 8) )
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
    return sub_15CC900();
  }
  else
  {
    result = *(_QWORD *)(v13 + 40);
    if ( (unsigned __int64)(result + 40) > *(_QWORD *)(v13 + 32) )
    {
      return sub_1815CC875(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }
    else
    {
      *(_QWORD *)(v13 + 40) = result + 40;
      *(_DWORD *)result = 35309168;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_DWORD *)(result + 24) = (unsigned __int64)(a4 - v12) >> 3;
      *(_DWORD *)(result + 20) = (unsigned __int64)(a2 - v12) >> 3;
      *(_DWORD *)(result + 16) = (unsigned __int64)(a1 - v12) >> 3;
      *(_DWORD *)(result + 12) = (unsigned __int64)(a6 - v12) >> 3;
      *(_DWORD *)(result + 8) = (unsigned __int64)(a5 - v12) >> 3;
      *(_DWORD *)(result + 4) = (unsigned __int64)(a3 - v12) >> 3;
      if ( *(int *)(v13 + 16) <= 0 )
      {
        v15[6] = a4;
        v15[5] = a2;
        v15[4] = a1;
        v15[3] = a6;
        v15[2] = a5;
        v15[1] = a3;
        return sub_277F280();
      }
    }
  }
  return result;
}
