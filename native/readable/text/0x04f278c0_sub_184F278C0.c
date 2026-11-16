// sub_4F278C0
// rva 0x04f278c0  size 606  section .text  group text
// window base 0x184f278c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F278C0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // r8
  int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  int v30; // [rsp+0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+8h] [rbp-40h]
  __int64 v32; // [rsp+10h] [rbp-38h]
  __int64 v33; // [rsp+18h] [rbp-30h]
  _DWORD *v34; // [rsp+20h] [rbp-28h]
  __int64 v35; // [rsp+28h] [rbp-20h]
  __int64 v36; // [rsp+30h] [rbp-18h]
  __int64 v37; // [rsp+38h] [rbp-10h]
  __int64 v38; // [rsp+40h] [rbp-8h]

  v34 = a3;
  v33 = a5;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
LABEL_22:
    v25 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v25 + 48) > *(_QWORD *)(v9 + 32) )
    {
      v25 = sub_1EAA920(a1, a2, a3: 34101256);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v25 + 48;
      *(_DWORD *)v25 = 34101256;
      *(_DWORD *)(v25 + 4) = 0;
      *(_QWORD *)(v25 + 8) = 0;
      *(_QWORD *)(v25 + 16) = 0;
      *(_QWORD *)(v25 + 24) = 0;
      *(_QWORD *)(v25 + 32) = 0;
      *(_QWORD *)(v25 + 40) = 0;
    }
    *(_DWORD *)(v25 + 20) = 46923644;
    *(_DWORD *)(v25 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v25 + 12) = (unsigned __int64)(v25 - v8) >> 3;
    v32 = v25;
    sub_503B9A0(a1, a2, a3: v25, a4, a5: 0);
    v29 = v32;
    *(_DWORD *)(v32 + 8) = 44101391;
    if ( (*(_DWORD *)v29 & 2) != 0 )
      goto LABEL_26;
    while ( 1 )
    {
      v29 = sub_2769900(a1: v27, a2: v28, a3: v29, a4: v26, a5: &a7);
LABEL_26:
      v26 = (v29 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v29 & 0xFFFFFFFFFFF80000LL) + ((v29 - v26) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v29 & 0xFFFFFFFFFFF80000LL) + ((v29 - v26) >> 9) + 0x38) = 0;
    }
  }
  if ( a5 == v8 )
    goto LABEL_22;
  if ( *a3 >> 3 != 5082102 )
  {
    result = sub_4ED6760(a1, a2, a3, a4: a5);
    if ( *(int *)(v9 + 16) > 0 )
      return result;
    return sub_277F280();
  }
  v11 = (unsigned int)a3[2];
  if ( (_DWORD)v11 != 0 )
  {
    v37 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v7
                                                                               + *(_QWORD *)(v8
                                                                                           + 8LL
                                                                                           * (*(_DWORD *)(v8 + 8 * v11) >> 3)
                                                                                           + 216)))(
            a1,
            a2,
            a3: v8 + 8 * v11,
            a4,
            a5: v33);
    sub_4F27280(a1: v13, a2: v14, a3: (__int64)v34, a4: v12, a5: v15, a6: v16, a7: v30, a8: v31);
    while ( 1 )
    {
      v38 = v7;
      v36 = v37;
      v24 = (unsigned int)v34[2];
      if ( (_DWORD)v24 == 0 )
        break;
      v19 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))(v7
                                                                        + *(_QWORD *)(v8
                                                                                    + 8LL
                                                                                    * (*(_DWORD *)(v8 + 8 * v24) >> 3)
                                                                                    + 216)))(
              a1: v17,
              a2: v18,
              a3: v8 + 8 * v24,
              a4: v33);
      if ( v36 == 0x7FFFFFFFFFFFFFFFLL )
      {
        v38 = v7;
        v37 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else if ( __OFADD__(v19, v36) )
      {
        v37 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v37 = v19 + v36;
      }
      v35 = v19;
      sub_4F27280(a1: v20, a2: v21, a3: (__int64)v34, a4: -1, a5: v22, a6: v23, a7: v30, a8: v31);
    }
    result = v36;
  }
  else
  {
    result = 0;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
