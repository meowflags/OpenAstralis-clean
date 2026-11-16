// sub_5031560
// rva 0x05031560  size 70  section .text  group text
// window base 0x185031560: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5031560(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 (*v8)(void); // rax
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v10 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v8 = (__int64 (*)(void))(v5 + *(_QWORD *)(v6 + 8LL * (*a3 >> 3) + 416));
  v10[2] = a3;
  v10[1] = a5;
  result = v8();
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
