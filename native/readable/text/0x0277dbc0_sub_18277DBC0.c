// sub_277DBC0
// rva 0x0277dbc0  size 1958  section .text  group text
// window base 0x18277dbc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277DBC0()
{
  __int64 v0; // r13
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 *v5; // rdx
  double v6; // xmm0_8
  __int64 v7; // rdi
  __int64 v8; // rsi
  double v9; // xmm1_8
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  double v18; // xmm0_8
  double v19; // xmm1_8
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 *v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  double v25; // xmm0_8
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  unsigned int i; // eax
  __int64 *v30; // rdx
  __int64 v31; // rsi
  double v32; // xmm0_8
  double v33; // xmm1_8
  __int64 v34; // rcx
  __int64 *v35; // rcx
  __int64 *v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rsi
  double v39; // xmm0_8
  __int64 v40; // rdx
  __int64 v41; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v42[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 *v43; // [rsp+28h] [rbp-70h]
  int v44; // [rsp+34h] [rbp-64h]
  __int64 *v45; // [rsp+38h] [rbp-60h]
  unsigned int v46; // [rsp+44h] [rbp-54h]
  __int64 v47; // [rsp+48h] [rbp-50h]
  __int64 *v48; // [rsp+50h] [rbp-48h]
  __int64 *v49; // [rsp+58h] [rbp-40h]
  __int64 *v50; // [rsp+60h] [rbp-38h]
  void (__fastcall *v51)(__int64, __int64, __int64 *, __int64 *); // [rsp+68h] [rbp-30h]
  void (__fastcall *v52)(__int64, __int64, _BYTE *, _BYTE *); // [rsp+70h] [rbp-28h]
  __int64 *v53; // [rsp+78h] [rbp-20h]
  __int64 v54; // [rsp+80h] [rbp-18h]
  __int64 v55; // [rsp+88h] [rbp-10h]
  __int64 v56; // [rsp+90h] [rbp-8h]

  if ( (unsigned __int64)&v41 <= *(_QWORD *)(v2 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_49;
  }
  v55 = sub_159FB80();
  v54 = sub_159F9A0();
  v5 = (__int64 *)v42;
  v53 = (__int64 *)v42;
  v6 = *(double *)(v1 + 376178920);
  v52 = (void (__fastcall *)(__int64, __int64, _BYTE *, _BYTE *))MEMORY[0x10e44c40]/* 0x10e44c40 */;
  if ( v6 == 0.0 )
  {
    MEMORY[0x10e44c40]/* 0x10e44c40 */(a1: v3, a2: v4, a3: v42, a4: v42, a5: v6);
    v5 = v53;
    *(double *)(v1 + 376178920) = MEMORY[0x11253a28]/* 0x11253a28 */ / (double)*v53;
  }
  v51 = (void (__fastcall *)(__int64, __int64, __int64 *, __int64 *))MEMORY[0x10e44170]/* 0x10e44170 */;
  MEMORY[0x10e44170]/* 0x10e44170 */(a1: v3, a2: v4, a3: v5, a4: v5);
  v9 = (double)*v53 * *(double *)(v1 + 376178920);
  v10 = (__int64)v9;
  if ( (__int64)v9 == MEMORY[0x11253a30]/* 0x11253a30 */ )
  {
    if ( __builtin_isnan(v9) )
    {
      v10 = 0;
    }
    else if ( v9 > 0.0 )
    {
      v10 = ~v10;
    }
  }
  v53 = (__int64 *)v10;
  if ( (unsigned int)sub_277B480(a1: v7, a2: v8, a3: 0) != 0 )
  {
    v13 = 0;
    result = (__int64)v53;
    goto LABEL_7;
  }
  v15 = (__int64 *)v42;
  v50 = (__int64 *)v42;
  if ( *(double *)(v1 + 376178920) == 0.0 )
  {
    v52(a1: v11, a2: v12, a3: v42, a4: v42);
    v15 = v50;
    *(double *)(v1 + 376178920) = MEMORY[0x11253a28]/* 0x11253a28 */ / (double)*v50;
  }
  v51(a1: v11, a2: v12, a3: v15, a4: v15);
  v18 = *(double *)(v1 + 376178920);
  v19 = (double)*v50 * v18;
  v20 = (__int64)v19;
  if ( (__int64)v19 == MEMORY[0x11253a30]/* 0x11253a30 */ )
  {
    if ( __builtin_isnan(v19) )
    {
      v20 = 0;
    }
    else if ( v19 > 0.0 )
    {
      v20 = ~v20;
    }
  }
  v21 = (__int64 *)(v20 - (_QWORD)v53);
  if ( v54 >= 1 && v54 - (__int64)v21 < 0 )
  {
LABEL_49:
    v50 = v21;
    v56 = v0;
    v49 = v53;
    goto LABEL_50;
  }
  v22 = (__int64 *)v42;
  v48 = (__int64 *)v42;
  v47 = (__int64)v21;
  if ( v18 == 0.0 )
  {
    v52(a1: v16, a2: v17, a3: v42, a4: v42);
    v22 = v48;
    *(double *)(v1 + 376178920) = MEMORY[0x11253a28]/* 0x11253a28 */ / (double)*v48;
  }
  v51(a1: v16, a2: v17, a3: v22, a4: v22);
  v25 = (double)*v48 * *(double *)(v1 + 376178920);
  v26 = (__int64)v25;
  if ( (__int64)v25 == MEMORY[0x11253a30]/* 0x11253a30 */ )
  {
    if ( __builtin_isnan(v25) )
    {
      v26 = 0;
    }
    else if ( v25 > 0.0 )
    {
      v26 = ~v26;
    }
  }
  v48 = (__int64 *)(v26 - (_QWORD)v53);
  if ( v55 < 1 )
  {
    v46 = 0;
    v56 = v0;
    v45 = v53;
  }
  else if ( v55 - (v26 - (__int64)v53) < 0 )
  {
    v46 = 1;
    v45 = (__int64 *)v26;
  }
  else
  {
    v46 = 0;
    v56 = v0;
    v45 = v53;
  }
  if ( v47 < 1000000 )
    sub_50327A0();
  else
    sub_5031A20(a1: v23, a2: v24, a3: 1000000);
  v56 = v0;
  v48 = v45;
  for ( i = v46; ; i = v44 )
  {
    v46 = i;
    if ( (unsigned int)sub_277B480(a1: v27, a2: v28, a3: i) != 0 )
      break;
    v30 = (__int64 *)v42;
    v45 = (__int64 *)v42;
    if ( *(double *)(v1 + 376178920) == 0.0 )
    {
      v52(a1: v11, a2: v12, a3: v42, a4: v42);
      v30 = v45;
      *(double *)(v1 + 376178920) = MEMORY[0x11253a28]/* 0x11253a28 */ / (double)*v45;
    }
    v51(a1: v11, a2: v12, a3: v30, a4: v30);
    v32 = *(double *)(v1 + 376178920);
    v33 = (double)*v45 * v32;
    v34 = (__int64)v33;
    if ( (__int64)v33 == MEMORY[0x11253a30]/* 0x11253a30 */ )
    {
      if ( __builtin_isnan(v33) )
      {
        v34 = 0;
      }
      else if ( v33 > 0.0 )
      {
        v34 = ~v34;
      }
    }
    v35 = (__int64 *)(v34 - (_QWORD)v53);
    if ( v54 >= 1 && v54 - (__int64)v35 < 0 )
    {
      while ( 1 )
      {
        v50 = v35;
        v56 = v0;
        v49 = v48;
LABEL_50:
        sub_28C1C40(a1: v16, a2: v1 + 366599032, a3: v1 + 366599032);
      }
    }
    v36 = (__int64 *)v42;
    v45 = (__int64 *)v42;
    v47 = (__int64)v35;
    if ( v32 == 0.0 )
    {
      v52(a1: v16, a2: v31, a3: v42, a4: v42);
      v36 = v45;
      *(double *)(v1 + 376178920) = MEMORY[0x11253a28]/* 0x11253a28 */ / (double)*v45;
    }
    v51(a1: v16, a2: v31, a3: v36, a4: v36);
    v39 = (double)*v45 * *(double *)(v1 + 376178920);
    v40 = (__int64)v39;
    if ( (__int64)v39 == MEMORY[0x11253a30]/* 0x11253a30 */ )
    {
      if ( __builtin_isnan(v39) )
      {
        v40 = 0;
      }
      else if ( v39 > 0.0 )
      {
        v40 = ~v40;
      }
    }
    v45 = (__int64 *)(v40 - (_QWORD)v48);
    if ( v55 < 1 )
    {
      v44 = 0;
      v56 = v0;
      v43 = v48;
    }
    else if ( v55 - (v40 - (__int64)v48) < 0 )
    {
      v44 = 1;
      v43 = (__int64 *)v40;
    }
    else
    {
      v44 = 0;
      v56 = v0;
      v43 = v48;
    }
    if ( v47 < 1000000 )
      sub_50327A0();
    else
      sub_5031A20(a1: v37, a2: v38, a3: 1000000);
    v56 = v0;
    v48 = v43;
  }
  v13 = v46;
  result = (__int64)v48;
LABEL_7:
  if ( *(int *)(v2 + 16) <= 0 )
    return sub_277F280(a1: v11, a2: v12, a3: v13);
  return result;
}
