// sub_181EAE820
// rva 0x01eae820  size 241  section .text  group text
// window base 0x181eae820: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EAE820(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  __int64 v6; // r14
  __int64 result; // rax
  unsigned int v8; // ecx

  result = a5 >> 4;
  if ( (unsigned int)a1 >= 4 )
  {
    if ( (a5 & 0x10) == 0 )
    {
      result = a6[16];
      v8 = a5 >> 5;
      if ( result != 0 )
      {
        if ( a6[17] > (__int64)v8 )
        {
          *(_QWORD *)(result + v8) = a2;
          return result;
        }
        goto LABEL_17;
      }
LABEL_16:
      MEMORY[0x1828C1C40](a1, a2, a3: v6 + 361300432);
LABEL_17:
      MEMORY[0x1828C1C40](a1, a2, a3: v6 + 361300432);
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
      return sub_181EAE920();
    }
    MEMORY[0x1828C1C40](a1, a2, a3: v6 + 361300432);
LABEL_15:
    MEMORY[0x1828C1C40](a1, a2, a3: v6 + 361300432);
    goto LABEL_16;
  }
  if ( (a5 & 0x10) == 0 )
    goto LABEL_15;
  if ( (int)a1 >= 2 )
  {
    if ( (_DWORD)a1 == 2 )
      a6[2] = a2;
    else
      a6[3] = a2;
  }
  else if ( (_DWORD)a1 != 0 )
  {
    a6[1] = a2;
  }
  else
  {
    *a6 = a2;
  }
  return result;
}
