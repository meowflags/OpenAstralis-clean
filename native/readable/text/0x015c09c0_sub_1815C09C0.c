// sub_15C09C0
// rva 0x015c09c0  size 1291  section .text  group text
// window base 0x1815c09c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C09C0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  _DWORD *v4; // r14
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // eax
  double v24; // xmm0_8
  double v25; // xmm1_8
  double v26; // xmm2_8
  double v27; // xmm3_8
  __int64 v28; // rsi
  double v29; // xmm4_8
  double v30; // xmm5_8
  double v31; // rdi
  double v32; // xmm6_8
  double v33; // xmm7_8
  int v34; // ecx
  double v35; // xmm8_8
  double v36; // xmm9_8
  double v37; // xmm10_8
  double v38; // xmm11_8
  __int64 result; // rax
  __int64 v40; // [rsp+0h] [rbp-A8h] BYREF
  _DWORD *v41; // [rsp+10h] [rbp-98h]
  int v42; // [rsp+1Ch] [rbp-8Ch]
  double v43; // [rsp+20h] [rbp-88h]
  double v44; // [rsp+28h] [rbp-80h]
  double v45; // [rsp+30h] [rbp-78h]
  double v46; // [rsp+38h] [rbp-70h]
  double v47; // [rsp+40h] [rbp-68h]
  double v48; // [rsp+48h] [rbp-60h]
  int v49; // [rsp+54h] [rbp-54h]
  int v50; // [rsp+58h] [rbp-50h]
  unsigned int v51; // [rsp+5Ch] [rbp-4Ch]
  int v52; // [rsp+60h] [rbp-48h]
  int v53; // [rsp+64h] [rbp-44h]
  double v54; // [rsp+68h] [rbp-40h]
  double v55; // [rsp+70h] [rbp-38h]
  int v56; // [rsp+7Ch] [rbp-2Ch]
  double v57; // [rsp+80h] [rbp-28h]
  double v58; // [rsp+88h] [rbp-20h]
  int v59; // [rsp+94h] [rbp-14h]
  double v60; // [rsp+98h] [rbp-10h]
  double v61; // [rsp+A0h] [rbp-8h]

  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v5 + 8) )
  {
    v41 = a3;
    sub_1EB84E0();
  }
  else if ( a3 != v4 )
  {
    v42 = *a3 >> 3;
    *(_QWORD *)&v61 = v3 + *(_QWORD *)&v4[2 * v42 + 66];
    v41 = a3;
    v6 = (*(__int64 (**)(void))&v61)();
    v7 = *(_QWORD *)&v4[2 * v42 + 68];
    v60 = (double)v6;
    v59 = v6;
    *(_QWORD *)&v58 = v3 + v7;
    v10 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v3 + v7))(a1: v8, a2: v9, a3: v41);
    v11 = *(_QWORD *)&v4[2 * v42 + 70];
    v57 = (double)v10;
    v56 = v10;
    *(_QWORD *)&v55 = v3 + v11;
    v14 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v3 + v11))(a1: v12, a2: v13, a3: v41);
    v54 = (double)v14;
    v53 = v14;
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))&v61)(a1: v15, a2: v16, a3: v41);
    v61 = (double)(v17 + 1);
    v52 = v17;
    v51 = v17 + 1;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))&v58)(a1: v18, a2: v19, a3: v41);
    v58 = (double)(v20 + 1);
    v50 = v20;
    v49 = v20 + 1;
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))&v55)(a1: v21, a2: v22, a3: v41);
    if ( v59 != 0 )
    {
      v24 = v61;
    }
    else if ( v52 == -1 )
    {
      v24 = v61;
      if ( v61 == -0.0 )
      {
        v25 = -0.0;
        goto LABEL_7;
      }
    }
    else
    {
      v24 = v61;
    }
    if ( v59 > (int)v51 )
      v25 = v24;
    else
      v25 = v60;
LABEL_7:
    if ( v56 != 0 )
    {
      v26 = v58;
    }
    else if ( v50 == -1 )
    {
      v26 = v58;
      if ( v58 == -0.0 )
      {
        v27 = -0.0;
        goto LABEL_11;
      }
    }
    else
    {
      v26 = v58;
    }
    if ( v56 > v49 )
      v27 = v26;
    else
      v27 = v57;
LABEL_11:
    v28 = (unsigned int)(v23 + 1);
    v29 = (double)(int)v28;
    if ( v53 == 0 && v23 == -1 && v29 == -0.0 )
    {
      v30 = -0.0;
    }
    else if ( v53 > (int)v28 )
    {
      v30 = (double)(int)v28;
    }
    else
    {
      v30 = v54;
    }
    if ( v59 != 0 )
    {
      *(_QWORD *)&v31 = v51;
      v32 = v60;
    }
    else if ( v52 == -1 )
    {
      v32 = v60;
      v31 = v60;
      if ( v60 == -0.0 )
      {
        v33 = v24;
        goto LABEL_18;
      }
      *(_QWORD *)&v31 = v51;
    }
    else
    {
      *(_QWORD *)&v31 = v51;
      v32 = v60;
    }
    if ( SLODWORD(v31) > v59 )
      v33 = v24;
    else
      v33 = v32;
LABEL_18:
    if ( v56 != 0 )
    {
      v34 = v49;
      v35 = v57;
    }
    else if ( v50 == -1 )
    {
      v35 = v57;
      if ( v57 == -0.0 )
      {
        v36 = v26;
        goto LABEL_22;
      }
      v34 = v49;
    }
    else
    {
      v34 = v49;
      v35 = v57;
    }
    if ( v34 > v56 )
      v36 = v26;
    else
      v36 = v35;
LABEL_22:
    if ( v53 != 0 )
    {
      v37 = v54;
      goto LABEL_24;
    }
    if ( v23 != -1 )
    {
      v37 = v54;
      goto LABEL_24;
    }
    v37 = v54;
    if ( v54 != -0.0 )
    {
LABEL_24:
      if ( (int)v28 > v53 )
        v38 = (double)(int)v28;
      else
        v38 = v37;
      goto LABEL_26;
    }
    v38 = (double)(int)v28;
LABEL_26:
    result = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(result + 64) > *(_QWORD *)(v5 + 32) )
    {
      v55 = v38;
      v48 = v36;
      v47 = v33;
      v46 = v30;
      v45 = (double)(int)v28;
      v44 = v27;
      v43 = v25;
      result = sub_1EAA920(a1: *(_QWORD *)&v31, a2: v28, a3: 35839968, a4: v24, a5: v25, a6: v26);
      v38 = v55;
      v36 = v48;
      v33 = v47;
      v30 = v46;
      v29 = v45;
      v27 = v44;
      v25 = v43;
      v26 = v58;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = result + 64;
      *(_DWORD *)result = 35839968;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
    }
    *(double *)(result + 48) = v38;
    *(double *)(result + 40) = v36;
    *(double *)(result + 32) = v33;
    *(double *)(result + 24) = v30;
    *(double *)(result + 16) = v27;
    *(double *)(result + 8) = v25;
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_277F280(a1: v54, a2: v57, a3: v60, a4: v27, a5: v29, a6: v30, a7: v26);
    return result;
  }
  sub_2771080();
  JUMPOUT(0x1815C0ECBLL);
}
