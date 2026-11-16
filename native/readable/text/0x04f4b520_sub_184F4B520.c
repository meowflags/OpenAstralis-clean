// sub_4F4B520
// rva 0x04f4b520  size 841  section .text  group text
// window base 0x184f4b520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F4B520(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 v25; // [rsp+0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+8h] [rbp-20h]
  _DWORD *v27; // [rsp+10h] [rbp-18h]
  __int64 v28; // [rsp+18h] [rbp-10h]
  unsigned int v29; // [rsp+20h] [rbp-8h]
  unsigned int v30; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_16;
  }
  if ( (a3 & 0xFFFF0000) == 0 )
  {
    if ( a5 == v7 )
      goto LABEL_24;
    v12 = *(unsigned int *)(a5 + 8);
    if ( (unsigned int)v12 <= a6 )
      goto LABEL_25;
    *(_WORD *)(a5 + 2LL * a6 + 12) = a3;
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return 1;
  }
  if ( HIWORD(a3) >= 0x11u )
  {
LABEL_16:
    v13 = a3 + 128;
    if ( (unsigned int)v13 < 0x100 )
    {
      v14 = v7 + 8LL * *(unsigned int *)(v7 + 4 * v13 + 376353204);
      v28 = a5;
      v15 = a3;
      goto LABEL_18;
    }
    goto LABEL_29;
  }
  if ( a5 == v7 )
    goto LABEL_26;
  v9 = *(unsigned int *)(a5 + 8);
  v10 = a6 + 1;
  if ( (unsigned int)v9 <= (unsigned int)v10 )
    goto LABEL_27;
  *(_WORD *)(a5 + 2 * v10 + 12) = (a3 & 0x3FF) - 9216;
  if ( (unsigned int)v9 <= a6 )
  {
    while ( 1 )
    {
      v28 = a5;
      sub_2771220(a1: v9, a2, a3: a6, a4: v10, a5: (unsigned int)v9);
LABEL_29:
      v28 = a5;
      v15 = a3;
      v23 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v23 + 16) > *(_QWORD *)(v8 + 32) )
      {
        v30 = a6;
        v29 = v15;
        v23 = sub_1EAA920(a1: v13, a2, a3: 34086464);
        a6 = v30;
        v15 = v29;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v23 + 16;
        *(_DWORD *)v23 = 34086464;
        *(_DWORD *)(v23 + 4) = 0;
        *(_QWORD *)(v23 + 8) = 0;
      }
      *(_DWORD *)(v23 + 4) = v15;
      v14 = v23;
LABEL_18:
      v16 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v16 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v27 = (_DWORD *)v14;
        v30 = a6;
        v29 = v15;
        v16 = sub_1EAA840(a1: v14, a2, a3: 34084944, a4: 34084944, a5: 2);
        v14 = (__int64)v27;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v16 + 24;
        *(_QWORD *)v16 = 34084944;
        *(_DWORD *)(v16 + 8) = 2;
        *(_DWORD *)(v16 + 12) = 0;
        *(_QWORD *)(v16 + 16) = 0;
        v30 = a6;
        v29 = v15;
      }
      v27 = (_DWORD *)v16;
      *(_DWORD *)(v16 + 16) = (unsigned __int64)(v14 - v7) >> 3;
      *(_DWORD *)(v16 + 12) = 7533399;
      v26 = sub_27768E0(a1: v16, a2, a3: 1, a4: v16, a5: v7, a6: v7 + 56620232);
      v19 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v19 + 40) > *(_QWORD *)(v8 + 32) )
      {
        v19 = sub_1EAA920(a1: v17, a2: v18, a3: 34081944);
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v19 + 40;
        *(_DWORD *)v19 = 34081944;
        *(_DWORD *)(v19 + 4) = 0;
        *(_QWORD *)(v19 + 8) = 0;
        *(_QWORD *)(v19 + 16) = 0;
        *(_QWORD *)(v19 + 24) = 0;
        *(_QWORD *)(v19 + 32) = 0;
      }
      *(_DWORD *)(v19 + 20) = 46923644;
      *(_DWORD *)(v19 + 16) = *(_DWORD *)(v7 + 374343896);
      *(_DWORD *)(v19 + 12) = (unsigned __int64)(v19 - v7) >> 3;
      v27 = (_DWORD *)v19;
      sub_503B9A0(a1: v17, a2: v18, a3: v19, a4: v19, a5: 0);
      v22 = (unsigned __int64)v27;
      v27[2] = (unsigned __int64)(v26 - v7) >> 3;
      if ( (*(_DWORD *)v22 & 2) != 0 )
      {
        v24 = (v22 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v24) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v24) >> 9) + 0x38) = 0;
      }
      sub_2769900(a1: v20, a2: v21, a3: v22, a4: v22, a5: &a7);
LABEL_24:
      sub_2771080();
LABEL_25:
      v28 = a5;
      sub_2771220(a1: v12, a2, a3: a6, a4, a5: (unsigned int)v12);
LABEL_26:
      v28 = a5;
      sub_2771080();
LABEL_27:
      v28 = a5;
      sub_2771220(a1: v9, a2, a3: (unsigned int)v10, a4: v10, a5: (unsigned int)v9);
    }
  }
  *(_WORD *)(a5 + 2LL * a6 + 12) = (a3 >> 10) - 10304;
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280();
  return 2;
}
