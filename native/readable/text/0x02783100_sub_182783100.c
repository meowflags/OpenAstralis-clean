// sub_2783100
// rva 0x02783100  size 136  section .text  group text
// window base 0x182783100: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2783100(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 i; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d

  if ( *(int *)(v8 + 336) < 1 )
  {
    sub_28C1C40(a1, a2, a3: v7 + 368616744);
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
    return sub_27831A0(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7);
  }
  else
  {
    v9 = *(_QWORD *)(v7 + 376178832);
    if ( v9 == 0 )
      return 0;
    if ( v9 != a3 )
    {
      for ( i = *(_QWORD *)(v9 + 256); i != 0; i = *(_QWORD *)(i + 256) )
      {
        if ( i == a3 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
}
