// sub_5046580
// rva 0x05046580  size 796  section .text  group text
// window base 0x185046580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5046580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 result; // rax
  signed __int32 v14; // ecx
  _DWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  _DWORD *v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdx
  int v44; // [rsp+0h] [rbp-28h] BYREF
  __int64 v45; // [rsp+8h] [rbp-20h]
  __int64 v46; // [rsp+10h] [rbp-18h]
  _DWORD *v47; // [rsp+18h] [rbp-10h]
  unsigned int v48; // [rsp+24h] [rbp-4h]

  v47 = (_DWORD *)a3;
  if ( (unsigned __int64)&v44 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_45;
  }
  v10 = *(unsigned int *)(v9 + 72);
  if ( (_DWORD)v10 != 0 )
    goto LABEL_4;
  do
  {
    v10 = sub_2771080();
LABEL_4:
    v11 = (unsigned int)v8[2 * v10 + 18];
    if ( (_DWORD)v11 != 0 )
      v12 = &v8[2 * v11];
    else
      v12 = &v8[2 * v10];
  }
  while ( v12 == v8 );
  result = *v12 >> 3;
  if ( SHIWORD(v8[2 * result + 15]) >= 3 )
  {
    result = (unsigned int)v8[2 * result + 4];
    if ( v8[2 * result + 5] == 70129 )
    {
LABEL_45:
      v43 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v43 + 40) <= *(_QWORD *)(v9 + 32) )
      {
        *(_QWORD *)(v9 + 40) = v43 + 40;
        *(_DWORD *)v43 = 40177568;
        *(_DWORD *)(v43 + 4) = 0;
        *(_QWORD *)(v43 + 8) = 0;
        *(_QWORD *)(v43 + 16) = 0;
        *(_QWORD *)(v43 + 24) = 0;
        *(_QWORD *)(v43 + 32) = 0;
LABEL_47:
        *(_DWORD *)(v43 + 20) = 46923644;
        *(_DWORD *)(v43 + 16) = v8[93585974];
        *(_DWORD *)(v43 + 12) = (unsigned __int64)(v43 - (_QWORD)v8) >> 3;
        v46 = v43;
        sub_503B9A0(a1, a2, a3: (unsigned int *)v43, a4: (__int64)v12, a5: 0);
        goto LABEL_42;
      }
LABEL_50:
      v46 = (__int64)v12;
      v43 = sub_1EAA920(a1, a2, a3: 40177568);
      goto LABEL_47;
    }
  }
  v14 = *(_DWORD *)(a3 + 136);
  if ( v14 >= 11 )
  {
    if ( v14 != 11 && v14 != 14 )
    {
LABEL_31:
      v48 = *(_DWORD *)(a3 + 136);
      if ( *(int *)(v9 + 16) > 0 )
        return result;
      return sub_277F280();
    }
  }
  else if ( v14 != 1 && v14 != 9 )
  {
    goto LABEL_31;
  }
  result = (unsigned int)__sync_val_compare_and_swap((volatile signed __int32 *)(a3 + 136), v14, 2);
  if ( v14 != (_DWORD)result )
  {
    if ( *(int *)(v9 + 16) <= 0 )
    {
      v48 = v14;
      return sub_277F280();
    }
    return result;
  }
  if ( v14 == 9 )
  {
    v48 = 9;
    sub_5044620(a1, a2, a3);
    v29 = v47;
    if ( *((_BYTE *)v47 + 102) != 0 )
    {
      *((_BYTE *)v47 + 102) = 0;
      __faststorefence();
    }
    v15 = v29;
  }
  else if ( v14 == 14 )
  {
    v48 = 14;
    sub_5044620(a1, a2, a3);
    v15 = v47;
  }
  else
  {
    v48 = v14;
    v15 = (_DWORD *)a3;
  }
  sub_5045B20(a1, a2, a3: (__int64)v15);
  v18 = (unsigned int)v47[26];
  if ( (_DWORD)v18 == 0 )
  {
    v46 = sub_276BEE0();
    sub_50492E0(a1: v30, a2: v31, a3: v47);
    v34 = (unsigned int)v47[26];
    if ( (_DWORD)v34 == 0 )
    {
      sub_2771080(a1: v32, a2: v33, a3: v47, a4: v48);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_50468A0();
    }
    if ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (v8[2 * v34] >> 3) + 34]))(
           a1: v32,
           a2: v33,
           a3: &v8[2 * v34]) == 0 )
      goto LABEL_43;
    sub_5043880(a1: v36, a2: v37, a3: v47, a4: v35, a5: 1, a6: v39, a7: v44, a8: v45);
    while ( 1 )
    {
LABEL_42:
      sub_2769900(a1: v41, a2: v42, a3: v46, a4: v40, a5: &a7);
LABEL_43:
      sub_5043980(a1: v36, a2: v37, a3: (__int64)v47, a4: v35, a5: v38, a6: v39, a7: v44);
    }
  }
  sub_635F5A0(a1: v16, a2: v17, a3: &v8[2 * v18]);
  sub_50492E0(a1: v19, a2: v20, a3: v47);
  v23 = (unsigned int)v47[26];
  if ( (_DWORD)v23 == 0 )
  {
    sub_2771080();
    goto LABEL_50;
  }
  if ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (v8[2 * v23] >> 3) + 34]))(
         a1: v21,
         a2: v22,
         a3: &v8[2 * v23]) != 0 )
    result = sub_5043880(a1: v25, a2: v26, a3: v47, a4: v24, a5: 1, a6: v28, a7: v44, a8: v45);
  else
    result = sub_5043980(a1: v25, a2: v26, a3: (__int64)v47, a4: v24, a5: v27, a6: v28, a7: v44);
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
