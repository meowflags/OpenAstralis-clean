// sub_181EBCC80
// rva 0x01ebcc80  size 145  section .text  group text
// window base 0x181ebcc80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_181EBCC80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rdx
  _DWORD *v9; // [rsp+10h] [rbp-8h]

  v6 = 8LL * *(unsigned int *)(v5 + 58177844);
  if ( v6 != 0 )
    v6 += v5;
  if ( v6 <= (unsigned __int64)a5 )
  {
    v8 = 8LL * *(unsigned int *)(v5 + 58177848);
    if ( v8 != 0 )
      v8 += v5;
    if ( (unsigned __int64)a5 <= v8 )
      return v5 + (*a5 & 0xFFFFFFF8) == v5 + 34096120;
  }
  v9 = a5;
  if ( (unsigned int)sub_181E9FE00(a1, a2, a3: v5 + 376654552, a4, (unsigned __int64)a5) != 0 )
  {
    a5 = v9;
    return v5 + (*a5 & 0xFFFFFFF8) == v5 + 34096120;
  }
  return false;
}
