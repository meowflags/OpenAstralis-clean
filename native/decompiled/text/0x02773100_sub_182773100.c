// sub_182773100
// rva 0x02773100  size 244  section .text  group text
// window base 0x182773100: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182773100(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v6; // rbx
  _QWORD *i; // rbx

  *(_BYTE *)(a3 + 32) = 1;
  v3 = *(_QWORD *)(a3 + 24);
  v4 = *(_QWORD *)a3;
  if ( v3 != 0 && (v4 == 0 || v4 > v3) )
  {
    v6 = *(_QWORD *)(a3 + 16);
    if ( v6 == 0 )
    {
      for ( i = *(_QWORD **)(a3 + 8); i != nullptr && v3 > i[2]; i = (_QWORD *)i[3] )
        ;
      *(_QWORD *)(a3 + 8) = i;
      if ( i != nullptr && i[2] == v3 )
        v6 = i[1];
      else
        v6 = *(_QWORD *)(v3 - 8);
      *(_QWORD *)(a3 + 16) = v6;
    }
    sub_1827722C0(a1, a2, a3: a3 + 40, a4: v4, a5: v3, a6: v6);
    return 1;
  }
  else
  {
    *(_QWORD *)(a3 + 88) = 0;
    *(_QWORD *)(a3 + 72) = 0;
    *(_QWORD *)(a3 + 80) = 0;
    *(_BYTE *)(a3 + 96) = 0;
    *(_QWORD *)(a3 + 40) = 0;
    *(_QWORD *)(a3 + 48) = 0;
    *(_QWORD *)(a3 + 64) = -1;
    *(_QWORD *)(a3 + 56) = -1;
    return 0;
  }
}
