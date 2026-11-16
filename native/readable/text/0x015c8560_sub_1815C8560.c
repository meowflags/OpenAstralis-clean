// sub_15C8560
// rva 0x015c8560  size 190  section .text  group text
// window base 0x1815c8560: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C8560(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+8h] [rbp-10h]
  int v11; // [rsp+10h] [rbp-8h]
  int v12; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15C8620();
  }
  else
  {
    result = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(result + 32) > *(_QWORD *)(v7 + 32) )
    {
      v12 = a6;
      v11 = a5;
      v10 = a3;
      result = sub_1EAA920(a1, a2, a3: 35853144);
      a6 = v12;
      a5 = v11;
      a3 = v10;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = result + 32;
      *(_DWORD *)result = 35853144;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
    }
    *(_BYTE *)(result + 20) = 1;
    *(_DWORD *)(result + 16) = a5;
    *(_DWORD *)(result + 12) = a6;
    *(_DWORD *)(result + 4) = (unsigned __int64)(a3 - v6) >> 3;
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v12 = a6;
      v11 = a5;
      v10 = a3;
      return sub_277F280();
    }
  }
  return result;
}
