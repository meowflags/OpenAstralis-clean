// sub_181E911A0
// rva 0x01e911a0  size 150  section .text  group text
// window base 0x181e911a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E911A0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, int a5, int a6)
{
  _QWORD *v6; // r14
  __int64 v7; // rsi
  int v8; // esi
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rax
  int v12; // eax

  if ( a3 == v6 )
  {
    MEMORY[0x18276EFE0]();
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
    return sub_181E91240();
  }
  else
  {
    v7 = a3[8];
    if ( v7 < 0 )
      v8 = 0;
    else
      v8 = (_DWORD)v6 + v7;
    v9 = a3[9];
    if ( v9 < 0 )
      v10 = 0;
    else
      v10 = (_DWORD)v6 + v9;
    v11 = a3[10];
    if ( v11 < 0 )
      v12 = 0;
    else
      v12 = (_DWORD)v6 + v11;
    return sub_181EABDA0(a1: v12, a2: a5, a3: (int)v6 + 376654616, a4: a6, a5: v8, a6: v10);
  }
}
