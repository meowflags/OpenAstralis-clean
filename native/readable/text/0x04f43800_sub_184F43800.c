// sub_4F43800
// rva 0x04f43800  size 885  section .text  group text
// window base 0x184f43800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F43800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v31; // rbp
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rdi
  unsigned int v37; // eax
  __int64 v38; // rdx
  unsigned int v39; // ecx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // [rsp+0h] [rbp-28h] BYREF
  __int64 v45; // [rsp+10h] [rbp-18h]
  __int64 v46; // [rsp+18h] [rbp-10h]
  unsigned int v47; // [rsp+20h] [rbp-8h]
  int v48; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v44 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_24;
  }
  v10 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_24:
    sub_2771080();
    goto LABEL_25;
  }
  v46 = a3;
  v11 = *(_DWORD *)(v8 + 8 * v10) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v8
                                   + 8LL * *(unsigned int *)(v8 + 8 * v11 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v8 + 8 * v11 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8 * v11 + 44))))
                                   + 12) != 1384 )
  {
LABEL_25:
    sub_2770780();
    goto LABEL_26;
  }
  v12 = *(_DWORD *)(v8 + 8 * v10) >> 3;
  v13 = v8 + 8LL * *(unsigned int *)(v8 + 8 * v12 + 20);
  v14 = *(_DWORD *)(v8 + 8 * v12 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8 * v12 + 44)));
  v48 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                           + *(_QWORD *)(v8
                                                                       + 8 * v12
                                                                       + HIWORD(*(_DWORD *)(v13 + 4 * v14 + 12))
                                                                       + 40)))(
          a1: v14,
          a2: v13,
          a3: v8 + 8 * v10);
  v18 = v46;
  v19 = *(_DWORD *)(v46 + 8);
  if ( v48 <= v19 )
  {
LABEL_26:
    v40 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v40 + 40) > *(_QWORD *)(v9 + 32) )
      goto LABEL_33;
    *(_QWORD *)(v9 + 40) = v40 + 40;
    *(_DWORD *)v40 = 34152072;
    *(_DWORD *)(v40 + 4) = 0;
    *(_QWORD *)(v40 + 8) = 0;
    *(_QWORD *)(v40 + 16) = 0;
    *(_QWORD *)(v40 + 24) = 0;
    *(_QWORD *)(v40 + 32) = 0;
    goto LABEL_28;
  }
  *(_DWORD *)(v46 + 8) = v19 + 1;
  v20 = *(unsigned int *)(v18 + 4);
  if ( (_DWORD)v20 == 0 )
    goto LABEL_29;
  v21 = *(_DWORD *)(v8 + 8 * v20) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v8
                                   + 8LL * *(unsigned int *)(v8 + 8 * v21 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v8 + 8 * v21 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8 * v21 + 44))))
                                   + 12) != 1384 )
    goto LABEL_30;
  v22 = *(_DWORD *)(v8 + 8 * v20) >> 3;
  v23 = *(unsigned int *)(v8 + 8 * v22 + 44);
  v24 = v8 + 8LL * *(unsigned int *)(v8 + 8 * v22 + 20);
  v25 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                           + *(_QWORD *)(v8
                                                                       + 8 * v22
                                                                       + HIWORD(*(_DWORD *)(v24
                                                                                          + 4LL
                                                                                          * ((unsigned int)v23
                                                                                           & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8 * v22 + 44))))
                                                                                          + 12)))))(
          a1: v24,
          a2: v23,
          a3: v8 + 8 * v20);
  if ( v25 < 0xD800 )
  {
    v29 = v25;
    v28 = v46;
    goto LABEL_11;
  }
  if ( v25 >= 0xDC00 )
  {
    v29 = v25;
    v28 = v46;
    goto LABEL_11;
  }
  v28 = v46;
  if ( v48 <= *(_DWORD *)(v46 + 8) )
  {
    v29 = v25;
LABEL_11:
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280(a1: v26, a2: v27, a3: v28, a4: v29);
    return (unsigned int)v29;
  }
  v31 = *(unsigned int *)(v46 + 4);
  if ( (_DWORD)v31 == 0 )
    goto LABEL_31;
  v32 = *(_DWORD *)(v8 + 8 * v31) >> 3;
  v33 = *(unsigned int *)(v8 + 8 * v32 + 44);
  v34 = v8 + 8LL * *(unsigned int *)(v8 + 8 * v32 + 20);
  if ( (unsigned __int16)*(_DWORD *)(v34
                                   + 4LL * ((unsigned int)v33 & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8 * v32 + 44))))
                                   + 12) != 1384 )
  {
    while ( 1 )
    {
      sub_2770780(a1: v33, a2: v34, a3: v28, a4: v25);
LABEL_33:
      v40 = sub_1EAA920(a1: v16, a2: v17, a3: 34152072);
LABEL_28:
      *(_DWORD *)(v40 + 20) = 46923644;
      *(_DWORD *)(v40 + 16) = *(_DWORD *)(v8 + 374343896);
      *(_DWORD *)(v40 + 12) = (unsigned __int64)(v40 - v8) >> 3;
      v45 = v40;
      sub_503B9A0(a1: v16, a2: v17, a3: v40, a4: v15, a5: 0);
      sub_2769900(a1: v42, a2: v43, a3: v45, a4: v41, a5: &a7);
LABEL_29:
      sub_2771080();
LABEL_30:
      v25 = sub_2770780();
LABEL_31:
      v25 = sub_2771080(a1: v26, a2: v27, a3: v28, a4: v25);
    }
  }
  v47 = v25;
  v35 = *(_DWORD *)(v8 + 8 * v31) >> 3;
  v36 = *(unsigned int *)(v8 + 8 * v35 + 44);
  v37 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                           + *(_QWORD *)(v8
                                                                       + 8 * v35
                                                                       + HIWORD(*(_DWORD *)(v8
                                                                                          + 8LL
                                                                                          * *(unsigned int *)(v8 + 8 * v35 + 20)
                                                                                          + 4LL
                                                                                          * ((unsigned int)v36
                                                                                           & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8 * v35 + 44))))
                                                                                          + 12)))))(
          a1: v36,
          a2: v8 + 8 * v35,
          a3: v8 + 8 * v31);
  if ( v37 < 0xDC00 )
  {
    v29 = v47;
    v28 = v46;
    goto LABEL_11;
  }
  if ( v37 >= 0xE000 )
  {
    v29 = v47;
    v28 = v46;
    goto LABEL_11;
  }
  v38 = v46;
  ++*(_DWORD *)(v46 + 8);
  v39 = v47;
  if ( *(int *)(v9 + 16) <= 0 )
    v37 = sub_277F280(a1: v26, a2: v27, a3: v38, a4: v47);
  return (v39 << 10) + v37 - 56613888;
}
