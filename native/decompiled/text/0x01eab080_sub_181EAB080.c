// sub_181EAB080
// rva 0x01eab080  size 341  section .text  group text
// window base 0x181eab080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EAB080(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  int v12; // eax
  int v13; // eax
  int i; // ecx
  __int64 result; // rax

  if ( (_DWORD *)a3 == v5 )
    JUMPOUT(0x303D3508ELL);
  v6 = a3 & 0xFFFFFFFFFFF80000LL;
  v7 = a3 - (a3 & 0xFFFFFFFFFFF80000LL) - 2112;
  v8 = v7 >> 9;
  v9 = (v7 + a5 - 1) >> 9;
  if ( v9 != v7 >> 9 || (((_WORD)a3 - 2112) & 0x1FF) == 0 )
  {
    if ( (((_WORD)a3 - 2112) & 0x1FF) != 0 )
    {
      v10 = v8 + 1;
      *(_BYTE *)(v6 + v8 + 1081) = -(__int64)((((v8 + 1) << 9) - v7) >> 3);
    }
    else
    {
      *(_BYTE *)(v6 + v8 + 1080) = 0;
      v10 = v7 >> 9;
    }
    if ( v10 + 63 < v9 )
      JUMPOUT(0x303D350FFLL);
    if ( v10 + 1 > v9 )
    {
      v11 = v10 + 1;
    }
    else
    {
      *(_BYTE *)(v6 + v10 + 1081) = 1;
      v11 = v10 + 2;
      v12 = 2;
      while ( v11 <= v9 )
        *(_BYTE *)(v6 + v11++ + 1080) = v12++;
    }
    v13 = 6;
LABEL_11:
    while ( v11 <= v9 )
    {
      for ( i = 0; ; ++i )
      {
        if ( 1 << v13 <= i )
        {
          ++v13;
          goto LABEL_11;
        }
        *(_BYTE *)(v6 + v11++ + 1080) = v13 + 58;
        if ( v11 > v9 )
          break;
      }
      ++v13;
    }
  }
  result = *(unsigned int *)a3 | 2LL;
  *(_DWORD *)a3 = result;
  return result;
}
