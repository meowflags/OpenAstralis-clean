// sub_1329FB5B
// rva 0x1329fb5b  size 1176  section .text  group text
// window base 0x19329fb5b: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_1329FB5B()
{
  __int64 v0; // rbx
  _BYTE *v1; // r11
  _DWORD *v2; // rdx
  _DWORD *v3; // rcx
  _DWORD *v4; // rdx
  int *v5; // rcx
  int *v6; // rax
  int *v7; // rdx
  int *v8; // rcx
  int v9; // eax
  int v10; // ecx
  __int64 result; // rax
  unsigned int v12; // ecx

  v1[6] = 1;
  if ( (*(_DWORD *)(v0 + 28) & 0x4000000) != 0 )
    v1[7] = 1;
  if ( (*(_BYTE *)(v0 + 24) & 1) != 0 )
    v1[8] = 1;
  v2 = (_DWORD *)(v0 + 24);
  if ( (*(_DWORD *)(v0 + 24) & 0x200) != 0 )
  {
    v1[9] = 1;
    v2 = (_DWORD *)(v0 + 24);
  }
  v3 = (_DWORD *)(v0 + 24);
  if ( (*(_DWORD *)(v0 + 24) & 0x80000) != 0 )
  {
    v1[11] = 1;
    v3 = v2;
  }
  if ( (*(_DWORD *)(v0 + 24) & 0x100000) != 0 )
    v1[12] = 1;
  v4 = v3;
  if ( (*v3 & 0x800000) != 0 )
  {
    v1[13] = 1;
    v4 = (_DWORD *)(v0 + 24);
  }
  if ( (*v3 & 0x18000000) == 0x18000000 && (*(_BYTE *)(v0 + 276) & 6) == 6 )
  {
    v1[18] = 1;
    v1[36] = 1;
    if ( (*(_BYTE *)(v0 + 64) & 1) != 0 )
    {
      v1[61] = 1;
      v4 = (_DWORD *)(v0 + 24);
    }
    if ( (*v4 & 0x20000000) != 0 )
      v1[57] = 1;
    if ( (*(_BYTE *)(v0 + 52) & 0x20) != 0 )
      v1[19] = 1;
    v5 = (int *)(v0 + 52);
    if ( (*(_DWORD *)(v0 + 64) & 0x800000) != 0 )
    {
      v1[59] = 1;
      v5 = (int *)(v0 + 52);
    }
    if ( (*(_DWORD *)(v0 + 56) & 0x100) != 0 )
      v1[51] = 1;
    if ( (*(_DWORD *)(v0 + 52) & 0x10000) != 0 && (*(_BYTE *)(v0 + 276) & 0xE0) == 0xE0 )
    {
      v1[27] = 1;
      v6 = v5;
      if ( (*v5 & 0x10000000) != 0 )
      {
        v1[31] = 1;
        v6 = (int *)(v0 + 52);
      }
      if ( (*v5 & 0x20000) != 0 )
        v1[28] = 1;
      v7 = v6;
      if ( (*v6 & 0x200000) != 0 )
      {
        v1[58] = 1;
        v7 = (int *)(v0 + 52);
      }
      v8 = v6;
      if ( (*v6 & 0x4000000) != 0 )
      {
        v1[29] = 1;
        v8 = v7;
      }
      if ( (*v6 & 0x8000000) != 0 )
        v1[30] = 1;
      if ( (*v8 & 0x40000000) != 0 )
        v1[32] = 1;
      if ( *v8 < 0 )
        v1[33] = 1;
      if ( (*(_DWORD *)(v0 + 56) & 0x4000) != 0 )
        v1[37] = 1;
      if ( (*(_DWORD *)(v0 + 56) & 0x400) != 0 )
        v1[38] = 1;
      if ( (*(_DWORD *)(v0 + 56) & 0x200) != 0 )
        v1[39] = 1;
      if ( (*(_DWORD *)(v0 + 56) & 0x800) != 0 )
        v1[40] = 1;
      if ( (*(_DWORD *)(v0 + 56) & 0x1000) != 0 )
        v1[52] = 1;
      if ( (*(_BYTE *)(v0 + 56) & 2) != 0 )
        v1[45] = 1;
      if ( (*(_BYTE *)(v0 + 56) & 0x40) != 0 )
        v1[44] = 1;
    }
    if ( *(_DWORD *)(v0 + 4) == 1970169159 && (*(_DWORD *)(v0 + 68) & 0x80000) != 0 )
    {
      v9 = *(_DWORD *)(v0 + 76);
      if ( (v9 & 0x40000) != 0 && (_BYTE)v9 != 0 && (*(_BYTE *)(v0 + 276) & 0xE0) == 0xE0 )
      {
        v1[63] = 1;
        *((_WORD *)v1 + 29) = 257;
        *(_WORD *)(v1 + 27) = 257;
        *(_DWORD *)(v1 + 30) = 16843009;
        v1[29] = 1;
        *(_DWORD *)(v1 + 37) = 16843009;
        v1[52] = 1;
        *((_WORD *)v1 + 22) = 257;
        if ( *(_BYTE *)(v0 + 76) >= 2u )
          v1[64] = 1;
      }
    }
  }
  if ( *(int *)(v0 + 24) < 0 )
    v1[46] = 1;
  if ( (*(_BYTE *)(v0 + 52) & 8) != 0 )
    v1[23] = 1;
  if ( (*(_BYTE *)(v0 + 28) & 0x10) != 0 )
    v1[15] = 1;
  if ( (*(_DWORD *)(v0 + 240) & 0x100) != 0 )
    v1[17] = 1;
  if ( (*(_DWORD *)(v0 + 24) & 0x2000000) != 0 )
    v1[20] = 1;
  if ( (*(_BYTE *)(v0 + 156) & 0x20) != 0 )
    v1[14] = 1;
  if ( (*(_DWORD *)(v0 + 156) & 0x100) != 0 )
    v1[5] = 1;
  if ( (*(_DWORD *)(v0 + 52) & 0x200) != 0 )
    v1[21] = 1;
  if ( (*(_BYTE *)(v0 + 60) & 0x10) != 0 )
    v1[50] = 1;
  if ( (*(_BYTE *)(v0 + 24) & 2) != 0 )
    v1[22] = 1;
  if ( (*(_DWORD *)(v0 + 52) & 0x800) != 0 )
    v1[25] = 1;
  if ( (*(_DWORD *)(v0 + 52) & 0x80000) != 0 )
    v1[26] = 1;
  if ( (*(_DWORD *)(v0 + 52) & 0x100) != 0 )
    v1[24] = 1;
  if ( (*(_DWORD *)(v0 + 52) & 0x20000000) != 0 )
    v1[34] = 1;
  if ( (*(_DWORD *)(v0 + 24) & 0x1000) != 0 )
    v1[35] = 1;
  if ( (*(_DWORD *)(v0 + 52) & 0x800000) != 0 )
    v1[42] = 1;
  if ( (*(_DWORD *)(v0 + 52) & 0x1000000) != 0 )
    v1[43] = 1;
  if ( (*(_DWORD *)(v0 + 160) & 0x8000000) != 0 )
    v1[48] = 1;
  if ( (*(_DWORD *)(v0 + 56) & 0x400000) != 0 )
    v1[49] = 1;
  if ( (*(_DWORD *)(v0 + 68) & 0x200000) != 0
    && (*(_DWORD *)(v0 + 276) & 0x80000) != 0
    && (*(_BYTE *)(v0 + 80) & 1) != 0 )
  {
    v1[60] = 1;
  }
  v10 = *(_DWORD *)(v0 + 4);
  result = v0 + 4;
  if ( v10 == 1752462657 || v10 == 1869052232 )
  {
    if ( *(int *)(v0 + 160) < 0 )
    {
      v1[5] = 1;
      result = v0 + 4;
    }
    if ( (*(_BYTE *)(v0 + 156) & 0x40) != 0 )
      v1[10] = 1;
  }
  if ( *(_DWORD *)result == 1970169159 )
  {
    if ( (*(_DWORD *)(v0 + 60) & 0x4000) != 0 )
      v1[47] = 1;
    if ( (*(_DWORD *)(v0 + 60) & 0x800000) != 0 )
      v1[62] = 1;
  }
  if ( *(_DWORD *)result == 1953391939 || *(_DWORD *)result == 1750278176 )
    v1[43] = 0;
  if ( (*(_BYTE *)(v0 + 56) & 8) != 0 )
    v1[53] = 1;
  if ( (*(_BYTE *)(v0 + 56) & 0x10) != 0 )
    v1[54] = 1;
  if ( *(char *)(v0 + 56) < 0 )
    v1[56] = 1;
  if ( (*(_DWORD *)(v0 + 60) & 0x100000) != 0 )
    v1[55] = 1;
  if ( v1[17] != 0 )
  {
    result = *(unsigned int *)(v0 + 4);
    if ( (_DWORD)result == 1752462657 )
    {
      result = *(_DWORD *)(v0 + 16) >> 20;
      if ( ((*(_DWORD *)(v0 + 16) >> 8) & 0xF) + (unsigned __int8)result == 17 )
        return result;
    }
    else if ( (_DWORD)result != 1869052232 )
    {
      if ( (_DWORD)result == 1970169159 )
      {
        result = *(_DWORD *)(v0 + 16) >> 20;
        if ( ((*(_DWORD *)(v0 + 16) >> 8) & 0xF) + (unsigned __int8)result == 6 )
        {
          result = *(_DWORD *)(v0 + 16) & 0xF0;
          v12 = ((unsigned int)result | (*(_DWORD *)(v0 + 16) >> 8) & 0xF00) >> 4;
          if ( v12 <= 0x3A )
          {
            result = 0x400300004000000LL;
            if ( _bittest64(&result, (unsigned __int8)v12) )
              v1[16] = 1;
          }
        }
      }
      return result;
    }
    v1[16] = 1;
  }
  return result;
}
