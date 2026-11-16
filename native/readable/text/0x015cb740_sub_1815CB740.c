// sub_15CB740
// rva 0x015cb740  size 532  section .text  group text
// window base 0x1815cb740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15CB740(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        double a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 i; // r8
  __int64 v20; // rbx
  char v21; // r9
  double v22; // xmm0_8
  __int64 v23; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // [rsp+0h] [rbp-38h] BYREF
  __int64 v30; // [rsp+10h] [rbp-28h]
  __int64 v31; // [rsp+18h] [rbp-20h]
  __int64 v32; // [rsp+20h] [rbp-18h]
  int v33; // [rsp+28h] [rbp-10h]
  unsigned int v34; // [rsp+2Ch] [rbp-Ch]
  double v35; // [rsp+30h] [rbp-8h]

  v32 = a3;
  v31 = a5;
  v35 = a7;
  v34 = a6;
  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 != v8 )
  {
    v30 = sub_5837940(a1, a2, a3: v8 + 35855512);
    v33 = MEMORY[0x123f3c70]/* 0x123f3c70 */ & v34;
    v12 = sub_5837EE0(a1: v10, a2: v11, a3: v8 + 376314608, a4: MEMORY[0x123f3c70]/* 0x123f3c70 */ & v34, a5: v8 + 376314584);
    v17 = *(_QWORD *)(v9 + 40);
    v18 = v17 + 88;
    if ( (unsigned __int64)(v17 + 88) > *(_QWORD *)(v9 + 32) )
      return sub_1815CB88D(a1: v14, a2: v15, a3: v17, a4: v13, a5: v18, a6: v16, a7: a8);
    *(_QWORD *)(v9 + 40) = v18;
    *(_DWORD *)v17 = 35863864;
    *(_DWORD *)(v17 + 4) = 0;
    for ( i = 8; i < 0x58; i += 8LL )
      *(_QWORD *)(v17 + i) = 0;
    v20 = v30;
    v21 = v34;
    v22 = v35;
    v23 = v31;
    *(_DWORD *)(v17 + 72) = (unsigned __int64)(v32 - v8) >> 3;
    *(_BYTE *)(v17 + 68) = MEMORY[0x123f3c70]/* 0x123f3c70 */ & v21;
    *(_DWORD *)(v17 + 64) = 20;
    *(double *)(v17 + 16) = v22;
    *(_DWORD *)(v17 + 8) = (unsigned __int64)(v23 - v8) >> 3;
    *(_DWORD *)(v17 + 4) = (unsigned __int64)(v20 - v8) >> 3;
    v30 = v17;
    sub_94C25E0(a1: v14, a2: v15, a3: v17, a4: v17, a5: v12);
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return v30;
  }
  v25 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v25 + 48) > *(_QWORD *)(v9 + 32) )
    goto LABEL_14;
  *(_QWORD *)(v9 + 40) = v25 + 48;
  *(_DWORD *)v25 = 34101256;
  *(_DWORD *)(v25 + 4) = 0;
  *(_QWORD *)(v25 + 8) = 0;
  *(_QWORD *)(v25 + 16) = 0;
  *(_QWORD *)(v25 + 24) = 0;
  *(_QWORD *)(v25 + 32) = 0;
  *(_QWORD *)(v25 + 40) = 0;
  while ( 1 )
  {
    *(_DWORD *)(v25 + 20) = 46923644;
    *(_DWORD *)(v25 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v25 + 12) = (unsigned __int64)(v25 - v8) >> 3;
    v30 = v25;
    sub_503B9A0(a1, a2, a3: v25, a4, a5: 0);
    sub_2769900(a1: v27, a2: v28, a3: v30, a4: v26, a5: &a8);
LABEL_14:
    v25 = sub_1EAA920(a1, a2, a3: 34101256);
  }
}
