// sub_4F46080
// rva 0x04f46080  size 951  section .text  group text
// window base 0x184f46080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F46080(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // ebx
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 (__fastcall *v18)(__int64, _QWORD, _DWORD *, _DWORD *, _QWORD); // rsi
  unsigned int v19; // eax
  unsigned int v20; // ecx
  _DWORD *v21; // rax
  __int64 v22; // rbp
  _DWORD *v23; // rcx
  int v24; // r9d
  __int64 (__fastcall *v25)(_QWORD, __int64, _DWORD *, _DWORD *, _QWORD); // rdi
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v30; // [rsp+8h] [rbp-30h]
  _DWORD *v31; // [rsp+10h] [rbp-28h]
  _DWORD *v32; // [rsp+18h] [rbp-20h]
  unsigned int v33; // [rsp+20h] [rbp-18h]
  unsigned int v34; // [rsp+24h] [rbp-14h]
  unsigned int v35; // [rsp+28h] [rbp-10h]
  unsigned int v36; // [rsp+2Ch] [rbp-Ch]
  int v37; // [rsp+30h] [rbp-8h]
  unsigned int v38; // [rsp+34h] [rbp-4h]

  v32 = a3;
  v38 = a5;
  v37 = a6;
  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 != v7 )
  {
    if ( (unsigned __int16)v7[2 * v7[2 * (*a3 >> 3) + 5]
                            + 3
                            + (v7[2 * (*a3 >> 3) + 11] & (0x568u >> HIBYTE(v7[2 * (*a3 >> 3) + 11])))] != 1384 )
    {
LABEL_33:
      sub_2770780();
LABEL_34:
      v16 = v34;
      v20 = v35;
      goto LABEL_12;
    }
    v9 = *a3 >> 3;
    v10 = v7[2 * v9 + 11];
    v31 = &v7[2 * v7[2 * v9 + 5]];
    v36 = v10 & (0x568u >> SHIBYTE(v10));
    v11 = v31[v36 + 3];
    v30 = &v7[2 * v9];
    v35 = ((__int64 (*)(void))(v6 + *(_QWORD *)((char *)v30 + HIWORD(v11) + 40)))();
    sub_632A360(a1: v7, a2: v13, a3: v38, a4: v12, a5: (unsigned int)v37, a6: v35);
    if ( v37 <= (int)v38 )
    {
      v16 = v38;
      result = v37 - v38;
      goto LABEL_6;
    }
    v35 = v37 - v38;
    v18 = (__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, _DWORD *, _QWORD))(v6
                                                                              + *(_QWORD *)((char *)v30
                                                                                          + HIWORD(v31[v36 + 3])));
    v34 = v38 + 1;
    v19 = v18(a1: v14, a2: v18, a3: v32, a4: v31, a5: v38);
    if ( v19 < 0xD800 )
    {
      v16 = v34;
      v20 = v35;
      goto LABEL_12;
    }
    if ( v19 >= 0xDC00 )
      goto LABEL_34;
    if ( v37 > (int)v34 )
    {
      v28 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _QWORD))(v6
                                                                                  + *(_QWORD *)((char *)v30
                                                                                              + HIWORD(v31[v36 + 3]))))(
              a1: v14,
              a2: v15,
              a3: v32,
              a4: v31,
              a5: v34);
      if ( v28 < 0xDC00 )
      {
        v16 = v34;
        v20 = v35;
      }
      else if ( v28 >= 0xE000 )
      {
        v16 = v34;
        v20 = v35;
      }
      else
      {
        v20 = v35 - 1;
        v16 = v38 + 2;
      }
    }
    else
    {
      v16 = v34;
      v20 = v35;
    }
LABEL_12:
    v35 = v20;
    v21 = v30;
    v22 = v36;
    v23 = v31;
    v24 = v37;
    while ( v24 > (int)v16 )
    {
      v25 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, _DWORD *, _QWORD))(v6
                                                                                + *(_QWORD *)((char *)v21
                                                                                            + HIWORD(v23[v22 + 3])));
      v34 = v16;
      v33 = v16 + 1;
      v26 = v25(a1: v25, a2: v15, a3: v32, a4: v23, a5: (unsigned int)v16);
      if ( v26 < 0xD800 )
      {
        v16 = v33;
        v21 = v30;
        v22 = v36;
        v23 = v31;
        v24 = v37;
      }
      else if ( v26 >= 0xDC00 )
      {
        v16 = v33;
        v21 = v30;
        v22 = v36;
        v23 = v31;
        v24 = v37;
      }
      else
      {
        v24 = v37;
        if ( v37 > (int)v33 )
        {
          v27 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _QWORD))(v6
                                                                                      + *(_QWORD *)((char *)v30
                                                                                                  + HIWORD(v31[v36 + 3]))))(
                  a1: v14,
                  a2: v15,
                  a3: v32,
                  a4: v31,
                  a5: v33);
          if ( v27 < 0xDC00 )
          {
            v16 = v33;
            v21 = v30;
            v22 = v36;
            v23 = v31;
            v24 = v37;
          }
          else
          {
            if ( v27 >= 0xE000 )
            {
              v16 = v33;
            }
            else
            {
              --v35;
              v16 = v34 + 2;
            }
            v21 = v30;
            v22 = v36;
            v23 = v31;
            v24 = v37;
          }
        }
        else
        {
          v16 = v33;
          v21 = v30;
          v22 = v36;
          v23 = v31;
        }
      }
    }
    result = v35;
LABEL_6:
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v14, a2: v15, a3: v16);
    return result;
  }
  sub_2771080();
  goto LABEL_33;
}
