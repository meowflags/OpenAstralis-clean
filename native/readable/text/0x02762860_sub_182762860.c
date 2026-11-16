// sub_2762860
// rva 0x02762860  size 544  section .text  group text
// window base 0x182762860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2762860(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, int a5, _DWORD *a6, char a7)
{
  __int64 v7; // rbp
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // ecx
  _DWORD *v12; // rax
  int v13; // r9d
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  _DWORD *v16; // r8
  _DWORD *v17; // r8
  _DWORD *v18; // rcx
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // esi
  int v24; // r8d
  int v25; // r9d
  char v26; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v27; // [rsp+10h] [rbp-38h]
  _DWORD *v28; // [rsp+18h] [rbp-30h]
  _DWORD *v29; // [rsp+20h] [rbp-28h]
  __int64 v30; // [rsp+28h] [rbp-20h]
  _DWORD *v31; // [rsp+30h] [rbp-18h]
  unsigned __int64 v32; // [rsp+38h] [rbp-10h]
  int v33; // [rsp+40h] [rbp-8h]
  int v34; // [rsp+44h] [rbp-4h]

  v32 = a3;
  v31 = a6;
  v10 = (__int64)(v8 + 94166894);
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
LABEL_36:
    sub_2771080(a1, a2, a3, a4, a5, (_DWORD)a6, a7: v26);
LABEL_37:
    v33 = v7;
    sub_2771220(a1, a2, a3: v7, a4: v11, a5: v34, (_DWORD)a6, a7: v26);
    return sub_2762A80(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24, a6: v25, a7);
  }
  if ( a6 == v8 )
    goto LABEL_36;
  v30 = (__int64)(v8 + 94166894);
  v11 = a6[2];
  v34 = v11;
  v7 = 0;
  v29 = v8;
LABEL_4:
  while ( v11 > (int)v7 )
  {
    if ( v11 <= (unsigned int)v7 )
      goto LABEL_37;
    v28 = &v8[2 * a6[v7 + 3]];
    v33 = v7;
    v12 = (_DWORD *)sub_27625C0(a1: (__int64)v28, a2, a3: v10, a4: v11, a5: v28, (int)a6);
    if ( v12 != v8 )
    {
      v14 = *v12 >> 3;
      if ( SHIWORD(v8[2 * v14 + 15]) < 2 || (a3 = (unsigned int)v8[2 * v14 + 4], v8[2 * a3 + 4] != 3988) )
      {
        v12 = (_DWORD *)sub_276FC00(
                          a1,
                          a2,
                          a3: (_DWORD)v12,
                          a4: (_DWORD)v29,
                          a5: (int)v8 + 34097896,
                          a6: v13,
                          a7: v26);
LABEL_33:
        v27 = v12;
        v29 = v15;
        sub_2762F00(a1, a2, a3: v32, a4: v15, a5: v31);
        goto LABEL_34;
      }
    }
    v15 = v29;
    v7 = (unsigned int)(v33 + 1);
    if ( v29 == v8 )
    {
      v29 = v12;
      v11 = v34;
      v10 = v30;
      a6 = v31;
    }
    else
    {
      if ( v12 == v8 )
        goto LABEL_11;
      if ( v12 == v29 )
      {
        v29 = v12;
        v11 = v34;
        v10 = v30;
        a6 = v31;
      }
      else
      {
        a3 = (unsigned __int64)&v8[2 * v12[1]];
        while ( (_DWORD *)a3 != v8 )
        {
          if ( (_DWORD *)a3 == v15 )
          {
            v29 = v12;
            v11 = v34;
            v10 = v30;
            a6 = v31;
            goto LABEL_4;
          }
          if ( *(int *)(v9 + 16) <= 0 )
          {
            v12 = (_DWORD *)sub_277F280(a1, a2, a3);
            a3 = (unsigned __int64)v17;
          }
          else
          {
            a3 = (unsigned __int64)&v8[2 * *(unsigned int *)(a3 + 4)];
          }
        }
LABEL_11:
        if ( v12 != v8 )
        {
          a3 = (unsigned __int64)v15;
          while ( (_DWORD *)a3 != v8 )
          {
            if ( v12 == (_DWORD *)a3 )
            {
              v29 = v15;
              v11 = v34;
              v10 = v30;
              a6 = v31;
              goto LABEL_4;
            }
            if ( *(int *)(v9 + 16) <= 0 )
            {
              v12 = (_DWORD *)sub_277F280(a1, a2, a3);
              a3 = (unsigned __int64)v16;
            }
            else
            {
              a3 = (unsigned __int64)&v8[2 * *(unsigned int *)(a3 + 4)];
            }
          }
          goto LABEL_33;
        }
        v29 = v15;
        v11 = v34;
        v10 = v30;
        a6 = v31;
      }
    }
  }
  v33 = v7;
  v18 = v29;
  if ( *(int *)(v9 + 16) > 0 )
    return (__int64)v18;
LABEL_34:
  v29 = v18;
  sub_277F280(a1, a2, a3);
  return (__int64)v29;
}
