// sub_1932BE160
// rva 0x132be160  size 676  section .text  group text
// window base 0x1932be160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BE160(
        _DWORD a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  int v18; // r12d
  int v19; // r15d
  int v20; // ecx
  unsigned int v21; // r13d
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rbx
  int v33; // r15d
  int v34; // eax
  __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // rbx
  int v42; // eax

  v18 = a3 / 8;
  if ( a11 != 0 && a12 != 0 && a13 != 0 && a14 != 0 && a15 != 0 && a16 != 0 )
  {
    v19 = 1;
    v20 = a3 / 16 + 4 * v18;
  }
  else
  {
    v19 = 0;
    v20 = a3 / 8;
  }
  v21 = v20 + 20;
  v22 = 0;
  v23 = sub_1932BE404(a1: a4, a2, a3: a4, a4: v20 + 20, a5: 0, a6);
  v25 = v23;
  v26 = 0;
  if ( v23 != 0 )
  {
    *(_BYTE *)v23 = (v19 != 0) + 6;
    *(_BYTE *)(v23 + 1) = 2;
    *(_WORD *)(v23 + 2) = 0;
    *(_DWORD *)(v23 + 4) = 41984;
    *(_DWORD *)(v23 + 8) = v19 != 0 ? 843141970 : 826364754;
    *(_DWORD *)(v23 + 12) = a3;
    *(_DWORD *)(v23 + 16) = 0;
    v27 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v24 + 1368LL))(
            a1: v24,
            a2: v23,
            a3: a6,
            a4: v24);
    if ( v27 <= 4 )
    {
      if ( (int)sub_1932BDF38(a1: v28, a2: v29, a3: a6, a4: v28, a5: v29 + 16, a6: v27) >= 0 )
      {
        v30 = v25 + 20;
        v31 = sub_1932BDF38(a1: v24, a2: v25, a3: a5, a4: v24, a5: v25 + 20, a6: v18);
        if ( v31 >= 0 )
        {
          if ( v19 == 0 )
            goto LABEL_21;
          v32 = v31 + v30;
          v33 = v18 / 2;
          v34 = sub_1932BDF38(a1: v24, a2: v25, a3: a12, a4: v24, a5: v32, a6: v18 / 2);
          if ( v34 >= 0 )
          {
            v35 = v34 + v32;
            v36 = sub_1932BDF38(a1: v24, a2: v25, a3: a13, a4: v24, a5: v35, a6: v33);
            if ( v36 >= 0 )
            {
              v37 = v36 + v35;
              v38 = sub_1932BDF38(a1: v24, a2: v25, a3: a14, a4: v24, a5: v37, a6: v33);
              if ( v38 >= 0 )
              {
                v39 = v38 + v37;
                v40 = sub_1932BDF38(a1: v24, a2: v25, a3: a15, a4: v24, a5: v39, a6: v33);
                if ( v40 >= 0 )
                {
                  v41 = v40 + v39;
                  v42 = sub_1932BDF38(a1: v24, a2: v25, a3: a16, a4: v24, a5: v41, a6: v33);
                  if ( v42 >= 0 && (int)sub_1932BDF38(a1: v24, a2: v25, a3: a11, a4: v24, a5: v41 + v42, a6: v18) >= 0 )
                  {
LABEL_21:
                    v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v24 + 1408LL))(
                            a1: v24,
                            a2: v25,
                            a3: v21,
                            a4: v24);
                    if ( v22 != 0 )
                      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v24
                                                                                                 + 1664LL))(
                        a1: v24,
                        a2: v25,
                        a3: v22,
                        a4: v24,
                        a5: 0,
                        a6: v21);
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      sub_1932BDD9C(a1: v28, a2: v29, a3: 546744, a4: v28, a5: 2148073482LL);
    }
  }
  if ( v25 != 0 )
    sub_1932C97D0(a1: v24, a2: v25, a3: v26, a4: v25);
  return v22;
}
