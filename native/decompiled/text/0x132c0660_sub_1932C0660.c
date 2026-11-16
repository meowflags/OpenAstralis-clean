// sub_1932C0660
// rva 0x132c0660  size 296  section .text  group text
// window base 0x1932c0660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall sub_1932C0660(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi
  char v13; // bl

  a9 = a2;
  v9 = a3
     - (*(unsigned __int8 *)(a5 + 12)
      | ((*(unsigned __int8 *)(a5 + 13) | ((unsigned __int64)*(unsigned __int16 *)(a5 + 14) << 8)) << 8));
  v10 = v9
      - (*(unsigned __int8 *)(a5 + 16)
       | ((*(unsigned __int8 *)(a5 + 17) | ((unsigned __int64)*(unsigned __int16 *)(a5 + 18) << 8)) << 8));
  if ( v9 < 0
    || v10 < 0
    || (unsigned int)sub_1932C0524(a1: v10, a2: a4, a3: (__int64)&a8, a4: *(_QWORD *)(a4 + 48), a5: 4, a6: v9) == -1 )
  {
    return 0;
  }
  v13 = 1;
  if ( BYTE2(a8) != 1 )
    JUMPOUT(0x32651A71CLL);
  if ( (_BYTE)a8 != 80
    || BYTE1(a8) != 75
    || HIBYTE(a8) != 2
    || (unsigned int)sub_1932C0524(a1: v11, a2: v12, a3: (__int64)&a8, a4: *(_QWORD *)(v12 + 48), a5: 4, a6: v11) == -1 )
  {
    return 0;
  }
  if ( BYTE2(a8) != 3 )
    JUMPOUT(0x32651A766LL);
  if ( (_BYTE)a8 != 80 || BYTE1(a8) != 75 || HIBYTE(a8) != 4 )
    return 0;
  return v13;
}
