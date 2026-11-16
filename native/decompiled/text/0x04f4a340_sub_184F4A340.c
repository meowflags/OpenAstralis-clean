// sub_184F4A340
// rva 0x04f4a340  size 1973  section .text  group text
// window base 0x184f4a340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F4A340(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, int a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // ebx
  unsigned int v12; // ecx
  int v13; // eax
  _DWORD *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 (__fastcall *v22)(_QWORD, _QWORD, _DWORD *, _DWORD *, _QWORD); // rsi
  unsigned int v23; // eax
  __int64 v24; // rdi
  __int64 (__fastcall *v25)(__int64, _QWORD, _DWORD *, _DWORD *, _QWORD); // rbx
  unsigned int v26; // eax
  __int64 (__fastcall *v27)(__int64, _QWORD, _DWORD *, _DWORD *, _QWORD); // rbx
  unsigned int v28; // eax
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64, _QWORD, _DWORD *, _DWORD *, _QWORD); // rbx
  unsigned int v31; // eax
  __int64 (__fastcall *v32)(__int64, __int64, _DWORD *, _DWORD *, _QWORD); // rbx
  unsigned int v33; // eax
  int v34; // eax
  __int64 (__fastcall *v35)(_QWORD, __int64, _DWORD *); // rdi
  unsigned int v36; // eax
  __int64 v37; // rsi
  __int64 (__fastcall *v38)(_QWORD, __int64, _DWORD *, _DWORD *, _QWORD); // rdi
  unsigned int v39; // eax
  __int64 v40; // rsi
  unsigned int v41; // eax
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // [rsp+0h] [rbp-58h] BYREF
  __int64 v52; // [rsp+10h] [rbp-48h]
  __int64 v53; // [rsp+18h] [rbp-40h]
  _DWORD *v54; // [rsp+20h] [rbp-38h]
  _DWORD *v55; // [rsp+28h] [rbp-30h]
  unsigned int v56; // [rsp+30h] [rbp-28h]
  unsigned int v57; // [rsp+34h] [rbp-24h]
  unsigned int v58; // [rsp+38h] [rbp-20h]
  unsigned int v59; // [rsp+3Ch] [rbp-1Ch]
  __int64 v60; // [rsp+40h] [rbp-18h]
  int v61; // [rsp+48h] [rbp-10h]
  unsigned int v62; // [rsp+4Ch] [rbp-Ch]
  int v63; // [rsp+50h] [rbp-8h]
  int v64; // [rsp+54h] [rbp-4h]

  v55 = a3;
  v64 = a5;
  if ( (unsigned __int64)&v51 <= *(_QWORD *)(v9 + 8) )
    goto LABEL_67;
  if ( a3 == v8 )
    goto LABEL_68;
  v63 = a6;
  if ( (unsigned __int16)v8[2 * v8[2 * (*a3 >> 3) + 5]
                          + 3
                          + (v8[2 * (*a3 >> 3) + 11] & (0x568u >> HIBYTE(v8[2 * (*a3 >> 3) + 11])))] != 1384 )
    goto LABEL_69;
  v10 = *a3 >> 3;
  v11 = v8[2 * v10 + 11];
  v54 = &v8[2 * v8[2 * v10 + 5]];
  v62 = v11 & (0x568u >> SHIBYTE(v11));
  v12 = v54[v62 + 3];
  v53 = (__int64)&v8[2 * v10];
  v13 = ((__int64 (*)(void))(v7 + *(_QWORD *)(v53 + HIWORD(v12) + 40)))();
  v61 = v13;
  v17 = 34176760;
  v18 = (unsigned int)v64;
  if ( v64 < 0 || v64 > v13 )
  {
    v60 = 34176760;
    v42 = (unsigned int)v63;
    v43 = *(_QWORD *)(v9 + 40);
    v44 = v43 + 40;
    if ( (unsigned __int64)(v43 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v43 = MEMORY[0x181EAA920](a1: v15, a2: v16, a3: v60, a4: v14, a5: v44, a6: (unsigned int)v63);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v44;
      *(_DWORD *)v43 = 34176760;
      *(_DWORD *)(v43 + 4) = 0;
      *(_QWORD *)(v43 + 8) = 0;
      *(_QWORD *)(v43 + 16) = 0;
      *(_QWORD *)(v43 + 24) = 0;
      *(_QWORD *)(v43 + 32) = 0;
    }
    *(_DWORD *)(v43 + 20) = 46923644;
    *(_DWORD *)(v43 + 16) = v8[93585974];
    *(_DWORD *)(v43 + 12) = (unsigned __int64)(v43 - (_QWORD)v8) >> 3;
    v52 = v43;
    MEMORY[0x18503B9A0](a1: v15, a2: v16, a3: v43, a4: v14, a5: 0, a6: v42);
    v48 = v52;
    goto LABEL_66;
  }
  v19 = (unsigned int)v63;
  if ( v63 < 0 )
  {
    if ( v64 < 1 )
    {
      v15 = (unsigned int)v64;
      v60 = 34176760;
    }
    else
    {
      v60 = 34176760;
      v22 = (__int64 (__fastcall *)(_QWORD, _QWORD, _DWORD *, _DWORD *, _QWORD))(v7
                                                                               + *(_QWORD *)(v53 + HIWORD(v54[v62 + 3])));
      v59 = v64 - 1;
      v23 = v22(a1: (unsigned int)(v64 - 1), a2: v22, a3: v55, a4: v54, a5: (unsigned int)(v64 - 1));
      if ( v23 < 0xDC00 )
      {
        v15 = v59;
      }
      else if ( v23 >= 0xE000 )
      {
        v15 = v59;
      }
      else if ( (int)v59 < 1 )
      {
        v15 = v59;
      }
      else
      {
        v25 = (__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, _DWORD *, _QWORD))(v7
                                                                                  + *(_QWORD *)(v53
                                                                                              + HIWORD(v54[v62 + 3])));
        v58 = v64 - 2;
        v26 = v25(a1: v24, a2: (unsigned int)(v64 - 2), a3: v55, a4: v54, a5: (unsigned int)(v64 - 2));
        if ( v26 < 0xD800 )
        {
          v15 = v59;
        }
        else if ( v26 >= 0xDC00 )
        {
          v15 = v59;
        }
        else
        {
          v15 = v58;
        }
      }
      LODWORD(v19) = v63 + 1;
      while ( 1 )
      {
        v14 = v54;
        v17 = (__int64)v55;
        if ( (int)v15 < 1 || (int)v19 >= 0 )
          break;
        v59 = v19;
        v27 = (__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, _DWORD *, _QWORD))(v7
                                                                                  + *(_QWORD *)(v53
                                                                                              + HIWORD(v54[v62 + 3])));
        v58 = v15;
        v57 = v15 - 1;
        v28 = v27(a1: v15, a2: (unsigned int)(v15 - 1), a3: v55, a4: v54, a5: (unsigned int)(v15 - 1));
        LODWORD(v19) = v59 + 1;
        if ( v28 < 0xDC00 )
        {
          v15 = v57;
        }
        else if ( v28 >= 0xE000 )
        {
          v15 = v57;
        }
        else if ( (int)v57 < 1 )
        {
          v15 = v57;
        }
        else
        {
          v56 = v59 + 1;
          v29 = v58;
          v30 = (__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, _DWORD *, _QWORD))(v7
                                                                                    + *(_QWORD *)(v53
                                                                                                + HIWORD(v54[v62 + 3])));
          v58 -= 2;
          v31 = v30(a1: v29, a2: v58, a3: v55, a4: v54, a5: v58);
          if ( v31 < 0xD800 )
          {
            v15 = v57;
            LODWORD(v19) = v56;
          }
          else
          {
            if ( v31 >= 0xDC00 )
              v15 = v57;
            else
              v15 = v58;
            LODWORD(v19) = v56;
          }
        }
      }
    }
    if ( (int)v19 < 0 )
    {
      v50 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v50 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v57 = v19;
        v56 = v15;
        v50 = MEMORY[0x181EAA920](a1: v15, a2: v16, a3: v60, a4: v14);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v50 + 40;
        *(_DWORD *)v50 = 34176760;
        *(_DWORD *)(v50 + 4) = 0;
        *(_QWORD *)(v50 + 8) = 0;
        *(_QWORD *)(v50 + 16) = 0;
        *(_QWORD *)(v50 + 24) = 0;
        *(_QWORD *)(v50 + 32) = 0;
        v57 = v19;
        v56 = v15;
      }
      *(_DWORD *)(v50 + 20) = 46923644;
      *(_DWORD *)(v50 + 16) = v8[93585974];
      *(_DWORD *)(v50 + 12) = (unsigned __int64)(v50 - (_QWORD)v8) >> 3;
      v52 = v50;
      MEMORY[0x18503B9A0](a1: v15, a2: v16, a3: v50, a4: v14, a5: 0);
      v48 = v52;
      goto LABEL_66;
    }
    v20 = (unsigned int)v19;
    v18 = (unsigned int)v15;
    v19 = (unsigned int)v63;
  }
  else
  {
    if ( v13 > v64 )
    {
      v60 = 34176760;
      if ( v63 < 1 )
      {
        v20 = 0;
      }
      else
      {
        v32 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _QWORD))(v7
                                                                                   + *(_QWORD *)(v53
                                                                                               + HIWORD(v54[v62 + 3])));
        v56 = v64 + 1;
        v33 = v32(a1: v15, a2: v16, a3: v55, a4: v54, a5: (unsigned int)v64);
        if ( v33 < 0xD800 )
        {
          v18 = v56;
        }
        else if ( v33 >= 0xDC00 )
        {
          v18 = v56;
        }
        else if ( v61 > (int)v56 )
        {
          v40 = *(_QWORD *)(v53 + HIWORD(v54[v62 + 3]));
          v41 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _QWORD))(v7 + v40))(
                  a1: v15,
                  a2: v40,
                  a3: v55,
                  a4: v54,
                  a5: v56);
          if ( v41 < 0xDC00 )
          {
            v18 = v56;
          }
          else if ( v41 >= 0xE000 )
          {
            v18 = v56;
          }
          else
          {
            v17 = (unsigned int)(v64 + 2);
            v18 = v17;
          }
        }
        else
        {
          v18 = v56;
        }
        v20 = 1;
        v34 = v61;
        while ( 1 )
        {
          v16 = v53;
          v19 = (unsigned int)v63;
          if ( v34 <= (int)v18 || v63 <= (int)v20 )
            break;
          v56 = v20;
          v35 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *))(v7 + *(_QWORD *)(v53 + HIWORD(v54[v62 + 3])));
          v57 = v18;
          v58 = v18 + 1;
          v36 = v35(a1: v35, a2: v53, a3: v55);
          v20 = v56 + 1;
          if ( v36 < 0xD800 )
          {
            v18 = v58;
            v34 = v61;
          }
          else if ( v36 >= 0xDC00 )
          {
            v18 = v58;
            v34 = v61;
          }
          else
          {
            v34 = v61;
            if ( v61 > (int)v58 )
            {
              v59 = v56 + 1;
              v38 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, _DWORD *, _QWORD))(v7
                                                                                        + *(_QWORD *)(v53 + HIWORD(v54[v62 + 3])));
              v39 = v38(a1: v38, a2: v37, a3: v55, a4: v54, a5: v58);
              if ( v39 < 0xDC00 )
              {
                v18 = v58;
                v20 = v59;
                v34 = v61;
              }
              else
              {
                if ( v39 >= 0xE000 )
                  v18 = v58;
                else
                  v18 = v57 + 2;
                v20 = v59;
                v34 = v61;
              }
            }
            else
            {
              v18 = v58;
            }
          }
        }
      }
    }
    else
    {
      v20 = 0;
      v60 = 34176760;
    }
    if ( (int)v19 > (int)v20 )
    {
      while ( 1 )
      {
        v49 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v49 + 40) > *(_QWORD *)(v9 + 32) )
        {
          v62 = v20;
          v58 = v18;
          v49 = MEMORY[0x181EAA920](a1: v15, a2: v16, a3: v60);
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v49 + 40;
          *(_DWORD *)v49 = 34176760;
          *(_DWORD *)(v49 + 4) = 0;
          *(_QWORD *)(v49 + 8) = 0;
          *(_QWORD *)(v49 + 16) = 0;
          *(_QWORD *)(v49 + 24) = 0;
          *(_QWORD *)(v49 + 32) = 0;
          v62 = v20;
          v58 = v18;
        }
        *(_DWORD *)(v49 + 20) = 46923644;
        *(_DWORD *)(v49 + 16) = v8[93585974];
        *(_DWORD *)(v49 + 12) = (unsigned __int64)(v49 - (_QWORD)v8) >> 3;
        v53 = v49;
        MEMORY[0x18503B9A0](a1: v15, a2: v16, a3: v49, a4: v20, a5: 0);
        v48 = v53;
LABEL_66:
        MEMORY[0x182769900](a1: v46, a2: v47, a3: v48, a4: v45, a5: &a7);
LABEL_67:
        MEMORY[0x181EB84E0]();
LABEL_68:
        MEMORY[0x182771080]();
LABEL_69:
        MEMORY[0x182770780]();
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v15, a2: v16, a3: v17, a4: v20, a5: v18, a6: v19);
  return (unsigned int)v18;
}
