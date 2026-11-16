// sub_1815A2BC0
// rva 0x015a2bc0  size 186  section .text  group text
// window base 0x1815a2bc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A2BC0(
        int a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  _QWORD v15[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-10h]
  __int64 v17; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)v15 <= *(_QWORD *)(v11 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815A2C80();
  }
  else
  {
    v12 = *(_QWORD *)(v11 + 40);
    if ( v12 + 40 > *(_QWORD *)(v11 + 32) )
    {
      return sub_1815A2C4F(a1, a2, a3, a4, a5: v12, a6, a7, a8, a9, a10);
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v12 + 40;
      *(_DWORD *)v12 = 35799216;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 32) = 0;
      v13 = v10 + 8LL * *(unsigned int *)(a3 + 4);
      v17 = a3;
      v16 = v12;
      v15[2] = v13;
      sub_1815A2220(a1, a2, a3: v12, a4, a5: v13, a6);
      if ( *(int *)(v11 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v16;
    }
  }
}
