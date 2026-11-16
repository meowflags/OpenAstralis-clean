// sub_1932C7570
// rva 0x132c7570  size 177  section .text  group text
// window base 0x1932c7570: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C7570(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // r9d
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // r10
  unsigned __int16 v10; // ax
  __int64 v11; // r10
  unsigned __int16 v12; // ax
  __int64 v13; // rax
  int v14; // eax

  v5 = 2 * a5;
  v7 = *(int *)(a4 + 4LL * a5 + 2984);
  while ( 1 )
  {
    v14 = *(_DWORD *)(a4 + 5276);
    if ( v5 > v14 )
      break;
    if ( v5 < v14 )
    {
      v8 = *(int *)(a4 + 4LL * v5 + 2988);
      v9 = *(int *)(a4 + 4LL * v5 + 2984);
      v10 = *(_WORD *)(a3 + 4 * v9);
      if ( *(_WORD *)(a3 + 4 * v8) < v10
        || *(_WORD *)(a3 + 4 * v8) == v10 && *(_BYTE *)(v8 + a4 + 5284) <= *(_BYTE *)(v9 + a4 + 5284) )
      {
        ++v5;
      }
    }
    v11 = *(int *)(a4 + 4LL * v5 + 2984);
    v12 = *(_WORD *)(a3 + 4 * v11);
    if ( *(_WORD *)(a3 + 4 * v7) < v12
      || *(_WORD *)(a3 + 4 * v7) == v12 && *(_BYTE *)(v7 + a4 + 5284) <= *(_BYTE *)(v11 + a4 + 5284) )
    {
      break;
    }
    v13 = a5;
    a5 = v5;
    v5 *= 2;
    *(_DWORD *)(a4 + 4 * v13 + 2984) = v11;
  }
  *(_DWORD *)(a4 + 4LL * a5 + 2984) = v7;
  return a5;
}
