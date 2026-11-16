// sub_181E9F1A0
// rva 0x01e9f1a0  size 379  section .text  group text
// window base 0x181e9f1a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181E9F1A0()
{
  unsigned __int64 v0; // r14
  unsigned __int64 result; // rax
  __int64 v2; // rcx
  char *v3; // rcx
  _DWORD *v4; // rdx
  _DWORD *v5; // rdx
  signed __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx

  result = *(unsigned int *)(v0 + 374499012);
  if ( (_DWORD)result != 0 )
  {
    v2 = *(unsigned int *)(v0 + 8 * result + 8);
    if ( (_DWORD)v2 == (_DWORD)result )
      v3 = (char *)v0;
    else
      v3 = (char *)(v0 + 8 * v2);
    v4 = (_DWORD *)(8LL * *(unsigned int *)(v0 + 8 * result + 4));
    if ( v4 != nullptr )
      v4 = (_DWORD *)((char *)v4 + v0);
    if ( (*v4 & 6LL) == 4 )
    {
      *(_DWORD *)(v0 + 8 * result + 4) = v4[1];
      result = v0 + 8 * result;
      if ( (*(_DWORD *)result & 2) != 0 )
      {
        v9 = result - v0;
        if ( v9 != 0 )
          v9 += v0;
        v10 = v9 & 0xFFFFFFFFFFF80000LL;
        result = (v9 - ((v9 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
        if ( *(_BYTE *)(v10 + result + 56) != 0 )
          *(_BYTE *)(v10 + result + 56) = 0;
      }
    }
    else if ( (*v4 & 6LL) != 6 )
    {
      *(_DWORD *)(v0 + 8 * result + 4) = 0;
    }
    while ( v3 != (char *)v0 )
    {
      result = v0 + 8LL * *((unsigned int *)v3 + 2);
      if ( (char *)result == v3 )
        result = v0;
      v5 = (_DWORD *)(8LL * *((unsigned int *)v3 + 1));
      if ( v5 != nullptr )
        v5 = (_DWORD *)((char *)v5 + v0);
      if ( (*v5 & 6LL) == 4 )
      {
        *((_DWORD *)v3 + 1) = v5[1];
        if ( (*(_DWORD *)v3 & 2) != 0 )
        {
          v6 = (signed __int64)&v3[-v0];
          if ( v6 != 0 )
            v6 += v0;
          v7 = v6 & 0xFFFFFFFFFFF80000LL;
          v8 = (v6 - ((v6 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
          if ( *(_BYTE *)(v7 + v8 + 56) != 0 )
            *(_BYTE *)(v7 + v8 + 56) = 0;
          v3 = (char *)result;
        }
        else
        {
          v3 = (char *)result;
        }
      }
      else
      {
        if ( (*v5 & 6LL) != 6 )
          *((_DWORD *)v3 + 1) = 0;
        v3 = (char *)result;
      }
    }
  }
  return result;
}
