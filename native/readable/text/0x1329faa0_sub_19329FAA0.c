// sub_1329FAA0
// rva 0x1329faa0  size 57  section .text  group text
// window base 0x19329faa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1329FAA0(_DWORD a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rax
  _DWORD *v8; // rdi
  _BYTE *v9; // r11
  _DWORD *v10; // rdx
  _DWORD *v11; // rcx
  _DWORD *v12; // rdx
  int *v13; // rcx
  int *v14; // rax
  int *v15; // rdx
  int *v16; // rcx
  int v17; // eax
  int v18; // ecx
  __int64 result; // rax
  unsigned int v20; // ecx

  if ( (*(_DWORD *)(a3 + 28) & 0x100) != 0 )
    *a4 = 1;
  if ( (*(_DWORD *)(a3 + 28) & 0x8000) != 0 )
    a4[1] = 1;
  if ( (*(_DWORD *)(a3 + 28) & 0x80000) != 0 )
    a4[41] = 1;
  if ( (*(_DWORD *)(a3 + 28) & 0x1000000) != 0 )
  {
    v7 = a3 + 4;
LABEL_13:
    a4[2] = 1;
    v6 = v7;
    goto LABEL_14;
  }
  v5 = *(_DWORD *)(a3 + 4);
  v6 = a3 + 4;
  if ( v5 == 1752462657 || v5 == 1869052232 )
  {
    v7 = a3 + 4;
    if ( (*(_DWORD *)(a3 + 160) & 0x1000000) != 0 )
      goto LABEL_13;
  }
LABEL_14:
  if ( (unsigned int)sub_1932A0000(a1: v6, a2, a3, a4: a3) > 1 )
    v9[3] = 1;
  if ( (*(_DWORD *)(a3 + 28) & 0x800000) != 0
    || (*v8 == 1752462657 || *v8 == 1869052232) && (*(_DWORD *)(a3 + 160) & 0x800000) != 0 )
  {
    v9[4] = 1;
  }
  if ( (*(_DWORD *)(a3 + 28) & 0x2000000) != 0 )
    v9[6] = 1;
  if ( (*(_DWORD *)(a3 + 28) & 0x4000000) != 0 )
    v9[7] = 1;
  if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
    v9[8] = 1;
  v10 = (_DWORD *)(a3 + 24);
  if ( (*(_DWORD *)(a3 + 24) & 0x200) != 0 )
  {
    v9[9] = 1;
    v10 = (_DWORD *)(a3 + 24);
  }
  v11 = (_DWORD *)(a3 + 24);
  if ( (*(_DWORD *)(a3 + 24) & 0x80000) != 0 )
  {
    v9[11] = 1;
    v11 = v10;
  }
  if ( (*(_DWORD *)(a3 + 24) & 0x100000) != 0 )
    v9[12] = 1;
  v12 = v11;
  if ( (*v11 & 0x800000) != 0 )
  {
    v9[13] = 1;
    v12 = (_DWORD *)(a3 + 24);
  }
  if ( (*v11 & 0x18000000) == 0x18000000 && (*(_BYTE *)(a3 + 276) & 6) == 6 )
  {
    v9[18] = 1;
    v9[36] = 1;
    if ( (*(_BYTE *)(a3 + 64) & 1) != 0 )
    {
      v9[61] = 1;
      v12 = (_DWORD *)(a3 + 24);
    }
    if ( (*v12 & 0x20000000) != 0 )
      v9[57] = 1;
    if ( (*(_BYTE *)(a3 + 52) & 0x20) != 0 )
      v9[19] = 1;
    v13 = (int *)(a3 + 52);
    if ( (*(_DWORD *)(a3 + 64) & 0x800000) != 0 )
    {
      v9[59] = 1;
      v13 = (int *)(a3 + 52);
    }
    if ( (*(_DWORD *)(a3 + 56) & 0x100) != 0 )
      v9[51] = 1;
    if ( (*(_DWORD *)(a3 + 52) & 0x10000) != 0 && (*(_BYTE *)(a3 + 276) & 0xE0) == 0xE0 )
    {
      v9[27] = 1;
      v14 = v13;
      if ( (*v13 & 0x10000000) != 0 )
      {
        v9[31] = 1;
        v14 = (int *)(a3 + 52);
      }
      if ( (*v13 & 0x20000) != 0 )
        v9[28] = 1;
      v15 = v14;
      if ( (*v14 & 0x200000) != 0 )
      {
        v9[58] = 1;
        v15 = (int *)(a3 + 52);
      }
      v16 = v14;
      if ( (*v14 & 0x4000000) != 0 )
      {
        v9[29] = 1;
        v16 = v15;
      }
      if ( (*v14 & 0x8000000) != 0 )
        v9[30] = 1;
      if ( (*v16 & 0x40000000) != 0 )
        v9[32] = 1;
      if ( *v16 < 0 )
        v9[33] = 1;
      if ( (*(_DWORD *)(a3 + 56) & 0x4000) != 0 )
        v9[37] = 1;
      if ( (*(_DWORD *)(a3 + 56) & 0x400) != 0 )
        v9[38] = 1;
      if ( (*(_DWORD *)(a3 + 56) & 0x200) != 0 )
        v9[39] = 1;
      if ( (*(_DWORD *)(a3 + 56) & 0x800) != 0 )
        v9[40] = 1;
      if ( (*(_DWORD *)(a3 + 56) & 0x1000) != 0 )
        v9[52] = 1;
      if ( (*(_BYTE *)(a3 + 56) & 2) != 0 )
        v9[45] = 1;
      if ( (*(_BYTE *)(a3 + 56) & 0x40) != 0 )
        v9[44] = 1;
    }
    if ( *(_DWORD *)(a3 + 4) == 1970169159 && (*(_DWORD *)(a3 + 68) & 0x80000) != 0 )
    {
      v17 = *(_DWORD *)(a3 + 76);
      if ( (v17 & 0x40000) != 0 && (_BYTE)v17 != 0 && (*(_BYTE *)(a3 + 276) & 0xE0) == 0xE0 )
      {
        v9[63] = 1;
        *((_WORD *)v9 + 29) = 257;
        *(_WORD *)(v9 + 27) = 257;
        *(_DWORD *)(v9 + 30) = 16843009;
        v9[29] = 1;
        *(_DWORD *)(v9 + 37) = 16843009;
        v9[52] = 1;
        *((_WORD *)v9 + 22) = 257;
        if ( *(_BYTE *)(a3 + 76) >= 2u )
          v9[64] = 1;
      }
    }
  }
  if ( *(int *)(a3 + 24) < 0 )
    v9[46] = 1;
  if ( (*(_BYTE *)(a3 + 52) & 8) != 0 )
    v9[23] = 1;
  if ( (*(_BYTE *)(a3 + 28) & 0x10) != 0 )
    v9[15] = 1;
  if ( (*(_DWORD *)(a3 + 240) & 0x100) != 0 )
    v9[17] = 1;
  if ( (*(_DWORD *)(a3 + 24) & 0x2000000) != 0 )
    v9[20] = 1;
  if ( (*(_BYTE *)(a3 + 156) & 0x20) != 0 )
    v9[14] = 1;
  if ( (*(_DWORD *)(a3 + 156) & 0x100) != 0 )
    v9[5] = 1;
  if ( (*(_DWORD *)(a3 + 52) & 0x200) != 0 )
    v9[21] = 1;
  if ( (*(_BYTE *)(a3 + 60) & 0x10) != 0 )
    v9[50] = 1;
  if ( (*(_BYTE *)(a3 + 24) & 2) != 0 )
    v9[22] = 1;
  if ( (*(_DWORD *)(a3 + 52) & 0x800) != 0 )
    v9[25] = 1;
  if ( (*(_DWORD *)(a3 + 52) & 0x80000) != 0 )
    v9[26] = 1;
  if ( (*(_DWORD *)(a3 + 52) & 0x100) != 0 )
    v9[24] = 1;
  if ( (*(_DWORD *)(a3 + 52) & 0x20000000) != 0 )
    v9[34] = 1;
  if ( (*(_DWORD *)(a3 + 24) & 0x1000) != 0 )
    v9[35] = 1;
  if ( (*(_DWORD *)(a3 + 52) & 0x800000) != 0 )
    v9[42] = 1;
  if ( (*(_DWORD *)(a3 + 52) & 0x1000000) != 0 )
    v9[43] = 1;
  if ( (*(_DWORD *)(a3 + 160) & 0x8000000) != 0 )
    v9[48] = 1;
  if ( (*(_DWORD *)(a3 + 56) & 0x400000) != 0 )
    v9[49] = 1;
  if ( (*(_DWORD *)(a3 + 68) & 0x200000) != 0
    && (*(_DWORD *)(a3 + 276) & 0x80000) != 0
    && (*(_BYTE *)(a3 + 80) & 1) != 0 )
  {
    v9[60] = 1;
  }
  v18 = *(_DWORD *)(a3 + 4);
  result = a3 + 4;
  if ( v18 == 1752462657 || v18 == 1869052232 )
  {
    if ( *(int *)(a3 + 160) < 0 )
    {
      v9[5] = 1;
      result = a3 + 4;
    }
    if ( (*(_BYTE *)(a3 + 156) & 0x40) != 0 )
      v9[10] = 1;
  }
  if ( *(_DWORD *)result == 1970169159 )
  {
    if ( (*(_DWORD *)(a3 + 60) & 0x4000) != 0 )
      v9[47] = 1;
    if ( (*(_DWORD *)(a3 + 60) & 0x800000) != 0 )
      v9[62] = 1;
  }
  if ( *(_DWORD *)result == 1953391939 || *(_DWORD *)result == 1750278176 )
    v9[43] = 0;
  if ( (*(_BYTE *)(a3 + 56) & 8) != 0 )
    v9[53] = 1;
  if ( (*(_BYTE *)(a3 + 56) & 0x10) != 0 )
    v9[54] = 1;
  if ( *(char *)(a3 + 56) < 0 )
    v9[56] = 1;
  if ( (*(_DWORD *)(a3 + 60) & 0x100000) != 0 )
    v9[55] = 1;
  if ( v9[17] != 0 )
  {
    result = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)result == 1752462657 )
    {
      result = *(_DWORD *)(a3 + 16) >> 20;
      if ( ((*(_DWORD *)(a3 + 16) >> 8) & 0xF) + (unsigned __int8)result == 17 )
        return result;
    }
    else if ( (_DWORD)result != 1869052232 )
    {
      if ( (_DWORD)result == 1970169159 )
      {
        result = *(_DWORD *)(a3 + 16) >> 20;
        if ( ((*(_DWORD *)(a3 + 16) >> 8) & 0xF) + (unsigned __int8)result == 6 )
        {
          result = *(_DWORD *)(a3 + 16) & 0xF0;
          v20 = ((unsigned int)result | (*(_DWORD *)(a3 + 16) >> 8) & 0xF00) >> 4;
          if ( v20 <= 0x3A )
          {
            result = 0x400300004000000LL;
            if ( _bittest64(&result, (unsigned __int8)v20) )
              v9[16] = 1;
          }
        }
      }
      return result;
    }
    v9[16] = 1;
  }
  return result;
}
