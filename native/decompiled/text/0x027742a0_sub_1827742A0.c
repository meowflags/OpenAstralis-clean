// sub_1827742A0
// rva 0x027742a0  size 86  section .text  group text
// window base 0x1827742a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827742A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int64)v12 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB83C0]();
    JUMPOUT(0x1827742F6LL);
  }
  v12[3] = a3;
  v12[6] = a5;
  v12[5] = a6;
  v12[4] = a1;
  v12[2] = a2;
  result = sub_182774080(a1, a2: v6, a3, a4: a2, a5, a6);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1: v10, a2: v11, a3: v9);
  return result;
}
