// JNU_CallStaticMethodByName
// rva 0x132b07b4  size 542  section .text  group text
// window base 0x1932b07b4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_CallStaticMethodByName(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _BYTE *a11,
        char a12)
{
  _BYTE *i; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  __int16 v27; // ax
  char v28; // al
  __int64 v29; // rax
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  double v35; // [rsp+20h] [rbp-38h]

  for ( i = a11; *i != 0 && *i != 41; ++i )
    ;
  LODWORD(v35) = 0;
  if ( (*(int (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a4 + 208LL))(a1: a5, a2: i, a3: 3) < 0 )
    goto LABEL_35;
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 48LL))(
          a1: v16,
          a2: v17,
          a3: v16,
          a4);
  v16 = v18;
  if ( v18 == 0 )
    goto LABEL_35;
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _BYTE *))(*(_QWORD *)a4 + 904LL))(
          a1: v18,
          a2: v17,
          a3: v18,
          a4,
          a5: a6,
          a6: a11);
  if ( v21 != 0 )
  {
    v22 = *(char *)(v20 + 1);
    if ( v22 > 74 )
    {
      v30 = v22 - 76;
      if ( v30 != 0 )
      {
        v31 = v30 - 7;
        if ( v31 == 0 )
        {
          v27 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, char *))(*(_QWORD *)a4 + 1016LL))(
                  a1: v19,
                  a2: v20,
                  a3: v19,
                  a4,
                  a5: v21,
                  a6: &a12);
          goto LABEL_19;
        }
        v32 = v31 - 3;
        if ( v32 == 0 )
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, char *))(*(_QWORD *)a4 + 1136LL))(
            a1: v19,
            a2: v20,
            a3: v19,
            a4,
            a5: v21,
            a6: &a12);
          goto LABEL_34;
        }
        v33 = v32 - 4;
        if ( v33 == 0 )
        {
          v28 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, char *))(*(_QWORD *)a4 + 944LL))(
                  a1: v19,
                  a2: v20,
                  a3: v19,
                  a4,
                  a5: v21,
                  a6: &a12);
          goto LABEL_29;
        }
        if ( v33 != 1 )
          goto LABEL_27;
      }
      v29 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, char *))(*(_QWORD *)a4 + 920LL))(
              a1: v19,
              a2: v20,
              a3: v19,
              a4,
              a5: v21,
              a6: &a12);
    }
    else
    {
      if ( v22 != 74 )
      {
        v23 = v22 - 66;
        if ( v23 != 0 )
        {
          v24 = v23 - 1;
          if ( v24 != 0 )
          {
            v25 = v24 - 1;
            if ( v25 == 0 )
            {
              v35 = (*(double (__fastcall **)(__int64, __int64, __int64, __int64, __int64, char *))(*(_QWORD *)a4
                                                                                                  + 1112LL))(
                      a1: v19,
                      a2: v20,
                      a3: v19,
                      a4,
                      a5: v21,
                      a6: &a12);
              goto LABEL_34;
            }
            v26 = v25 - 2;
            if ( v26 == 0 )
            {
              LODWORD(v35) = (*(float (__fastcall **)(__int64, __int64, __int64, __int64, __int64, char *))(*(_QWORD *)a4 + 1088LL))(
                               a1: v19,
                               a2: v20,
                               a3: v19,
                               a4,
                               a5: v21,
                               a6: &a12);
              goto LABEL_34;
            }
            if ( v26 == 3 )
            {
              LODWORD(v35) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, char *))(*(_QWORD *)a4 + 1040LL))(
                               a1: v19,
                               a2: v20,
                               a3: v19,
                               a4,
                               a5: v21,
                               a6: &a12);
              goto LABEL_34;
            }
LABEL_27:
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, char *))(*(_QWORD *)a4 + 144LL))(
              a1: v19,
              a2: v20,
              a3: 542720,
              a4,
              a5: *(_QWORD *)(*(_QWORD *)a4 + 144LL),
              a6: &a12);
            goto LABEL_34;
          }
          v27 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, char *))(*(_QWORD *)a4 + 992LL))(
                  a1: v19,
                  a2: v20,
                  a3: v19,
                  a4,
                  a5: v21,
                  a6: &a12);
LABEL_19:
          LOWORD(v35) = v27;
          goto LABEL_34;
        }
        v28 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, char *))(*(_QWORD *)a4 + 968LL))(
                a1: v19,
                a2: v20,
                a3: v19,
                a4,
                a5: v21,
                a6: &a12);
LABEL_29:
        LOBYTE(v35) = v28;
        goto LABEL_34;
      }
      v29 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, char *))(*(_QWORD *)a4 + 1064LL))(
              a1: v19,
              a2: v20,
              a3: v19,
              a4,
              a5: v21,
              a6: &a12);
    }
    v35 = *(double *)&v29;
  }
LABEL_34:
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(a1: v19, a2: v20, a3: v19, a4);
LABEL_35:
  if ( a3 != nullptr )
    *a3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
            a1: v16,
            a2: v17,
            a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
            a4);
  return *(_QWORD *)&v35;
}
