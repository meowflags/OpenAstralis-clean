// sub_132BF590
// rva 0x132bf590  size 474  section .text  group text
// window base 0x1932bf590: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132BF590(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  int v12; // r14d
  char *v13; // rax
  char *v14; // r12
  int v15; // ebp
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // [rsp+0h] [rbp-108h] BYREF
  int v22; // [rsp+8h] [rbp-100h]
  __int64 v23; // [rsp+10h] [rbp-F8h]
  __int64 v24; // [rsp+20h] [rbp-E8h]
  __int64 v25; // [rsp+28h] [rbp-E0h]
  __int64 v26; // [rsp+30h] [rbp-D8h]
  _BYTE v27[107]; // [rsp+40h] [rbp-C8h] BYREF
  char v28; // [rsp+ABh] [rbp-5Dh] BYREF
  __int64 v29; // [rsp+C0h] [rbp-48h]

  v6 = *(_QWORD *)(a4 + 16);
  v7 = *(_QWORD *)(a4 + 48);
  v8 = a4;
  v26 = a3;
  v25 = v6;
  v24 = v7;
  v9 = v6 - 128;
  if ( v6 - 65557 <= 0 )
    JUMPOUT(0x3265195E8LL);
  v10 = v6 - 65663;
  if ( v9 >= v6 - 65663 )
  {
    a1 = 128 - v6;
    while ( 1 )
    {
      v11 = 0;
      if ( v9 < 0 )
      {
        v11 = a1;
        sub_1932CA161(a1, a2: v8, a3: 0, a4: v27, a5: a1);
      }
      if ( (unsigned int)sub_132C0524(
                           a1,
                           a2: v8,
                           a3: (unsigned int)&v27[v11],
                           a4: v7,
                           a5: 128 - (int)v11,
                           a6: (int)v11 + (int)v9) == -1 )
        break;
      v12 = 106;
      v13 = &v28;
      do
      {
        v14 = v13 - 1;
        if ( *(v13 - 1) == 80 && *v13 == 75 && v13[1] == 5 && v13[2] == 6 )
        {
          if ( v9
             + (unsigned int)v12
             + (((unsigned __int64)(unsigned __int8)v13[20] << 8) | (unsigned __int8)v13[19])
             + 22 == v6 )
          {
            v15 = v9 + v12;
LABEL_19:
            sub_1932CA15B(a1: v26, a2: v8, a3: &v27[v12], a4: v26, a5: 22);
            v16 = *(unsigned __int16 *)(a1 + 20);
            if ( *(_WORD *)(a1 + 20) != 0 )
            {
              v17 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1, a2: v8, a3, a4: (unsigned int)(v16 + 1));
              *(_QWORD *)(v8 + 64) = v17;
              if ( v17 != 0 )
              {
                v18 = sub_132C0524(a1, a2: v8, a3: v17, a4: v24, a5: v16, a6: v15 + 22);
                v19 = *(_QWORD *)(v8 + 64);
                if ( v18 == -1 )
                {
                  __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1, a2: v8, a3, a4: v19);
                  *(_QWORD *)(v8 + 64) = 0;
                }
                else
                {
                  *(_BYTE *)(v16 + v19) = 0;
                  *(_DWORD *)(v8 + 72) = v16;
                }
              }
            }
            return sub_132C8DE0(a1, a2: v8, a3, a4: (unsigned __int64)&v21 ^ v29, a5, a6);
          }
          v15 = v12 + v9;
          if ( (unsigned __int8)sub_132C0660(
                                  a1,
                                  a2: v8,
                                  a3: v12 + (int)v9,
                                  a4: v8,
                                  a5: (unsigned int)&v27[v12],
                                  a6,
                                  a7: v21,
                                  a8: v22,
                                  a9: v23) != 0 )
            goto LABEL_19;
          v6 = v25;
        }
        --v12;
        v13 = v14;
      }
      while ( v12 >= 0 );
      v9 -= 106;
      a1 += 106;
      if ( v9 < v10 )
        return sub_132C8DE0(a1, a2: v8, a3, a4: (unsigned __int64)&v21 ^ v29, a5, a6);
      LODWORD(v7) = v24;
    }
  }
  return sub_132C8DE0(a1, a2: v8, a3, a4: (unsigned __int64)&v21 ^ v29, a5, a6);
}
