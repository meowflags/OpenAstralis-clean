// JNU_SetFieldByName
// rva 0x132b1118  size 464  section .text  group text
// window base 0x1932b1118: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_SetFieldByName(
        __int64 a1,
        __int64 a2,
        __int64 a3,
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
        int a15,
        int a16,
        int a17,
        int a18,
        char *a19,
        double a20)
{
  __int64 result; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  double v24; // xmm0_8
  double v25; // xmm1_8
  double v26; // xmm2_8
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  void (__fastcall *v32)(__int64, __int64, __int64, __int64, __int64, __int64); // r10
  int v33; // edx
  int v34; // edx
  int v35; // edx
  _BYTE *v36; // rsi

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 208LL))(a1: a5, a2: a3, a3: 3);
  if ( (int)result < 0 )
    goto LABEL_27;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 248LL))(
          a1: v15,
          a2: v16,
          a3: v15,
          a4);
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, char *))(*(_QWORD *)a4 + 752LL))(
          a1: v18,
          a2: v19,
          a3: v17,
          a4,
          a5: a6,
          a6: a19);
  if ( v22 != 0 )
  {
    v27 = *a19;
    if ( v27 <= 74 )
    {
      if ( v27 == 74 )
      {
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, double))(*(_QWORD *)a4 + 880LL))(
          a1: v20,
          a2: v21,
          a3: v20,
          a4,
          a5: v22,
          a6: COERCE_DOUBLE(*(_QWORD *)&a20));
        goto LABEL_26;
      }
      v28 = v27 - 66;
      if ( v28 != 0 )
      {
        v29 = v28 - 1;
        if ( v29 == 0 )
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 856LL))(
            a1: v20,
            a2: v21,
            a3: v20,
            a4,
            a5: v22,
            a6: LOWORD(a20));
          goto LABEL_26;
        }
        v30 = v29 - 1;
        if ( v30 == 0 )
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, double, double, double, double))(*(_QWORD *)a4 + 896LL))(
            a1: v20,
            a2: v21,
            a3: v20,
            a4,
            a5: v22,
            a6: v24,
            a7: v25,
            a8: v26,
            a9: a20);
          goto LABEL_26;
        }
        v31 = v30 - 2;
        if ( v31 == 0 )
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, double, double, double, double))(*(_QWORD *)a4 + 888LL))(
            a1: v20,
            a2: v21,
            a3: v20,
            a4,
            a5: v22,
            a6: v24,
            a7: v25,
            a8: v26,
            a9: a20);
          goto LABEL_26;
        }
        if ( v31 == 3 )
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 872LL))(
            a1: v20,
            a2: v21,
            a3: v20,
            a4,
            a5: v22,
            a6: LODWORD(a20));
          goto LABEL_26;
        }
LABEL_21:
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 144LL))(
          a1: v20,
          a2: v21,
          a3: 543384,
          a4);
        goto LABEL_26;
      }
      v32 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 848LL);
LABEL_23:
      LOBYTE(v23) = LOBYTE(a20);
      v32(a1: v20, a2: v21, a3: v20, a4, a5: v22, a6: v23);
      goto LABEL_26;
    }
    v33 = v27 - 76;
    if ( v33 != 0 )
    {
      v34 = v33 - 7;
      if ( v34 == 0 )
      {
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 864LL))(
          a1: v20,
          a2: v21,
          a3: v20,
          a4,
          a5: v22,
          a6: LOWORD(a20));
        goto LABEL_26;
      }
      v35 = v34 - 7;
      if ( v35 == 0 )
      {
        v32 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 840LL);
        goto LABEL_23;
      }
      if ( v35 != 1 )
        goto LABEL_21;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, double))(*(_QWORD *)a4 + 832LL))(
      a1: v20,
      a2: v21,
      a3: v20,
      a4,
      a5: v22,
      a6: COERCE_DOUBLE(*(_QWORD *)&a20));
  }
LABEL_26:
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(
             a1: v20,
             a2: v21,
             a3: v17,
             a4);
LABEL_27:
  if ( v16 != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
               a1: v15,
               a2: v16,
               a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
               a4);
    *v36 = result;
  }
  return result;
}
