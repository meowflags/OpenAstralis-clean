// sub_181E60020
// rva 0x01e60020  size 168  section .text  group text
// window base 0x181e60020: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181E60020(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rax
  unsigned __int8 v6; // bl
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  char v11; // bp
  int i; // ebx
  unsigned __int8 v13; // di

  v5 = *(_QWORD *)(a3 + 8);
  v6 = *(_BYTE *)(v5 + (int)*(_QWORD *)(a3 + 16) + 12);
  v7 = *(_QWORD *)(a3 + 16) + 1LL;
  *(_QWORD *)(a3 + 16) = v7;
  v8 = (unsigned __int64)v6 << 6;
  v9 = v8 + a5;
  if ( v6 >= 0xC0u )
  {
    v10 = v8 + a5;
    v11 = 12;
    for ( i = 3; ; ++i )
    {
      v13 = *(_BYTE *)(v5 + (int)v7 + 12);
      *(_QWORD *)(a3 + 16) = v7 + 1;
      v10 += (unsigned __int64)v13 << v11;
      if ( v13 < 0xC0u )
        return v10;
      if ( i == 11 )
        break;
      v11 += 6;
      ++v7;
    }
    return v10;
  }
  return v9;
}
