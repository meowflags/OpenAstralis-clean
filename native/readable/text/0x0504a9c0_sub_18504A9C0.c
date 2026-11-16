// sub_504A9C0
// rva 0x0504a9c0  size 401  section .text  group text
// window base 0x18504a9c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504A9C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, _DWORD *a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 result; // rax
  __int64 i; // rax
  __int64 v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-48h] BYREF
  __int64 v24; // [rsp+8h] [rbp-40h]
  __int64 v25; // [rsp+10h] [rbp-38h]
  __int64 v26; // [rsp+18h] [rbp-30h]
  unsigned int v27; // [rsp+24h] [rbp-24h]
  _DWORD *v28; // [rsp+28h] [rbp-20h]
  _DWORD *v29; // [rsp+30h] [rbp-18h]
  __int64 v30; // [rsp+38h] [rbp-10h]
  __int64 v31; // [rsp+40h] [rbp-8h]

  v31 = a3;
  v30 = a1;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v9 + 8) )
  {
    v29 = a6;
    v28 = a5;
    sub_1EB84E0();
    goto LABEL_14;
  }
  v29 = a6;
  v28 = a5;
  sub_504AC60();
  v12 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v12 + 40) > *(_QWORD *)(v9 + 32) )
  {
    v13 = sub_1EAA920(a1: v10, a2: v11, a3: 43309568);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v12 + 40;
    *(_DWORD *)v12 = 43309568;
    *(_DWORD *)(v12 + 4) = 0;
    *(_QWORD *)(v12 + 8) = 0;
    *(_QWORD *)(v12 + 16) = 0;
    *(_QWORD *)(v12 + 24) = 0;
    *(_QWORD *)(v12 + 32) = 0;
    v13 = v12;
  }
  v27 = *(_DWORD *)(v31 + 4);
  v26 = v8 + 8LL * *(unsigned int *)(v31 + 8);
  v25 = v13;
  v24 = v8 + 8LL * v27;
  sub_504A080(a1: v26, a2: v26, a3: v13, a4: v27, a5: v28, a6: v29);
  v16 = v27;
  if ( v27 == 0 )
  {
LABEL_14:
    for ( i = sub_276BEE0(); ; i = sub_2769900(a1: v30, a2: v22, a3: i, a4: i, a5: &a7, a6: v29) )
      ;
  }
  v17 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v17 + 16) > *(_QWORD *)(v9 + 32) )
  {
    v18 = sub_1EAA920(a1: v14, a2: v15, a3: 43309776);
    v16 = v27;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v17 + 16;
    *(_DWORD *)v17 = 43309776;
    *(_DWORD *)(v17 + 4) = 0;
    *(_QWORD *)(v17 + 8) = 0;
    v18 = v17;
  }
  v19 = v30;
  *(_DWORD *)(v18 + 4) = (unsigned __int64)(v30 - v8) >> 3;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v7
                                                                                + *(_QWORD *)(v8
                                                                                            + 8LL
                                                                                            * (*(_DWORD *)(v8 + 8 * v16) >> 3)
                                                                                            + 256)))(
             a1: v19,
             a2: v15,
             a3: v24,
             a4: v16,
             a5: v25);
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
