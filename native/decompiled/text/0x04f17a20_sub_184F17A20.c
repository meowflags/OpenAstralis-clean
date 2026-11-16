// sub_184F17A20
// rva 0x04f17a20  size 280  section .text  group text
// window base 0x184f17a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F17A20(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v11 + 8) )
    JUMPOUT(0x184F17B19LL);
  v12 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v12 != 0 )
  {
    if ( *(int *)(v11 + 16) <= 0 )
      JUMPOUT(0x184F17B05LL);
    return v10 + 8 * v12;
  }
  else
  {
    v14 = *(unsigned int *)(a3 + 16);
    if ( (_DWORD)v14 != 0 )
    {
      if ( *(int *)(v11 + 16) <= 0 )
        JUMPOUT(0x184F17B0FLL);
      return v10 + 8 * v14;
    }
    else
    {
      return sub_184F17A6E(a1, a2, a3, a4: v10, a5, a6, a7, a8, a9, a10);
    }
  }
}
