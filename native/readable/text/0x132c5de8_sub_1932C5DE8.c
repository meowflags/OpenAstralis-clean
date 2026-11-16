// sub_132C5DE8
// rva 0x132c5de8  size 182  section .text  group text
// window base 0x1932c5de8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C5DE8(__int64 a1, _DWORD a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // r9d
  _DWORD *v10; // rdi
  _DWORD *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // eax
  __int64 v17; // rdi

  if ( (unsigned int)sub_1932C5EA0(a1, a2: a4, a3) != 0 )
    return 4294967294LL;
  v10 = *(_DWORD **)(v7 + 40);
  v11 = v10 + 2;
  if ( v10[4] != 0 && *v11 != 16190 )
    return 4294967294LL;
  if ( *v11 == 16190 )
  {
    v12 = sub_1932C5FE4(a1: v10, a2: v8, a3: 0, a4: 0, a5: 0);
    v15 = sub_1932C5FE4(a1: v13, a2: v14, a3, a4: v12, a5);
    if ( v15 != v10[8] )
      return 4294967293LL;
  }
  if ( (unsigned int)sub_132C5ED8(a1: (_DWORD)v10, a2: v8, a3: (unsigned int)a3 + a5, a4: v8, a5, a6: v9) != 0 )
  {
    *v11 = 16210;
    return 4294967292LL;
  }
  else
  {
    *(_DWORD *)(v17 + 20) = 1;
    return 0;
  }
}
