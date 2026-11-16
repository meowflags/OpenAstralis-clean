// sub_4F40EE0
// rva 0x04f40ee0  size 64  section .text  group text
// window base 0x184f40ee0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F40EE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v7; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    return sub_4F40F20();
  }
  else
  {
    if ( *(_BYTE *)(a3 + 4) != 0 )
      v5 = v3 + 350970688;
    else
      v5 = v3 + 361697768;
    if ( *(int *)(v4 + 16) <= 0 )
      sub_277F280(a1, a2, a3, a4: v5);
    return v5;
  }
}
