// sub_2774360
// rva 0x02774360  size 376  section .text  group text
// window base 0x182774360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2774360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  _QWORD *i; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v14; // r8
  int v15; // [rsp+0h] [rbp-C8h]
  int v16; // [rsp+8h] [rbp-C0h]
  __int64 v17[14]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 *v18; // [rsp+90h] [rbp-38h]
  __int64 v19; // [rsp+98h] [rbp-30h]
  __int64 v20; // [rsp+A0h] [rbp-28h]
  _QWORD *v21; // [rsp+A8h] [rbp-20h]
  __int64 v22; // [rsp+B0h] [rbp-18h]
  __int64 v23; // [rsp+B8h] [rbp-10h]
  __int64 v24; // [rsp+C0h] [rbp-8h]

  v24 = a3;
  v23 = a5;
  v22 = a6;
  i = *(_QWORD **)(v6 + 376178840);
  if ( i != nullptr && i[9] <= (unsigned __int64)(a6 - i[10]) )
  {
    for ( i = (_QWORD *)i[20]; i != nullptr && i[9] <= (unsigned __int64)(a6 - i[10]); i = (_QWORD *)i[20] )
      ;
  }
  v21 = i;
  if ( i != nullptr )
  {
    v20 = a5;
    v8 = a6;
    v9 = v20;
LABEL_5:
    v20 = v9;
    v10 = *(_QWORD *)(a3 + 56);
    v19 = v8;
    v18 = v17;
    sub_2772F00(a1: 0, a2: v8, a3: (__int64)v17, a4: v10, a5: a3, a6: v9);
    return sub_2772A60(
             a1: v6 + 376612120,
             a2: v12,
             a3: v18,
             a4: v11,
             a5: v24,
             a6: (_DWORD *)(v6 + 376613232),
             a7: v15,
             a8: v16,
             a9: (int)v6 + 376612120,
             a10: (int)v6 + 376613232,
             a11: v17[0],
             a12: v17[1],
             a13: v17[2],
             a14: v17[3]);
  }
  sub_2774300(a1: a6, a2: a5, a3: v6 + 376612120, a4: v6 + 376613232, a5, a6);
  a3 = v24;
  v14 = *(_QWORD *)(v24 + 56);
  if ( v14 != 0 )
  {
    v9 = *(_QWORD *)(v14 + 16);
    v8 = *(_QWORD *)(v14 + 8);
    goto LABEL_5;
  }
  return 0;
}
