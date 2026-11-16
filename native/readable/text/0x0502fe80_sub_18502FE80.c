// sub_502FE80
// rva 0x0502fe80  size 655  section .text  group text
// window base 0x18502fe80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502FE80(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 result; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rax
  char v31; // [rsp+0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+10h] [rbp-38h]
  __int64 v33; // [rsp+18h] [rbp-30h]
  unsigned int v34; // [rsp+24h] [rbp-24h]
  __int64 v35; // [rsp+28h] [rbp-20h]
  _DWORD *v36; // [rsp+30h] [rbp-18h]
  unsigned __int64 v37; // [rsp+38h] [rbp-10h]
  __int64 v38; // [rsp+40h] [rbp-8h]

  v36 = a3;
  if ( (unsigned __int64)&v31 <= *(_QWORD *)(v16 + 8) )
  {
    v35 = a5;
    v17 = sub_1EB84E0();
    goto LABEL_10;
  }
  v35 = a5;
  v38 = sub_5A81840(a1, a2, a3: v15 + 376367304);
  v34 = *v36 >> 3;
  v17 = ((__int64 (*)(void))(v14 + *(_QWORD *)(v15 + 8LL * v34 + 400)))();
  if ( v15 + 375389064 == v17 )
    return sub_18502FF8E(
             a1: v19,
             a2: v20,
             a3: (int)v15 + 375389064,
             a4: v18,
             a5: v21,
             a6: v22,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14);
  if ( v15 + 375389016 == v17 )
  {
LABEL_10:
    v33 = v17;
    v26 = *(_QWORD *)(v16 + 40);
    if ( (unsigned __int64)(v26 + 40) > *(_QWORD *)(v16 + 32) )
    {
      v26 = sub_1EAA920(a1: v19, a2: v20, a3: 37751696);
    }
    else
    {
      *(_QWORD *)(v16 + 40) = v26 + 40;
      *(_DWORD *)v26 = 37751696;
      *(_DWORD *)(v26 + 4) = 0;
      *(_QWORD *)(v26 + 8) = 0;
      *(_QWORD *)(v26 + 16) = 0;
      *(_QWORD *)(v26 + 24) = 0;
      *(_QWORD *)(v26 + 32) = 0;
    }
    *(_DWORD *)(v26 + 20) = 46923644;
    *(_DWORD *)(v26 + 16) = *(_DWORD *)(v15 + 374343896);
    *(_DWORD *)(v26 + 12) = (unsigned __int64)(v26 - v15) >> 3;
    v32 = v26;
    sub_503B9A0(a1: v19, a2: v20, a3: v26, a4: v18, a5: 0);
    v30 = v32;
    *(_DWORD *)(v32 + 8) = 45837216;
    if ( (*(_DWORD *)v30 & 2) != 0 )
      goto LABEL_14;
    while ( 1 )
    {
      v30 = sub_2769900(a1: v28, a2: v29, a3: v30, a4: v27, a5: &a7);
LABEL_14:
      v27 = (v30 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL) + ((v30 - v27) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL) + ((v30 - v27) >> 9) + 0x38) = 0;
    }
  }
  if ( v38 < 1 )
    return sub_18502FFAE(
             a1: v19,
             a2: v20,
             a3: (int)v15 + 375389016,
             a4: v18,
             a5: v21,
             a6: v22,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14);
  if ( *v36 >> 3 == 5067607 )
    return sub_18502FFCE(
             a1: v19,
             a2: v20,
             a3: (_DWORD)v36,
             a4: v18,
             a5: 5067607,
             a6: v22,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14);
  v33 = v17;
  if ( v38 > (__int64)(1000000
                     * ((unsigned __int64)((unsigned __int128)(0x431BDE82D7B634DBLL * (__int128)v38) >> 64) >> 18)) )
    JUMPOUT(0x18502FFF1LL);
  v37 = (unsigned __int64)((unsigned __int128)(0x431BDE82D7B634DBLL * (__int128)v38) >> 64) >> 18;
  sub_5030120(a1: v19, a2: v20, a3: (_DWORD)v36, a4: v18, a5: v37, a6: v22, a7: v31);
  result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v14 + *(_QWORD *)(v15 + 8LL * v34 + 264)))(
             a1: v23,
             a2: v24,
             a3: v36);
  if ( *(int *)(v16 + 16) <= 0 )
    JUMPOUT(0x185030009LL);
  return result;
}
