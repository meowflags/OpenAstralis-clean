// sub_18501D760
// rva 0x0501d760  size 356  section .text  group text
// window base 0x18501d760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501D760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v6; // r15
  int v7; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    return a5;
  }
  v7 = (unsigned __int16)a5;
  if ( (unsigned __int16)a5 < 0xD800u || (unsigned __int16)a5 >= 0xE000u )
  {
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return a5;
  }
  if ( (unsigned __int16)a5 >= 0xDC00u )
  {
    if ( a6 <= (int)a1 )
    {
      if ( *(int *)(v6 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return a5;
    }
    v9 = *(unsigned __int16 *)(a3 + 2 * (a6 - 1) + 12);
    if ( *(int *)(v6 + 16) <= 0 )
      v7 = MEMORY[0x18277F280](a1, a2, a3, a4: v9);
    if ( (unsigned int)v9 < 0xD800 )
      return a5;
    if ( (unsigned int)v9 < 0xDC00 )
      return (unsigned int)(v7 + ((_DWORD)v9 << 10) - 56613888);
    return a5;
  }
  if ( (int)a2 > a6 + 1 )
  {
    v10 = *(unsigned __int16 *)(a3 + 2 * (a6 + 1) + 12);
    if ( *(int *)(v6 + 16) <= 0 )
      v7 = MEMORY[0x18277F280](a1, a2, a3, a4: v10);
    if ( (unsigned int)v10 < 0xDC00 )
    {
      return a5;
    }
    else if ( (unsigned int)v10 >= 0xE000 )
    {
      return a5;
    }
    else
    {
      return (unsigned int)(56613888 - ((v7 << 10) + v10));
    }
  }
  else
  {
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return a5;
  }
}
