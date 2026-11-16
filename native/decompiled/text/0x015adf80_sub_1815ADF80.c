// sub_1815ADF80
// rva 0x015adf80  size 116  section .text  group text
// window base 0x1815adf80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815ADF80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // r8
  _QWORD v11[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v11 <= *(_QWORD *)(v8 + 8) )
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
    return sub_1815AE000();
  }
  else
  {
    result = *(_QWORD *)(v8 + 40);
    v10 = result + 16;
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v8 + 32) )
    {
      return sub_1815ADFC7(a1, a2, a3, a4: 35803056, a5: v10, a6, a7, a8);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v10;
      *(_QWORD *)result = 35803056;
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 12) = 0;
      if ( *(int *)(v8 + 16) <= 0 )
      {
        v11[2] = a3;
        return MEMORY[0x18277F280](a1, a2, a3, a4: 35803056);
      }
    }
  }
  return result;
}
