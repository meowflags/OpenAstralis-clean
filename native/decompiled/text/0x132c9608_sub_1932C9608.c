// sub_1932C9608
// rva 0x132c9608  size 139  section .text  group text
// window base 0x1932c9608: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall sub_1932C9608(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5, int a6)
{
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi

  if ( MEMORY[0x337DC1] == 0 )
  {
    if ( a4 > 1 )
    {
      sub_1932C9994(a1, a2, a3, a4: 5, a5, a6);
      JUMPOUT(0x1932C9692LL);
    }
    if ( (unsigned int)sub_1932C9DF0(a1, a2) == 0 || a4 != 0 )
    {
      MEMORY[0x337DC8] = MEMORY[0x84EB0];
      MEMORY[0x337DD8] = -1;
      MEMORY[0x337DE0] = MEMORY[0x84EB0];
      MEMORY[0x337DF0] = -1;
    }
    else if ( (unsigned int)sub_1932CA2A5(a1: v8, a2: v9, a3: v7, a4: 3374536) != 0
           || (unsigned int)sub_1932CA2A5(a1: v11, a2: v12, a3: v10, a4: 3374560) != 0 )
    {
      return 0;
    }
    MEMORY[0x337DC1] = 1;
  }
  return 1;
}
