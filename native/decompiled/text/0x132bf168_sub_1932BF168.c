// sub_1932BF168
// rva 0x132bf168  size 234  section .text  group text
// window base 0x1932bf168: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BF168(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11)
{
  int v13; // ebp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v19; // rax
  int v20; // edi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // edi

  v13 = a6;
  if ( a4 == nullptr )
    return 0xFFFFFFFFLL;
  a4[10] = 0;
  if ( a3 == 0 )
  {
    v15 = 547544;
LABEL_20:
    a4[10] = v15;
    return 0xFFFFFFFFLL;
  }
  v16 = *(_QWORD *)(a3 + 24);
  if ( v16 == 0 )
    v16 = *(_QWORD *)(a3 + 16);
  if ( a5 < 0 || a5 > v16 - 1 )
  {
    v15 = 547576;
    goto LABEL_20;
  }
  v17 = a11;
  if ( a11 <= 0 )
    return 0;
  if ( a11 > v16 - a5 )
    v17 = (unsigned int)(v16 - a5);
  v19 = sub_1932BEBC8(a1: v17, a2: a5, a3, (__int64)a4, a5: a3, a6);
  if ( v19 >= 0 )
  {
    v22 = v21 + v19;
    if ( v20 + v22 <= a4[2] )
    {
      if ( (unsigned int)sub_1932C0524(a1: v20, a2: v21, a3: v13, a4: a4[6], a5: v20, a6: v22) != -1 )
        return v24;
      v23 = 547664;
    }
    else
    {
      v23 = 547616;
    }
    a4[10] = v23;
  }
  return 0xFFFFFFFFLL;
}
