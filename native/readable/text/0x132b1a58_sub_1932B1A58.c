// sub_132B1A58
// rva 0x132b1a58  size 732  section .text  group text
// window base 0x1932b1a58: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B1A58(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  _BYTE *v15; // rdx
  _WORD *v16; // r8
  char v17; // cl
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  __int64 v39; // rdi
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rsi
  int v44; // edi
  int v45; // esi
  __int64 v46; // r8
  int v47; // edx

  v8 = (*(__int64 (**)(void))(*(_QWORD *)a4 + 1312LL))();
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1792LL))(
          a1: v9,
          a2: v8,
          a3,
          a4,
          a5: 0);
  if ( v11 == 0 )
    return 0;
  if ( (unsigned int)v13 <= 0x7FFFFFFE )
  {
    if ( (int)v13 + 1 >= 4 )
      JUMPOUT(0x32650BACDLL);
    v14 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v12, a2: v13, a3: v10, a4: 4);
    v12 = v14;
    if ( v14 != 0 )
    {
      if ( (int)v13 > 0 )
      {
        v15 = (_BYTE *)v14;
        v16 = (_WORD *)v11;
        do
        {
          if ( a5 != 0 && *v16 == 0 )
          {
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1800LL))(
              a1: v14,
              a2: v13,
              a3,
              a4,
              a5: v11);
            __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v42, a2: v43, a3: v41, a4: v42);
            v46 = 542816;
            v47 = 542512;
            goto LABEL_74;
          }
          if ( *v16 < 0x100u )
          {
            if ( (unsigned __int16)(*v16 - 128) > 0x1Fu )
              JUMPOUT(0x32650BB30LL);
            v17 = 63;
            goto LABEL_70;
          }
          v18 = (unsigned __int16)*v16;
          if ( v18 > 0x2019 )
          {
            if ( v18 > 0x2022 )
            {
              v34 = v18 - 8230;
              if ( v34 == 0 )
              {
                v17 = -123;
                goto LABEL_70;
              }
              v35 = v34 - 10;
              if ( v35 == 0 )
              {
                v17 = -119;
                goto LABEL_70;
              }
              v36 = v35 - 9;
              if ( v36 == 0 )
              {
                v17 = -117;
                goto LABEL_70;
              }
              v37 = v36 - 1;
              if ( v37 == 0 )
              {
                v17 = -101;
                goto LABEL_70;
              }
              v38 = v37 - 114;
              if ( v38 == 0 )
              {
                v17 = 0x80;
                goto LABEL_70;
              }
              if ( v38 == 118 )
              {
                v17 = -103;
                goto LABEL_70;
              }
LABEL_63:
              v17 = 63;
              goto LABEL_70;
            }
            if ( v18 == 8226 )
            {
              v17 = -107;
            }
            else
            {
              v29 = v18 - 8218;
              if ( v29 != 0 )
              {
                v30 = v29 - 2;
                if ( v30 != 0 )
                {
                  v31 = v30 - 1;
                  if ( v31 != 0 )
                  {
                    v32 = v31 - 1;
                    if ( v32 != 0 )
                    {
                      v33 = v32 - 2;
                      if ( v33 != 0 )
                      {
                        if ( v33 != 1 )
                          goto LABEL_63;
                        v17 = -121;
                      }
                      else
                      {
                        v17 = -122;
                      }
                    }
                    else
                    {
                      v17 = -124;
                    }
                  }
                  else
                  {
                    v17 = -108;
                  }
                }
                else
                {
                  v17 = -109;
                }
              }
              else
              {
                v17 = -126;
              }
            }
          }
          else if ( v18 == 8217 )
          {
            v17 = -110;
          }
          else if ( v18 > 0x17E )
          {
            v24 = v18 - 402;
            if ( v24 != 0 )
            {
              v25 = v24 - 308;
              if ( v25 != 0 )
              {
                v26 = v25 - 22;
                if ( v26 != 0 )
                {
                  v27 = v26 - 7479;
                  if ( v27 != 0 )
                  {
                    v28 = v27 - 1;
                    if ( v28 != 0 )
                    {
                      if ( v28 != 4 )
                        goto LABEL_63;
                      v17 = -111;
                    }
                    else
                    {
                      v17 = -105;
                    }
                  }
                  else
                  {
                    v17 = -106;
                  }
                }
                else
                {
                  v17 = -104;
                }
              }
              else
              {
                v17 = -120;
              }
            }
            else
            {
              v17 = -125;
            }
          }
          else if ( v18 == 382 )
          {
            v17 = -98;
          }
          else
          {
            v19 = v18 - 338;
            if ( v19 != 0 )
            {
              v20 = v19 - 1;
              if ( v20 != 0 )
              {
                v21 = v20 - 13;
                if ( v21 != 0 )
                {
                  v22 = v21 - 1;
                  if ( v22 != 0 )
                  {
                    v23 = v22 - 23;
                    if ( v23 != 0 )
                    {
                      if ( v23 != 5 )
                        goto LABEL_63;
                      v17 = -114;
                    }
                    else
                    {
                      v17 = -97;
                    }
                  }
                  else
                  {
                    v17 = -102;
                  }
                }
                else
                {
                  v17 = -118;
                }
              }
              else
              {
                v17 = -100;
              }
            }
            else
            {
              v17 = -116;
            }
          }
LABEL_70:
          *v15 = v17;
          ++v16;
          ++v15;
        }
        while ( (__int64)&v15[-v14] < v13 );
      }
      *(_BYTE *)(v13 + v14) = 0;
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1800LL))(
        a1: v14,
        a2: v13,
        a3,
        a4,
        a5: v11);
      return v39;
    }
  }
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1800LL))(
    a1: v12,
    a2: v13,
    a3,
    a4,
    a5: v11);
  v46 = 0;
  v47 = 538568;
LABEL_74:
  JNU_ThrowByName(a1: v44, a2: v45, a3: v47, a4, a5: v46);
  return 0;
}
