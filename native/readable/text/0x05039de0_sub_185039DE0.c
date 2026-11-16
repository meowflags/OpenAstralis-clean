// sub_5039DE0
// rva 0x05039de0  size 95  section .text  group text
// window base 0x185039de0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5039DE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v9 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_5039E40)();
  }
  else
  {
    v5 = *(unsigned int *)(v4 + 72);
    if ( (_DWORD)v5 != 0 )
    {
      v6 = *(unsigned int *)(v3 + 8 * v5 + 72);
      if ( (_DWORD)v6 != 0 )
        v7 = v3 + 8 * v6;
      else
        v7 = v3 + 8 * v5;
    }
    else
    {
      v7 = v3;
    }
    v9[2] = a3;
    result = sub_5039E40(a1, a2, a3, a4: a3, a5: v7);
    if ( *(int *)(v4 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
