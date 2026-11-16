// sub_181EAE640
// rva 0x01eae640  size 187  section .text  group text
// window base 0x181eae640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EAE640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  __int64 v6; // r14

  if ( (unsigned int)a1 >= 4 )
  {
    if ( (a5 & 0x10) == 0 )
      return *(_QWORD *)(a6[16] + (a5 >> 5) + 8);
    MEMORY[0x1828C1C40](a1, a2, a3: v6 + 361300432);
  }
  else if ( (a5 & 0x10) != 0 )
  {
    if ( (int)a1 >= 2 )
    {
      if ( (_DWORD)a1 == 2 )
        return a6[2];
      else
        return a6[3];
    }
    else if ( (_DWORD)a1 != 0 )
    {
      return a6[1];
    }
    else
    {
      return *a6;
    }
  }
  MEMORY[0x1828C1C40](a1, a2, a3: v6 + 361300432);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_181EAE700();
}
