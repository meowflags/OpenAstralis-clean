// ZIP_InflateFully
// rva 0x132bee38  size 256  section .text  group text
// window base 0x1932bee38: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall ZIP_InflateFully(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 *a11)
{
  int v13; // edi
  int v14; // esi
  int v15; // edi
  __int64 v16; // rsi
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  int v20; // edx
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-80h]
  __int64 v24; // [rsp+8h] [rbp-78h]
  int v25; // [rsp+10h] [rbp-70h]
  int v26; // [rsp+18h] [rbp-68h]
  __int64 v27; // [rsp+20h] [rbp-60h] BYREF
  int v28; // [rsp+28h] [rbp-58h]
  __int64 v29; // [rsp+30h] [rbp-50h]
  int v30; // [rsp+38h] [rbp-48h]
  int v31; // [rsp+3Ch] [rbp-44h]
  __int64 v32; // [rsp+40h] [rbp-40h]

  sub_1932CA161(a1: a6, a2: a5, a3: 0, a4: &v27, a5: 88);
  *a11 = 0;
  if ( (unsigned int)sub_1932C5B98(a1: v13, a2: v14, a3: 15, a4: (unsigned int)&v27, a5: 547740, a6: 88) != 0 )
  {
    *a11 = v32;
  }
  else
  {
    v29 = v16;
    v30 = v15;
    v27 = a4;
    v28 = a3;
    while ( 1 )
    {
      v19 = sub_1932C4558(
              a1: v15,
              a2: v16,
              a3: 1,
              a4: (unsigned int)&v27,
              a5: v17,
              a6: v18,
              a7: v23,
              a8: v24,
              a9: v25,
              a10: v26);
      if ( v19 == -4 )
        break;
      if ( v19 == -3 )
      {
        v22 = 547912;
        goto LABEL_15;
      }
      if ( v19 != 0 )
      {
        if ( v19 != 1 )
        {
          v22 = 548008;
          goto LABEL_15;
        }
        if ( v31 != v15 )
        {
          v22 = 547864;
          goto LABEL_15;
        }
      }
      if ( v28 == 0 )
      {
        sub_1932C5B34(a1: v15, a2: v16, a3: v20, a4: (unsigned int)&v27, a5: v17, a6: v18, a7: v23, a8: v24);
        return 1;
      }
    }
    v22 = 547968;
LABEL_15:
    *a11 = v22;
    sub_1932C5B34(a1: v15, a2: v16, a3: v20, a4: (unsigned int)&v27, a5: v17, a6: v18, a7: v23, a8: v24);
  }
  return 0;
}
