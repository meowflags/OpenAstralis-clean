// sub_15A1320
// rva 0x015a1320  size 158  section .text  group text
// window base 0x1815a1320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A1320(int a1, int a2, __int64 a3, __int64 a4, int a5, int a6, int a7, __int64 a8)
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
    return sub_15A13C0();
  }
  else
  {
    result = *(_QWORD *)(v8 + 40);
    v10 = result + 40;
    if ( (unsigned __int64)(result + 40) > *(_QWORD *)(v8 + 32) )
    {
      return sub_1815A1390(a1, a2, a3, a4: v10, a5, a6, a7, a8);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v10;
      *(_DWORD *)result = 35799040;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_DWORD *)(result + 16) = -1;
      *(_DWORD *)(result + 4) = *(_DWORD *)(a3 + 4);
      if ( *(int *)(v8 + 16) <= 0 )
      {
        v11[2] = a3;
        return sub_277F280();
      }
    }
  }
  return result;
}
