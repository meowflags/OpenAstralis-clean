// sub_1EABBC0
// rva 0x01eabbc0  size 127  section .text  group text
// window base 0x181eabbc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1EABBC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5)
{
  char *v5; // r14
  unsigned __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  signed __int64 v9; // r8
  unsigned __int64 v10; // r8

  result = *(unsigned int *)a5;
  if ( (result & 2) != 0 )
  {
    result = sub_1EABC40(a1, a2, a3: a5);
    if ( (_DWORD)result != 0 )
    {
      if ( (*(_DWORD *)a5 & 1) != 0 )
      {
        return sub_1EABF40(a1: v7, a2: v8, a3: a5);
      }
      else
      {
        result = *(unsigned int *)a5;
        if ( (result & 2) != 0 )
        {
          v9 = a5 - v5;
          if ( a5 != v5 )
            v9 = (signed __int64)a5;
          result = v9 & 0xFFFFFFFFFFF80000LL;
          v10 = (v9 - ((v9 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
          if ( *(_BYTE *)(result + v10 + 56) != 0 )
            *(_BYTE *)(result + v10 + 56) = 0;
        }
      }
    }
  }
  return result;
}
