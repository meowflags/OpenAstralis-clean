// sub_5034B40
// rva 0x05034b40  size 500  section .text  group text
// window base 0x185034b40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_5034B40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  _DWORD *v12; // rdx
  unsigned __int64 i; // r8
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v27; // [rsp+8h] [rbp-30h]
  __int64 v28; // [rsp+10h] [rbp-28h]
  __int64 v29; // [rsp+18h] [rbp-20h]
  __int64 v30; // [rsp+20h] [rbp-18h]
  __int64 v31; // [rsp+28h] [rbp-10h]
  int v32; // [rsp+34h] [rbp-4h]

  v31 = a3;
  v30 = a5;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a5 != v7 )
  {
    v29 = v7 + 8LL * *(unsigned int *)(a3 + 24);
    v9 = sub_5032900(a1, a2, a3);
    v12 = *(_DWORD **)(v8 + 40);
    if ( (unsigned __int64)(v12 + 38) > *(_QWORD *)(v8 + 32) )
    {
      v28 = v9;
      v14 = sub_1EAA920(a1: v10, a2: v11, a3: 40540856);
      v9 = v28;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v12 + 38;
      *v12 = 40540856;
      v12[1] = 0;
      for ( i = 2; i < 38; i += 2LL )
        *(_QWORD *)&v12[i] = 0;
      v14 = (__int64)v12;
    }
    v15 = *(_DWORD *)(v31 + 12);
    v28 = v9;
    v32 = v15;
    v27 = (_DWORD *)v14;
    sub_5043260(a1: v15, a2: v30, a3: v14, a4: v14, a5: v29, a6: v9, a7: v26);
    v18 = v31;
    v19 = *(_DWORD *)(v31 + 8);
    if ( v19 != 0 )
    {
      v20 = (unsigned __int64)v27;
      v27[11] = v19;
      __faststorefence();
      if ( (*(_DWORD *)v20 & 2) != 0 )
      {
        v17 = (v20 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v17) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v17) >> 9) + 0x38) = 0;
      }
    }
    else
    {
      v20 = (unsigned __int64)v27;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280(a1: v16, a2: v17, a3: v18, a4: v20);
    return v20;
  }
  v22 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v22 + 48) > *(_QWORD *)(v8 + 32) )
    goto LABEL_21;
  *(_QWORD *)(v8 + 40) = v22 + 48;
  *(_DWORD *)v22 = 34101256;
  *(_DWORD *)(v22 + 4) = 0;
  *(_QWORD *)(v22 + 8) = 0;
  *(_QWORD *)(v22 + 16) = 0;
  *(_QWORD *)(v22 + 24) = 0;
  *(_QWORD *)(v22 + 32) = 0;
  *(_QWORD *)(v22 + 40) = 0;
  while ( 1 )
  {
    *(_DWORD *)(v22 + 20) = 46923644;
    *(_DWORD *)(v22 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v22 + 12) = (unsigned __int64)(v22 - v7) >> 3;
    v29 = v22;
    sub_503B9A0(a1, a2, a3: v22, a4, a5: 0);
    sub_2769900(a1: v24, a2: v25, a3: v29, a4: v23, a5: &a7);
LABEL_21:
    v22 = sub_1EAA920(a1, a2, a3: 34101256);
  }
}
