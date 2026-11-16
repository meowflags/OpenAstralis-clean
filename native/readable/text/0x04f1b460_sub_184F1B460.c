// sub_4F1B460
// rva 0x04f1b460  size 405  section .text  group text
// window base 0x184f1b460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F1B460(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r14
  _QWORD *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int64)&v16 <= v11[1] )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F1B600();
  }
  else
  {
    if ( a5 < 256 )
      JUMPOUT(0x184F1B523LL);
    v12 = v11[5];
    if ( (unsigned __int64)(v12 + 16) > v11[4] )
      JUMPOUT(0x184F1B58BLL);
    v11[5] = v12 + 16;
    *(_QWORD *)v12 = 34082368;
    *(_DWORD *)(v12 + 8) = 2;
    *(_DWORD *)(v12 + 12) = 0;
    *(_WORD *)(v12 + 12) = a5;
    v13 = v11[5];
    if ( (unsigned __int64)(v13 + 24) > v11[4] )
      JUMPOUT(0x184F1B558LL);
    v11[5] = v13 + 24;
    *(_DWORD *)v13 = 34082680;
    *(_DWORD *)(v13 + 4) = 0;
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 16) = 0;
    *(_BYTE *)(v13 + 12) = 1;
    v14 = (unsigned __int64)(v12 - v10) >> 3;
    *(_DWORD *)(v13 + 4) = v14;
    return sub_184F1B509(a1, a2, a3, a4: v14, a5: v13, a6, a7, a8, a9, a10);
  }
}
