// sub_1E9DEC0
// rva 0x01e9dec0  size 1204  section .text  group text
// window base 0x181e9dec0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1E9DEC0(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, int a6)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  double v16; // xmm0_8
  double v17; // xmm2_8
  double v18; // xmm1_8
  double v19; // xmm3_8
  double v20; // xmm3_8
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  double v31; // xmm0_8
  double v32; // xmm0_8
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  double v47; // xmm3_8
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  double v52; // xmm0_8
  __int64 v53; // rdx
  char v54; // [rsp+0h] [rbp-68h] BYREF
  __int64 v55; // [rsp+10h] [rbp-58h]
  __int64 v56; // [rsp+18h] [rbp-50h]
  unsigned int v57; // [rsp+24h] [rbp-44h]
  __int64 v58; // [rsp+28h] [rbp-40h]
  unsigned __int64 v59; // [rsp+30h] [rbp-38h]
  double v60; // [rsp+38h] [rbp-30h]
  double v61; // [rsp+40h] [rbp-28h]
  unsigned __int64 v62; // [rsp+48h] [rbp-20h]
  unsigned __int64 v63; // [rsp+50h] [rbp-18h]
  __int64 v64; // [rsp+58h] [rbp-10h]
  unsigned int v65; // [rsp+64h] [rbp-4h]

  v58 = a3;
  if ( (unsigned __int64)&v54 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v54);
  }
  else if ( *(_DWORD *)(a3 + 8) != 0 )
  {
    v57 = *(_DWORD *)(a3 + 8);
    v65 = a5;
    v56 = v7 + 376657072;
    v9 = sub_1E9F600(a1, a2, a3: v7 + 376657072);
    v64 = *(_QWORD *)(v7 + 376652664);
    v63 = v9;
    result = sub_1E9F600(a1: v10, a2: v11, a3: v56);
    if ( v64 > result )
      result = sub_1E9F860(a1: v13, a2: v14, a3: v56, a4: v64, a5: v64);
    if ( v65 != 0 )
    {
      if ( *(int *)(v8 + 16) > 0 )
        return result;
      return sub_277F280();
    }
    v15 = v64;
    v65 = *(_DWORD *)(v58 + 20);
    *(_DWORD *)(v58 + 20) = 0;
    v16 = (double)v15;
    v17 = MEMORY[0x11b129a0]/* 0x11b129a0 */;
    v18 = (double)(v15 & 1 | ((unsigned __int64)v15 >> 1)) * MEMORY[0x11b129a0]/* 0x11b129a0 */;
    if ( v15 < 0 )
      v19 = (double)(v15 & 1 | ((unsigned __int64)v15 >> 1)) * MEMORY[0x11b129a0]/* 0x11b129a0 */;
    else
      v19 = (double)v15;
    v20 = v19 / MEMORY[0x11b129a8]/* 0x11b129a8 */;
    v6 = (__int64)v20;
    if ( (__int64)v20 == MEMORY[0x11b129b0]/* 0x11b129b0 */ )
      goto LABEL_58;
LABEL_11:
    if ( v6 < 1 )
    {
      v62 = 0;
    }
    else if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    {
      v47 = v20 / v17;
      v48 = (__int64)v47;
      if ( (__int64)v47 == MEMORY[0x11b129b0]/* 0x11b129b0 */ && v47 > 0.0 )
        v48 = ~v48;
      if ( v48 == 0x7FFFFFFFFFFFFFFFLL )
        v62 = -1;
      else
        v62 = 2 * v48;
    }
    else
    {
      v62 = v6;
    }
    v61 = v18;
    v60 = v17;
    *(double *)&v59 = v16;
    v21 = sub_1E9F4E0(a1: v13, a2: v14, a3: v56);
    if ( v62 > v21 )
      JUMPOUT(0x303D2800ALL);
    v62 = v21;
    v24 = sub_1E9F600(a1: v22, a2: v23, a3: v56);
    if ( v62 > v24 )
    {
      result = sub_1E9F860(a1: v26, a2: v27, a3: v56, a4: v25, a5: (v62 + 0x7FFFF) & 0xFFFFFFFFFFF80000LL);
      if ( *(int *)(v8 + 16) <= 0 )
        return sub_277F280();
    }
    else
    {
      v28 = sub_1E9F600(a1: v26, a2: v27, a3: v56);
      if ( v64 < 0 )
        v31 = v61;
      else
        v31 = *(double *)&v59;
      v32 = v31 / MEMORY[0x11b129b8]/* 0x11b129b8 */;
      v33 = (__int64)v32;
      if ( (__int64)v32 == MEMORY[0x11b129b0]/* 0x11b129b0 */ && v32 > 0.0 )
        v33 = ~v33;
      if ( v33 < 1 )
      {
        *(double *)&v59 = 0.0;
      }
      else if ( v33 == 0x7FFFFFFFFFFFFFFFLL )
      {
        v52 = v32 / v60;
        v53 = (__int64)v52;
        if ( (__int64)v52 == MEMORY[0x11b129b0]/* 0x11b129b0 */ && v52 > 0.0 )
          v53 = ~v53;
        if ( v53 == 0x7FFFFFFFFFFFFFFFLL )
          *(double *)&v59 = NAN;
        else
          v59 = 2 * v53;
      }
      else
      {
        v59 = v33;
      }
      *(_QWORD *)&v60 = v28 - v62;
      v34 = sub_1E9F4E0(a1: v29, a2: v30, a3: v56);
      if ( v59 > v34 )
        JUMPOUT(0x303D280B1LL);
      v59 = v34;
      v37 = sub_1E9F600(a1: v35, a2: v36, a3: v56);
      if ( v37 > v59 )
      {
        v50 = sub_1E9F600(a1: v38, a2: v39, a3: v56);
        v51 = (v50 - v59) / 0x64 * (int)v65;
        if ( v65 != 0 )
        {
          if ( (int)(4 * v65) > 100 )
            JUMPOUT(0x303D28233LL);
          *(_DWORD *)(v58 + 20) = 4 * v65;
          v61 = *(double *)&v51;
        }
        else
        {
          *(_DWORD *)(v58 + 20) = 10;
          v61 = *(double *)&v51;
        }
      }
      else
      {
        v61 = 0.0;
      }
      result = sub_1E9F600(a1: v38, a2: v39, a3: v56);
      if ( result > v63 )
      {
        v49 = sub_1E9F600(a1: v40, a2: v41, a3: v56);
        if ( v49 - v63 < *(_QWORD *)&v60 )
          JUMPOUT(0x303D281D9LL);
        v42 = *(_QWORD *)&v61;
        if ( *(_QWORD *)&v60 > *(_QWORD *)&v61 )
          JUMPOUT(0x303D281E7LL);
        result = *(_QWORD *)&v61;
      }
      else
      {
        v42 = *(_QWORD *)&v61;
      }
      v61 = *(double *)&v42;
      if ( v42 >= 0x29 )
      {
        v55 = v7 + 8LL * v57;
        v43 = sub_1E9F600(a1: v40, a2: v41, a3: v56);
        result = sub_1E9F860(a1: v45, a2: v46, a3: v56, a4: v44, a5: v43 - *(_QWORD *)&v61);
      }
      if ( *(int *)(v8 + 16) <= 0 )
        return sub_277F280(a1: v63, a2: v62, a3: *(_QWORD *)&v61, a4: v65);
    }
    return result;
  }
  sub_276EFE0();
LABEL_58:
  if ( v20 > 0.0 )
    v6 = ~v6;
  goto LABEL_11;
}
