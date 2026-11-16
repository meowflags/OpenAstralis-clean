// sub_1EBBEC0
// rva 0x01ebbec0  size 569  section .text  group text
// window base 0x181ebbec0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBBEC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  BOOL v9; // eax
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rbx
  BOOL v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  signed __int32 v19; // ett
  signed __int32 v20; // ett
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rsi

  v6 = *(unsigned int *)(v5 + 376658844);
  if ( (_DWORD)v6 != 0 )
  {
    v7 = *(_DWORD *)(v5 + 8 * v6) >> 3;
    if ( *(__int16 *)(v5 + 8 * v7 + 62) < 2 || *(_DWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 8 * v7 + 16) + 16) != 67220 )
      LODWORD(v6) = sub_276EAE0();
  }
  *(_DWORD *)(a5 + 8) = v6;
  if ( (*(_DWORD *)a5 & 2) != 0 )
    goto LABEL_28;
  while ( 1 )
  {
    v8 = (a5 - v5) >> 3;
    v9 = v6 == __sync_val_compare_and_swap((volatile signed __int32 *)(v5 + 376658844), v6, v8);
    v10 = v5 + 376658840;
    if ( (*(_DWORD *)(v5 + 376658840) & 2) != 0 )
    {
      v22 = (v10 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v22) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v22) >> 9) + 0x38) = 0;
    }
    if ( v9 )
      break;
    while ( 1 )
    {
      v14 = *(unsigned int *)(v5 + 376658844);
      if ( (_DWORD)v14 != 0 )
      {
        v12 = *(_DWORD *)(v5 + 8 * v14) >> 3;
        if ( *(__int16 *)(v5 + 8 * v12 + 62) < 2
          || *(_DWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 8 * v12 + 16) + 16) != 67220 )
        {
          break;
        }
      }
      *(_DWORD *)(a5 + 8) = v14;
      if ( (*(_DWORD *)a5 & 2) != 0 )
      {
        v16 = (a5 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - v16) >> 9) + 0x38) != 0 )
          *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - v16) >> 9) + 0x38) = 0;
      }
      v13 = v14 == __sync_val_compare_and_swap((volatile signed __int32 *)(v5 + 376658844), v14, v8);
      if ( (*(_DWORD *)v10 & 2) != 0 )
      {
        v15 = (v10 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v15) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v15) >> 9) + 0x38) = 0;
      }
      if ( v13 )
        goto LABEL_7;
    }
    LODWORD(v6) = sub_276EAE0();
LABEL_28:
    v21 = (a5 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - v21) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - v21) >> 9) + 0x38) = 0;
  }
LABEL_7:
  result = *(unsigned int *)(a5 + 4);
  if ( (*(_DWORD *)(v5 + 8 * result) & 1) == 0 )
  {
    v17 = 8 * result;
    if ( v17 != 0 )
      v17 += v5;
    v18 = v17 & 0xFFFFFFFFFFF80000LL;
    v19 = *(_DWORD *)((v17 & 0xFFFFFFFFFFF80000LL) + 0x2C);
    result = (unsigned int)__sync_val_compare_and_swap(
                             (volatile signed __int32 *)((v17 & 0xFFFFFFFFFFF80000LL) + 44),
                             v19,
                             v19 + 1);
    if ( v19 != (_DWORD)result )
    {
      do
      {
        v20 = *(_DWORD *)(v18 + 44);
        result = (unsigned int)__sync_val_compare_and_swap((volatile signed __int32 *)(v18 + 44), v20, v20 + 1);
      }
      while ( v20 != (_DWORD)result );
    }
  }
  return result;
}
