// sub_2778360
// rva 0x02778360  size 223  section .text  group text
// window base 0x182778360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2778360(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  int v15; // ebp
  __int64 v16; // r14
  __int64 v17; // r15
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rsi
  char *v22; // rdi
  __int64 v23; // r9
  _DWORD v25[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v26; // [rsp+10h] [rbp-28h]
  int v27; // [rsp+20h] [rbp-18h]
  int v28; // [rsp+24h] [rbp-14h]
  void *v29; // [rsp+28h] [rbp-10h]
  char *v30; // [rsp+30h] [rbp-8h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int64)v25 <= *(_QWORD *)(v17 + 8) )
  {
LABEL_10:
    v28 = a13;
    *(double *)a4.m128_u64 = sub_1EB84E0();
LABEL_11:
    sub_2771080(
      a1,
      a2,
      a3,
      a4: v19,
      a5: a13,
      a6: a14,
      a7: a4,
      a8: a5,
      a9: a6,
      a10: a7,
      a11: a8,
      a12: a9,
      a13: a10,
      a14: a11,
      a15: v25[0]);
    goto LABEL_12;
  }
  v26 = a3;
  v18 = &a15;
  v30 = &a15;
  v19 = (__int64)retaddr;
  v29 = retaddr;
  if ( (_DWORD)a13 == 0 )
    goto LABEL_6;
  if ( a3 != v16 )
  {
    *(_QWORD *)(a3 + 40) = retaddr;
    *(_QWORD *)(a3 + 32) = &a15;
    *(_QWORD *)(a3 + 48) = v25;
    v20 = *(unsigned int *)(a3 + 28);
    *(_DWORD *)(a3 + 28) = 0;
    v15 = 8 * *(_DWORD *)(v16 + 8 * v20 + 8);
    v21 = v15;
    v22 = (char *)&v25[v15 / 0xFFFFFFFFFFFFFFFCLL];
    v23 = v16 + 8 * v20;
    if ( *(_QWORD *)(v17 + 8) <= (unsigned __int64)v22 )
      goto LABEL_8;
    while ( 1 )
    {
      v28 = a13;
      a4.m128_i128 = (__int128)sub_2769900(
                                 a1: (__int64)v22,
                                 a2: v21,
                                 a3: (_DWORD *)(v16 + 376658528),
                                 a4: v19,
                                 a5: (__int64)&a15,
                                 a6: v23,
                                 a7: a4,
                                 a8: a5,
                                 a9: a6,
                                 a10: a7,
                                 a11: a8,
                                 a12: a9,
                                 a13: a10,
                                 a14: a11);
LABEL_6:
      if ( a3 == v16 )
        goto LABEL_11;
      *(_QWORD *)(a3 + 40) = v19;
      *(_QWORD *)(a3 + 32) = v18;
      *(_QWORD *)(a3 + 48) = v25;
      sub_2778440();
LABEL_8:
      if ( (unsigned __int64)v22 <= *(_QWORD *)(v17 + 232) )
      {
        v27 = v15;
        v28 = a13;
        sub_2778580(
          a1: (_DWORD)v22,
          a2: v21,
          a3: v23,
          a4: v19,
          a5: (_DWORD)v22,
          a6: v16,
          a7: v25[0],
          a8: v23,
          a9: v26,
          a10: (__int64)v22);
        goto LABEL_10;
      }
    }
  }
LABEL_12:
  sub_2771080(
    a1,
    a2,
    a3,
    a4: v19,
    a5: a13,
    a6: a14,
    a7: a4,
    a8: a5,
    a9: a6,
    a10: a7,
    a11: a8,
    a12: a9,
    a13: a10,
    a14: a11,
    a15: v25[0]);
  __builtin_debugtrap();
  return sub_2778440();
}
