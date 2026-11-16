// sub_4F44AE0
// rva 0x04f44ae0  size 873  section .text  group text
// window base 0x184f44ae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_4F44AE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  _DWORD *v19; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  __int64 v38; // [rsp+0h] [rbp-38h] BYREF
  __int64 v39; // [rsp+8h] [rbp-30h]
  __int64 i; // [rsp+10h] [rbp-28h]
  _DWORD *v41; // [rsp+18h] [rbp-20h]
  __int64 v42; // [rsp+20h] [rbp-18h]
  __int64 v43; // [rsp+28h] [rbp-10h]
  __int64 v44; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v9 + 8) )
  {
    v43 = a3;
    sub_1EB84E0();
  }
  else if ( (_DWORD *)a3 != v8 )
  {
    v43 = a3;
    v42 = (__int64)(v8 + 94283424);
    v10 = sub_4FFE180(a1, a2, a3, a4: a3, a5: v8 + 94064476);
    v11 = v42;
    v42 = v10;
    v15 = sub_5869420(a1: v13, a2: v14, a3: v11, a4: v12, a5: v10);
    if ( (_DWORD *)v15 == v8 )
      v19 = v8;
    else
      v19 = &v8[2 * *(unsigned int *)(v15 + 8)];
    if ( v19 != v8 && *v19 >> 3 != 5410881 )
      goto LABEL_27;
    if ( v19 == v8 )
      goto LABEL_14;
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return v19;
  }
  v15 = sub_2771080();
LABEL_14:
  v21 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v21 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v41 = v19;
    i = v15;
    v21 = sub_1EAA920(a1: v17, a2: v18, a3: 34085680);
    v19 = v41;
    v15 = i;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v21 + 24;
    *(_DWORD *)v21 = 34085680;
    *(_DWORD *)(v21 + 4) = 0;
    *(_QWORD *)(v21 + 8) = 0;
    *(_QWORD *)(v21 + 16) = 0;
  }
  v39 = v21;
  v22 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v22 + 32) > *(_QWORD *)(v9 + 32) )
  {
    v41 = v19;
    i = v15;
    v22 = sub_1EAA840(a1: v17, a2: v18, a3: 34082368, a4: v22, a5: 16);
    v21 = v39;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v22 + 32;
    *(_QWORD *)v22 = 34082368;
    *(_DWORD *)(v22 + 8) = 16;
    *(_DWORD *)(v22 + 12) = 0;
    *(_QWORD *)(v22 + 16) = 0;
    *(_QWORD *)(v22 + 24) = 0;
  }
  v23 = (unsigned __int64)(v22 - (_QWORD)v8) >> 3;
  *(_DWORD *)(v21 + 4) = v23;
  if ( (*(_DWORD *)v21 & 2) != 0 )
  {
    v23 = (v21 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v21 - v23) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v21 - v23) >> 9) + 0x38) = 0;
  }
  sub_4F36F80(a1: v17, a2: v18, a3: v21, a4: v23, a5: (__int64)(v8 + 92091314));
  v27 = sub_4F36F80(a1: v25, a2: v26, a3: v39, a4: v24, a5: v43);
  v31 = v39;
  if ( *(_DWORD *)(v39 + 8) == 0 )
    goto LABEL_28;
  v32 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v32 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v41 = (_DWORD *)v27;
    v32 = sub_1EAA920(a1: v29, a2: v30, a3: 34082680);
    v31 = v39;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v32 + 24;
    *(_DWORD *)v32 = 34082680;
    *(_DWORD *)(v32 + 4) = 0;
    *(_QWORD *)(v32 + 8) = 0;
    *(_QWORD *)(v32 + 16) = 0;
  }
  v41 = (_DWORD *)v32;
  sub_4FE9280(a1: v29, a2: v30, a3: v32, a4: v31, a5: v31, a6: v8);
  v44 = v7;
  for ( i = (__int64)v41; ; i = (__int64)(v8 + 93320312) )
  {
    v33 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v33 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v33 = sub_1EAA920(a1: v29, a2: v30, a3: 34081944);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v33 + 40;
      *(_DWORD *)v33 = 34081944;
      *(_DWORD *)(v33 + 4) = 0;
      *(_QWORD *)(v33 + 8) = 0;
      *(_QWORD *)(v33 + 16) = 0;
      *(_QWORD *)(v33 + 24) = 0;
      *(_QWORD *)(v33 + 32) = 0;
    }
    *(_DWORD *)(v33 + 20) = 46923644;
    *(_DWORD *)(v33 + 16) = v8[93585974];
    *(_DWORD *)(v33 + 12) = (unsigned __int64)(v33 - (_QWORD)v8) >> 3;
    v41 = (_DWORD *)v33;
    sub_503B9A0(a1: v29, a2: v30, a3: v33, a4: v28, a5: 0);
    v36 = (unsigned __int64)v41;
    v41[2] = (unsigned __int64)(i - (_QWORD)v8) >> 3;
    if ( (*(_DWORD *)v36 & 2) != 0 )
    {
      v37 = (v36 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v36 & 0xFFFFFFFFFFF80000LL) + ((v36 - v37) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v36 & 0xFFFFFFFFFFF80000LL) + ((v36 - v37) >> 9) + 0x38) = 0;
    }
    sub_2769900(a1: v34, a2: v35, a3: v36, a4: v36, a5: &a7);
LABEL_27:
    sub_276FC00(a1: v17, a2: v18, a3: v19, a4: v16, a5: v8 + 10821762);
LABEL_28:
    ;
  }
}
