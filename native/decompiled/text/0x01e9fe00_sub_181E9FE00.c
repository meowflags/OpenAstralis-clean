// sub_181E9FE00
// rva 0x01e9fe00  size 381  section .text  group text
// window base 0x181e9fe00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9FE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax

  v6 = *(_QWORD *)(v5 + 376654568);
  if ( v6 != 0 )
  {
    if ( v6 + 2112 <= a5 && v6 + *(_QWORD *)(v6 + 32) > a5 )
      return 1;
    v9 = *(_QWORD *)(v6 + 16);
    if ( v9 != 0 )
      v10 = v6 + v9;
    else
      v10 = 0;
    while ( v10 != 0 )
    {
      if ( v10 + 2112 <= a5 && v10 + *(_QWORD *)(v10 + 32) > a5 )
        return 1;
      v11 = *(_QWORD *)(v10 + 16);
      if ( v11 != 0 )
        v10 += v11;
      else
        v10 = 0;
    }
  }
  v7 = *(_QWORD *)(v5 + 376654584);
  if ( v7 == 0 )
    return 0;
  v12 = *(_QWORD *)(v7 + 32);
  if ( v7 + v12 - ((((v12 - 56) << 9) / 0x201uLL) & 0xFFFFFFFFFFFFFFF8LL) > a5 || v7 + v12 <= a5 )
  {
    v13 = *(_QWORD *)(v7 + 16);
    if ( v13 != 0 )
      v14 = v7 + v13;
    else
      v14 = 0;
    v15 = v14;
    while ( v15 != 0 )
    {
      v16 = *(_QWORD *)(v15 + 32);
      if ( v15 + v16 - ((((v16 - 56) << 9) / 0x201uLL) & 0xFFFFFFFFFFFFFFF8LL) <= a5 && v15 + v16 > a5 )
        return 1;
      v17 = *(_QWORD *)(v15 + 16);
      if ( v17 != 0 )
        v15 += v17;
      else
        v15 = 0;
    }
    return 0;
  }
  return 1;
}
