// sub_1E9FBC0
// rva 0x01e9fbc0  size 198  section .text  group text
// window base 0x181e9fbc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9FBC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx

  if ( *(int *)(v8 + 336) < 2 )
  {
    sub_28C1C40(a1, a2, a3: v7 + 366564920);
  }
  else
  {
    *(_DWORD *)(a5 + 40) = (unsigned __int64)(a3 - v7) >> 3;
    v9 = *(_QWORD *)(a3 + 40);
    if ( v9 != 0 )
      v10 = v9 - a5;
    else
      v10 = 0;
    *(_QWORD *)(a5 + 24) = v10;
    *(_QWORD *)(a5 + 16) = 0;
    if ( v9 != 0 )
    {
      if ( a5 != 0 )
        v11 = a5 - v9;
      else
        v11 = 0;
      *(_QWORD *)(v9 + 16) = v11;
    }
    *(_QWORD *)(a3 + 40) = a5;
    if ( *(_QWORD *)(a3 + 32) == 0 )
      *(_QWORD *)(a3 + 32) = a5;
    v12 = *(_DWORD *)(a3 + 12);
    if ( v12 != 0 )
      return sub_181E9FC42(a1, a2, a3: (int)v7 + 8 * v12, a4: (int)v7 + 8 * v12, a5: *(_QWORD *)a5, a6, a7);
  }
  sub_276EFE0();
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
  return sub_1E9FCA0();
}
