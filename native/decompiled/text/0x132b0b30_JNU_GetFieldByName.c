// JNU_GetFieldByName
// rva 0x132b0b30  size 504  section .text  group text
// window base 0x1932b0b30: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_GetFieldByName(
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
        __int64 a18,
        __int64 a19)
{
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rdi
  char *v19; // rsi
  __int64 v20; // r8
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  __int16 v26; // ax
  char v27; // al
  __int64 v28; // rax
  int v29; // edx
  int v30; // edx
  int v31; // edx

  LODWORD(a15) = 0;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 208LL))(a1: a5, a2, a3: 3) >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 248LL))(
            a1: v14,
            a2: v15,
            a3: v14,
            a4);
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
            a1: v17,
            a2: a19,
            a3: v16,
            a4,
            a5: a6,
            a6: a19);
    if ( v20 == 0 )
    {
LABEL_27:
      (*(void (__fastcall **)(__int64, char *, __int64, __int64))(*(_QWORD *)a4 + 184LL))(a1: v18, a2: v19, a3: v16, a4);
      goto LABEL_28;
    }
    v21 = *v19;
    if ( v21 > 74 )
    {
      v29 = v21 - 76;
      if ( v29 != 0 )
      {
        v30 = v29 - 7;
        if ( v30 == 0 )
        {
          v26 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 792LL))(
                  a1: v18,
                  a2: v19,
                  a3: v18,
                  a4,
                  a5: v20);
          goto LABEL_14;
        }
        v31 = v30 - 7;
        if ( v31 == 0 )
        {
          v27 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 768LL))(
                  a1: v18,
                  a2: v19,
                  a3: v18,
                  a4,
                  a5: v20);
          goto LABEL_23;
        }
        if ( v31 != 1 )
          goto LABEL_21;
      }
      v28 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 760LL))(
              a1: v18,
              a2: v19,
              a3: v18,
              a4,
              a5: v20);
    }
    else
    {
      if ( v21 != 74 )
      {
        v22 = v21 - 66;
        if ( v22 != 0 )
        {
          v23 = v22 - 1;
          if ( v23 != 0 )
          {
            v24 = v23 - 1;
            if ( v24 == 0 )
            {
              a15 = (*(double (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 824LL))(
                      a1: v18,
                      a2: v19,
                      a3: v18,
                      a4,
                      a5: v20);
              goto LABEL_27;
            }
            v25 = v24 - 2;
            if ( v25 == 0 )
            {
              LODWORD(a15) = (*(float (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 816LL))(
                               a1: v18,
                               a2: v19,
                               a3: v18,
                               a4,
                               a5: v20);
              goto LABEL_27;
            }
            if ( v25 == 3 )
            {
              LODWORD(a15) = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 800LL))(
                               a1: v18,
                               a2: v19,
                               a3: v18,
                               a4,
                               a5: v20);
              goto LABEL_27;
            }
LABEL_21:
            (*(void (__fastcall **)(__int64, char *, __int64, __int64))(*(_QWORD *)a4 + 144LL))(
              a1: v18,
              a2: v19,
              a3: 543344,
              a4);
            goto LABEL_27;
          }
          v26 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 784LL))(
                  a1: v18,
                  a2: v19,
                  a3: v18,
                  a4,
                  a5: v20);
LABEL_14:
          LOWORD(a15) = v26;
          goto LABEL_27;
        }
        v27 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 776LL))(
                a1: v18,
                a2: v19,
                a3: v18,
                a4,
                a5: v20);
LABEL_23:
        LOBYTE(a15) = v27;
        goto LABEL_27;
      }
      v28 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)a4 + 808LL))(
              a1: v18,
              a2: v19,
              a3: v18,
              a4,
              a5: v20);
    }
    a15 = *(double *)&v28;
    goto LABEL_27;
  }
LABEL_28:
  if ( a3 != nullptr )
    *a3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
            a1: v14,
            a2: v15,
            a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
            a4);
  return *(_QWORD *)&a15;
}
