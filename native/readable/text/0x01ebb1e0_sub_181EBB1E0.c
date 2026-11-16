// sub_1EBB1E0
// rva 0x01ebb1e0  size 857  section .text  group text
// window base 0x181ebb1e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1EBB1E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rbp
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // r9d
  _DWORD *v17; // rbx
  __int64 v18; // r9
  _DWORD *v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  char v27; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v28; // [rsp+10h] [rbp-38h]
  __int64 v29; // [rsp+18h] [rbp-30h]
  __int64 v30; // [rsp+20h] [rbp-28h]
  __int64 v31; // [rsp+28h] [rbp-20h]
  int v32; // [rsp+34h] [rbp-14h]
  __int64 v33; // [rsp+38h] [rbp-10h]
  __int64 v34; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v9 + 8) )
  {
    v34 = a5;
    v29 = a3;
    v11 = sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v27);
    goto LABEL_19;
  }
  if ( a5 == 0 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
    {
      v34 = 0;
      v29 = a3;
      sub_277F280();
    }
    return;
  }
  v10 = *(_QWORD *)(a3 + 8);
  v11 = 34081944;
  if ( v10 > a5 || a5 > *(_QWORD *)(a3 + 16) )
  {
LABEL_19:
    v34 = a5;
    v29 = a3;
    v21 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v21 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v21 = sub_1EAA920(a1, a2, a3: v11);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v21 + 40;
      *(_DWORD *)v21 = 34081944;
      *(_DWORD *)(v21 + 4) = 0;
      *(_QWORD *)(v21 + 8) = 0;
      *(_QWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 24) = 0;
      *(_QWORD *)(v21 + 32) = 0;
    }
    *(_DWORD *)(v21 + 20) = 46923644;
    *(_DWORD *)(v21 + 16) = v8[93585974];
    *(_DWORD *)(v21 + 12) = (unsigned __int64)(v21 - (_QWORD)v8) >> 3;
    v28 = (_DWORD *)v21;
    sub_503B9A0(a1, a2, a3: v21, a4: v10, a5: 0);
    v25 = (unsigned __int64)v28;
    v28[2] = 46228026;
    if ( (*(_DWORD *)v25 & 2) != 0 )
    {
      v22 = (v25 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v25 & 0xFFFFFFFFFFF80000LL) + ((v25 - v22) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v25 & 0xFFFFFFFFFFF80000LL) + ((v25 - v22) >> 9) + 0x38) = 0;
    }
    goto LABEL_22;
  }
  v12 = *(unsigned int *)(a3 + 4);
  v7 = a5 - v10;
  v13 = a5 - v10 + 1024;
  if ( a5 - v10 != -1024 )
    JUMPOUT(0x303D45239LL);
  v14 = 64;
  v15 = 4294967285LL;
  if ( (_DWORD)v12 == 0 )
    goto LABEL_23;
  v16 = v8[2 * v12 + 2];
  if ( v16 <= 0xFFFFFFF5 )
    goto LABEL_24;
  v17 = &v8[2 * v12];
  v18 = (unsigned int)v17[4294967288LL];
  if ( (_DWORD)v18 != 0 )
    v19 = &v8[2 * v18];
  else
    v19 = &v8[2 * v17[1073741816]];
  if ( v19 == v8 )
  {
    while ( 1 )
    {
      v33 = v7;
      v34 = a5;
      v29 = a3;
      v26 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v26 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v32 = v15;
        v26 = sub_1EAA920(a1: v15, a2: v13, a3: v11);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v26 + 40;
        *(_DWORD *)v26 = 34081944;
        *(_DWORD *)(v26 + 4) = 0;
        *(_QWORD *)(v26 + 8) = 0;
        *(_QWORD *)(v26 + 16) = 0;
        *(_QWORD *)(v26 + 24) = 0;
        *(_QWORD *)(v26 + 32) = 0;
      }
      *(_DWORD *)(v26 + 20) = 46923644;
      *(_DWORD *)(v26 + 16) = v8[93585974];
      *(_DWORD *)(v26 + 12) = (unsigned __int64)(v26 - (_QWORD)v8) >> 3;
      v28 = (_DWORD *)v26;
      sub_503B9A0(a1: v15, a2: v13, a3: v26, a4: v14, a5: 0);
      v25 = (unsigned __int64)v28;
      v28[2] = 46228026;
      if ( (*(_DWORD *)v25 & 2) != 0 )
      {
        v22 = (v25 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v25 & 0xFFFFFFFFFFF80000LL) + ((v25 - v22) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v25 & 0xFFFFFFFFFFF80000LL) + ((v25 - v22) >> 9) + 0x38) = 0;
      }
LABEL_22:
      sub_2769900(a1: v23, a2: v24, a3: v25, a4: v22, a5: &a7);
LABEL_23:
      v33 = v7;
      v34 = a5;
      v29 = a3;
      sub_2771080(a1: v15, a2: v13, a3, a4: v14);
LABEL_24:
      v33 = v7;
      v34 = a5;
      v29 = a3;
      v11 = sub_2771220(a1: v15, a2: v13, a3: (unsigned int)v15, a4: v14, a5: v16);
    }
  }
  v28 = v19;
  v33 = -1024;
  v34 = a5;
  v29 = a3;
  v31 = 0;
  v30 = 0;
  v20 = sub_4F9CAA0(a1: 4294967285LL, a2: 0, a3: 0);
  v28[v20 + 3] = 0;
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280();
}
