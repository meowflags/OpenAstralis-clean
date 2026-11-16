// sub_1EA1220
// rva 0x01ea1220  size 460  section .text  group text
// window base 0x181ea1220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA1220(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned int v8; // ebp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 j; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  unsigned __int64 i; // rax
  int v17; // eax
  int k; // ecx

  v7 = sub_1EA16C0(a1, a2, a3: a6, a4, a5: a2);
  if ( v6 + 40462360 == a3 )
  {
    v13 = a3 - v6;
    if ( a3 != v6 )
      v13 = a3;
    *(_QWORD *)v7 = v13 - v6;
    *(_DWORD *)(v7 + 8) = a5;
    *(_QWORD *)(v7 + 16) = 0;
    return v7;
  }
  else
  {
    v8 = (*(int *)(a3 + 32) >> 8) & 0xFFF;
    v9 = (((unsigned __int64)a5 << *(_DWORD *)(a3 + 32)) + v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v10 = v9 - 16;
    if ( a1 == v6 )
    {
      v15 = a3 - v6;
      if ( a3 != v6 )
        v15 = a3;
      *(_QWORD *)v7 = v15 - v6;
      *(_DWORD *)(v7 + 8) = a5;
      *(_DWORD *)(v7 + 12) = 0;
      if ( v10 >= 0x800 )
      {
        memset((void *)(v7 + 16), 0, v10);
      }
      else
      {
        for ( i = 16; v9 > i; i += 8LL )
          *(_QWORD *)(v7 + i) = 0;
      }
      return v7;
    }
    else
    {
      v11 = a3 - v6;
      if ( a3 != v6 )
        v11 = a3;
      *(_QWORD *)v7 = v11 - v6;
      *(_DWORD *)(v7 + 8) = a5;
      *(_DWORD *)(v7 + 12) = 0;
      if ( v10 >= 0x800 )
      {
        memset((void *)(v7 + 16), 0, v10);
      }
      else
      {
        for ( j = 16; v9 > j; j += 8LL )
          *(_QWORD *)(v7 + j) = 0;
      }
      v17 = *(_DWORD *)(a1 + 8);
      for ( k = 0; v17 > k; ++k )
        *(_BYTE *)(v7 + (int)(k + v8 + a5 - v17)) = *(_BYTE *)(a1 + k + 12);
      return v7;
    }
  }
}
