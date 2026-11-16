// sub_1E8E180
// rva 0x01e8e180  size 94  section .text  group text
// window base 0x181e8e180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E8E180(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  double v12; // xmm0_8
  char v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    v12 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v13);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1E8E1E0(a1: v12);
  }
  else
  {
    v14 = v6 + 376654816;
    result = sub_1EA7840(a1, a2, a3: v6 + 376652784, a4, a5: v6 + 376654816);
    if ( *(_BYTE *)(v6 + 376654992) != 0 )
      result = sub_1E84B20(a1: v10, a2: v11, a3: v6 + 376654168, a4: v9, a5: v14);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
