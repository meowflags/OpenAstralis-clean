// sub_15AF4E0
// rva 0x015af4e0  size 118  section .text  group text
// window base 0x1815af4e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15AF4E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rbx
  __int64 i; // rax

  v6 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v6 != 0 )
  {
    v7 = *(_DWORD *)(v5 + 8 * v6 + 8);
    if ( a5 > v7 )
    {
      return v5;
    }
    else
    {
      v8 = v5 + 8 * v6;
      if ( v7 != 0 )
      {
        *(_DWORD *)(v5 + 8 * v6 + 12) = 0;
        for ( i = 1; v7 > (int)i; i = (unsigned int)(i + 1) )
        {
          if ( v7 <= (unsigned int)i )
            goto LABEL_12;
          *(_DWORD *)(v8 + 4 * i + 12) = 0;
        }
      }
      *(_DWORD *)(a3 + 12) = 0;
      return v8;
    }
  }
  else
  {
    sub_276EFE0();
LABEL_12:
    sub_276F0E0();
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
    return sub_15AF560();
  }
}
