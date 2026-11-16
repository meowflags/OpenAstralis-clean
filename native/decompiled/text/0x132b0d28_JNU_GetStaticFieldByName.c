// JNU_GetStaticFieldByName
// rva 0x132b0d28  size 498  section .text  group text
// window base 0x1932b0d28: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_GetStaticFieldByName(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15,
        __int64 a16,
        __int64 a17,
        int a18,
        __int64 a19)
{
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  char *v18; // rsi
  __int64 v19; // r8
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  __int16 v25; // ax
  char v26; // al
  __int64 v27; // rax
  int v28; // edx
  int v29; // edx
  int v30; // edx

  LODWORD(a15) = 0;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 208LL))(a1: a5, a2, a3: 3) >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 48LL))(
            a1: v14,
            a2: v15,
            a3: v14,
            a4);
    v14 = v16;
    if ( v16 != 0 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1152LL))(
              a1: v16,
              a2: a19,
              a3: v16,
              a4,
              a5: a6,
              a6: a19);
      if ( v19 == 0 )
      {
LABEL_28:
        (*(void (__fastcall **)(__int64, char *, __int64, __int64))(*(_QWORD *)a4 + 184LL))(
          a1: v17,
          a2: v18,
          a3: v17,
          a4);
        goto LABEL_29;
      }
      v20 = *v18;
      if ( v20 > 74 )
      {
        v28 = v20 - 76;
        if ( v28 != 0 )
        {
          v29 = v28 - 7;
          if ( v29 == 0 )
          {
            v25 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 1192LL))(
                    a1: v17,
                    a2: v18,
                    a3: v17,
                    a4,
                    a5: v19);
            goto LABEL_15;
          }
          v30 = v29 - 7;
          if ( v30 == 0 )
          {
            v26 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 1168LL))(
                    a1: v17,
                    a2: v18,
                    a3: v17,
                    a4,
                    a5: v19);
            goto LABEL_24;
          }
          if ( v30 != 1 )
            goto LABEL_22;
        }
        v27 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 1160LL))(
                a1: v17,
                a2: v18,
                a3: v17,
                a4,
                a5: v19);
      }
      else
      {
        if ( v20 != 74 )
        {
          v21 = v20 - 66;
          if ( v21 != 0 )
          {
            v22 = v21 - 1;
            if ( v22 != 0 )
            {
              v23 = v22 - 1;
              if ( v23 == 0 )
              {
                a15 = (*(double (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 1224LL))(
                        a1: v17,
                        a2: v18,
                        a3: v17,
                        a4,
                        a5: v19);
                goto LABEL_28;
              }
              v24 = v23 - 2;
              if ( v24 == 0 )
              {
                LODWORD(a15) = (*(float (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 1216LL))(
                                 a1: v17,
                                 a2: v18,
                                 a3: v17,
                                 a4,
                                 a5: v19);
                goto LABEL_28;
              }
              if ( v24 == 3 )
              {
                LODWORD(a15) = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 1200LL))(
                                 a1: v17,
                                 a2: v18,
                                 a3: v17,
                                 a4,
                                 a5: v19);
                goto LABEL_28;
              }
LABEL_22:
              (*(void (__fastcall **)(__int64, char *, __int64, __int64))(*(_QWORD *)a4 + 144LL))(
                a1: v17,
                a2: v18,
                a3: 543424,
                a4);
              goto LABEL_28;
            }
            v25 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 1184LL))(
                    a1: v17,
                    a2: v18,
                    a3: v17,
                    a4,
                    a5: v19);
LABEL_15:
            LOWORD(a15) = v25;
            goto LABEL_28;
          }
          v26 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 1176LL))(
                  a1: v17,
                  a2: v18,
                  a3: v17,
                  a4,
                  a5: v19);
LABEL_24:
          LOBYTE(a15) = v26;
          goto LABEL_28;
        }
        v27 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 1208LL))(
                a1: v17,
                a2: v18,
                a3: v17,
                a4,
                a5: v19);
      }
      a15 = *(double *)&v27;
      goto LABEL_28;
    }
  }
LABEL_29:
  if ( a3 != nullptr )
    *a3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
            a1: v14,
            a2: v15,
            a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
            a4);
  return *(_QWORD *)&a15;
}
