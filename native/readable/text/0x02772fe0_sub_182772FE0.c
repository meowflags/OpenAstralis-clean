// sub_2772FE0
// rva 0x02772fe0  size 155  section .text  group text
// window base 0x182772fe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_2772FE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  __int64 v12; // r14
  __int64 v13; // rax
  char v14; // [rsp+0h] [rbp-38h]

  if ( a5 == v12 )
  {
    sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v14);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_2773080();
  }
  else
  {
    v13 = *(_QWORD *)(a5 + 16);
    if ( v13 != 0 )
    {
      if ( a5 == v12 )
        JUMPOUT(0x304EBC005LL);
      sub_2772F80(a1: v13, a2: 0, a3, a4: a5 + 32, a5: a5 + 32, a6: 8 * *(_DWORD *)(a5 + 8) + a5 + 32);
    }
    else
    {
      sub_182773053(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }
  }
}
