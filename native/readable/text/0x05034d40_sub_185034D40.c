// sub_5034D40
// rva 0x05034d40  size 579  section .text  group text
// window base 0x185034d40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_5034D40(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, _DWORD *); // rbp
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned int *v18; // rdx
  unsigned __int64 i; // r8
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  int v33; // [rsp+0h] [rbp-48h] BYREF
  unsigned int *v34; // [rsp+10h] [rbp-38h]
  __int64 v35; // [rsp+18h] [rbp-30h]
  unsigned int v36; // [rsp+24h] [rbp-24h]
  __int64 v37; // [rsp+28h] [rbp-20h]
  __int64 v38; // [rsp+30h] [rbp-18h]
  _DWORD *v39; // [rsp+38h] [rbp-10h]
  int v40; // [rsp+44h] [rbp-4h]

  v39 = a3;
  v38 = a5;
  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a5 != v8 )
  {
    v36 = *a3 >> 3;
    v10 = ((__int64 (*)(void))(v7 + *(_QWORD *)(v8 + 8LL * v36 + 120)))();
    v11 = (__int64 (__fastcall *)(__int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * v36 + 112));
    v12 = v8 + 8LL * (unsigned int)v39[7];
    v37 = v10;
    v35 = v12;
    v14 = v11(a1: v13, a2: v39);
    v18 = *(unsigned int **)(v9 + 40);
    if ( (unsigned __int64)(v18 + 38) > *(_QWORD *)(v9 + 32) )
    {
      v40 = v14;
      v18 = (unsigned int *)sub_1EAA920(a1: v16, a2: v17, a3: 40540856);
      v14 = v40;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v18 + 38;
      *v18 = 40540856;
      v18[1] = 0;
      for ( i = 2; i < 38; i += 2LL )
        *(_QWORD *)&v18[i] = 0;
    }
    v40 = v14;
    v34 = v18;
    sub_5043260(a1: v14, a2: v38, a3: (_DWORD)v18, a4: v15, a5: v35, a6: v37, a7: v33);
    v22 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * v36 + 128)))(
            a1: v20,
            a2: v21,
            a3: v39);
    if ( v22 == v8 )
    {
      v26 = (unsigned __int64)v34;
    }
    else
    {
      v26 = (unsigned __int64)v34;
      v34[11] = (unsigned __int64)(v22 - v8) >> 3;
      __faststorefence();
      v23 = *(unsigned int *)v26;
      if ( (v23 & 2) != 0 )
      {
        v28 = (v26 & 0xFFFFFFFFFFF80000LL) + 2112;
        v23 = (v26 - v28) >> 9;
        if ( *(_BYTE *)((v26 & 0xFFFFFFFFFFF80000LL) + v23 + 0x38) != 0 )
          *(_BYTE *)((v26 & 0xFFFFFFFFFFF80000LL) + ((v26 - v28) >> 9) + 0x38) = 0;
      }
    }
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280(a1: v24, a2: v25, a3: v26, a4: v23, a5: v37);
    return v26;
  }
  v29 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v29 + 48) > *(_QWORD *)(v9 + 32) )
    goto LABEL_20;
  *(_QWORD *)(v9 + 40) = v29 + 48;
  *(_DWORD *)v29 = 34101256;
  *(_DWORD *)(v29 + 4) = 0;
  *(_QWORD *)(v29 + 8) = 0;
  *(_QWORD *)(v29 + 16) = 0;
  *(_QWORD *)(v29 + 24) = 0;
  *(_QWORD *)(v29 + 32) = 0;
  *(_QWORD *)(v29 + 40) = 0;
  while ( 1 )
  {
    *(_DWORD *)(v29 + 20) = 46923644;
    *(_DWORD *)(v29 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v29 + 12) = (unsigned __int64)(v29 - v8) >> 3;
    v37 = v29;
    sub_503B9A0(a1, a2, a3: v29, a4, a5: 0);
    sub_2769900(a1: v31, a2: v32, a3: v37, a4: v30, a5: &a7);
LABEL_20:
    v29 = sub_1EAA920(a1, a2, a3: 34101256);
  }
}
