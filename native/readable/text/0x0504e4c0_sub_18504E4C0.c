// sub_504E4C0
// rva 0x0504e4c0  size 158  section .text  group text
// window base 0x18504e4c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504E4C0(int a1, int a2, __int64 a3, __int64 a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v11 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_504E560();
  }
  else
  {
    result = *(_QWORD *)(v8 + 40);
    v10 = result + 48;
    if ( (unsigned __int64)(result + 48) > *(_QWORD *)(v8 + 32) )
    {
      return sub_18504E532(a1, a2, a3, a4: v10, a5, a6, a7, a8);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v10;
      *(_DWORD *)result = 34162832;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_DWORD *)(result + 20) = 1061158912;
      if ( *(int *)(v8 + 16) <= 0 )
      {
        v11[2] = a3;
        return sub_277F280();
      }
    }
  }
  return result;
}
