// sub_18501DFE0
// rva 0x0501dfe0  size 64  section .text  group text
// window base 0x18501dfe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501DFE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  int v6; // eax
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    return sub_18501E020();
  }
  else
  {
    v8[2] = a5;
    v8[1] = a3;
    v6 = MEMORY[0x185015680](a1, a2, a3: a5, a4, a5: a3);
    if ( *(int *)(v5 + 16) <= 0 )
      v6 = MEMORY[0x18277F280]();
    return (unsigned int)-v6;
  }
}
