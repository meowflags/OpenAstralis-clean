// sub_181EBBE40
// rva 0x01ebbe40  size 124  section .text  group text
// window base 0x181ebbe40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBBE40(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rcx
  unsigned __int64 v7; // rcx

  if ( a3 == v3 )
  {
    return 1;
  }
  else
  {
    v4 = 8LL * *(unsigned int *)(v3 + 58177844);
    if ( v4 != 0 )
      v4 += v3;
    if ( v4 > a3 )
      goto LABEL_5;
    v7 = 8LL * *(unsigned int *)(v3 + 58177848);
    if ( v7 != 0 )
      v7 += v3;
    if ( a3 > v7 )
    {
LABEL_5:
      if ( *(_QWORD *)(v3 + 376612552) <= a3 )
        JUMPOUT(0x303D45E8FLL);
      return 0;
    }
    else
    {
      return 1;
    }
  }
}
