// sub_4F17C60
// rva 0x04f17c60  size 83  section .text  group text
// window base 0x184f17c60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F17C60(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 (*v6)(void); // rax
  int v7; // eax
  _QWORD v9[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v9 <= *(_QWORD *)(v5 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F17CC0();
  }
  else
  {
    v6 = (__int64 (*)(void))(v3 + *(_QWORD *)(v4 + 8LL * (*a3 >> 3) + 160));
    v9[2] = a3;
    v7 = v6();
    if ( *(int *)(v5 + 16) <= 0 )
      v7 = sub_277F280();
    if ( v7 != 76 )
      JUMPOUT(0x309E2DC9FLL);
    return 0;
  }
}
