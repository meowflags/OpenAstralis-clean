// JNU_CallMethodByNameV
// rva 0x132b0558  size 604  section .text  group text
// window base 0x1932b0558: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_CallMethodByNameV(
        _DWORD a1,
        _DWORD a2,
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
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        double a19,
        __int64 a20)
{
  double v12; // r14
  double v16; // rsi
  char i; // al
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r8
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  __int16 v31; // ax
  char v32; // al
  __int64 v33; // rax
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx

  v12 = a19;
  v16 = a19;
  for ( i = **(_BYTE **)&a19; i != 0 && i != 41; i = **(_BYTE **)&v16 )
    ++*(_QWORD *)&v16;
  LODWORD(a19) = 0;
  if ( (*(int (__fastcall **)(__int64, double, __int64))(*(_QWORD *)a4 + 208LL))(
         a1: a5,
         a2: COERCE_DOUBLE(*(_QWORD *)&v16),
         a3: 3) < 0 )
    goto LABEL_34;
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 248LL))(
          a1: v18,
          a2: v19,
          a3: v18,
          a4);
  v25 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, double))(*(_QWORD *)a4 + 264LL))(
          a1: v21,
          a2: v22,
          a3: v20,
          a4,
          a5: a6,
          a6: COERCE_DOUBLE(*(_QWORD *)&v12));
  if ( v25 != 0 )
  {
    v26 = *(char *)(v24 + 1);
    if ( v26 > 74 )
    {
      v34 = v26 - 76;
      if ( v34 != 0 )
      {
        v35 = v34 - 7;
        if ( v35 == 0 )
        {
          v31 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 376LL))(
                  a1: v23,
                  a2: v24,
                  a3: v23,
                  a4,
                  a5: v25,
                  a6: a20);
          goto LABEL_18;
        }
        v36 = v35 - 3;
        if ( v36 == 0 )
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 496LL))(
            a1: v23,
            a2: v24,
            a3: v23,
            a4,
            a5: v25,
            a6: a20);
          goto LABEL_33;
        }
        v37 = v36 - 4;
        if ( v37 == 0 )
        {
          v32 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 304LL))(
                  a1: v23,
                  a2: v24,
                  a3: v23,
                  a4,
                  a5: v25,
                  a6: a20);
          goto LABEL_28;
        }
        if ( v37 != 1 )
          goto LABEL_26;
      }
      *(double *)&v33 = COERCE_DOUBLE(
                          (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 280LL))(
                            a1: v23,
                            a2: v24,
                            a3: v23,
                            a4,
                            a5: v25,
                            a6: a20));
    }
    else
    {
      if ( v26 != 74 )
      {
        v27 = v26 - 66;
        if ( v27 != 0 )
        {
          v28 = v27 - 1;
          if ( v28 != 0 )
          {
            v29 = v28 - 1;
            if ( v29 == 0 )
            {
              a19 = (*(double (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 472LL))(
                      a1: v23,
                      a2: v24,
                      a3: v23,
                      a4,
                      a5: v25,
                      a6: a20);
              goto LABEL_33;
            }
            v30 = v29 - 2;
            if ( v30 == 0 )
            {
              LODWORD(a19) = (*(float (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 448LL))(
                               a1: v23,
                               a2: v24,
                               a3: v23,
                               a4,
                               a5: v25,
                               a6: a20);
              goto LABEL_33;
            }
            if ( v30 == 3 )
            {
              LODWORD(a19) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 400LL))(
                               a1: v23,
                               a2: v24,
                               a3: v23,
                               a4,
                               a5: v25,
                               a6: a20);
              goto LABEL_33;
            }
LABEL_26:
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 144LL))(
              a1: v23,
              a2: v24,
              a3: 542768,
              a4);
            goto LABEL_33;
          }
          v31 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 352LL))(
                  a1: v23,
                  a2: v24,
                  a3: v23,
                  a4,
                  a5: v25,
                  a6: a20);
LABEL_18:
          LOWORD(a19) = v31;
          goto LABEL_33;
        }
        v32 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 328LL))(
                a1: v23,
                a2: v24,
                a3: v23,
                a4,
                a5: v25,
                a6: a20);
LABEL_28:
        LOBYTE(a19) = v32;
        goto LABEL_33;
      }
      *(double *)&v33 = COERCE_DOUBLE(
                          (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 424LL))(
                            a1: v23,
                            a2: v24,
                            a3: v23,
                            a4,
                            a5: v25,
                            a6: a20));
    }
    a19 = *(double *)&v33;
  }
LABEL_33:
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(a1: v23, a2: v24, a3: v20, a4);
LABEL_34:
  if ( a3 != nullptr )
    *a3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
            a1: v18,
            a2: v19,
            a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
            a4);
  return *(_QWORD *)&a19;
}
