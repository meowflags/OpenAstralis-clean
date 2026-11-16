// sub_2763940
// rva 0x02763940  size 144  section .text  group text
// window base 0x182763940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2763940(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  BOOL v7; // ecx
  __int64 v9; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v6 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_27639E0();
  }
  else
  {
    if ( a5 == a3 )
    {
      v7 = true;
    }
    else if ( a5 == v5 )
    {
      v7 = false;
    }
    else if ( *a5 >> 3 == 5067517 )
    {
      v7 = a3[2] == a5[2] && a5[1] == a3[1];
    }
    else
    {
      v7 = false;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280(a1, a2, a3);
    return v7;
  }
}
