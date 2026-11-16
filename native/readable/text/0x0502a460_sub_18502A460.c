// sub_502A460
// rva 0x0502a460  size 149  section .text  group text
// window base 0x18502a460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502A460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+8h] [rbp-20h]
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  unsigned int v22; // [rsp+20h] [rbp-8h]
  unsigned int v23; // [rsp+24h] [rbp-4h]

  v21 = a3;
  v20 = a5;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
    goto LABEL_6;
  v23 = sub_6116840();
  if ( v20 == v7 )
  {
    while ( 1 )
    {
      v19 = sub_276BEE0();
      sub_6116940(a1: v13, a2: v14, a3: v23);
      sub_2769900(a1: v16, a2: v17, a3: v19, a4: v15, a5: &a7);
LABEL_6:
      sub_1EB84E0();
    }
  }
  v22 = sub_4ECBCE0(a1: *(unsigned int *)(v20 + 8), a2: v9, a3: v21, a4: v20, a5: v20, a6: 0);
  sub_6116940(a1: v10, a2: v11, a3: v23);
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280();
  return v22;
}
