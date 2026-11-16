// sub_181EAB740
// rva 0x01eab740  size 472  section .text  group text
// window base 0x181eab740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EAB740(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        __int64 a18)
{
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rbp
  _BYTE *v20; // rsi
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdx
  __int64 result; // rax
  __int64 v26; // [rsp+8h] [rbp-60h]
  unsigned __int64 v27; // [rsp+18h] [rbp-50h]
  _BYTE *v28; // [rsp+20h] [rbp-48h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]
  unsigned __int64 v30; // [rsp+38h] [rbp-30h]
  __int64 v31; // [rsp+40h] [rbp-28h]
  __int64 v32; // [rsp+50h] [rbp-18h]
  int v33; // [rsp+5Ch] [rbp-Ch]
  __int64 v34; // [rsp+60h] [rbp-8h]

  v34 = a3;
  v26 = a5;
  v33 = a6;
  v32 = a3 + 2112;
  v18 = a3 + *(_QWORD *)(a3 + 32);
  v31 = *(_QWORD *)(a3 + 32) - 2112LL;
  v19 = a3 + 56;
  v30 = a3 + 56;
  v20 = (_BYTE *)(a3 + 56 + ((unsigned __int64)(v31 + 511) >> 9) - 1);
  v21 = a3 + 2112 + ((((unsigned __int64)(v31 + 511) >> 9) - 1) << 9);
  v22 = v18;
  v23 = v18;
  while ( v19 <= (unsigned __int64)v20 )
  {
    if ( *v20 == 1 )
    {
      v29 = v21;
      v28 = v20;
      if ( v22 > v23 )
        sub_181EAB920(a1: a5, a2: v20, a3, a4: v22, a5: v23, a6: v22);
      if ( ((unsigned __int8)v28 & 7) != 0 )
      {
        v20 = v28;
        v21 = v29;
        v22 = v29;
        v19 = v30;
      }
      else
      {
        v24 = v28 - 8;
        v19 = v30;
        while ( 1 )
        {
          if ( v30 > (unsigned __int64)v24 )
          {
            v20 = v24 + 1;
            v21 = v32 + ((_QWORD)((char *)v24 - v30 + 8) << 9);
            v22 = v21;
            goto LABEL_5;
          }
          v18 = *v24;
          if ( *v24 != 0x101010101010101LL )
            break;
          --v24;
        }
        v20 = v24 + 1;
        v21 = v32 + ((_QWORD)((char *)v24 - v30 + 8) << 9);
        v22 = v21;
      }
    }
    else if ( a6 != 0 )
    {
      *v20 = 1;
    }
LABEL_5:
    --v20;
    a6 = v33;
    a5 = v26;
    v23 = v21;
    v21 -= 512LL;
    a3 = v34;
  }
  v27 = v23;
  result = v32;
  if ( v22 > v27 )
    return sub_181EAB8EC(
             a1: v18,
             a2: (_DWORD)v20,
             a3,
             a4: v22,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18);
  return result;
}
