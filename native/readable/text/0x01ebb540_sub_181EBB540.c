// sub_1EBB540
// rva 0x01ebb540  size 857  section .text  group text
// window base 0x181ebb540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1EBB540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rbp
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // r9d
  _DWORD *v16; // rbx
  __int64 v17; // r9
  _DWORD *v18; // r9
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  char v30; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v31; // [rsp+10h] [rbp-38h]
  __int64 v32; // [rsp+18h] [rbp-30h]
  __int64 v33; // [rsp+20h] [rbp-28h]
  __int64 v34; // [rsp+28h] [rbp-20h]
  int v35; // [rsp+34h] [rbp-14h]
  __int64 v36; // [rsp+38h] [rbp-10h]
  __int64 v37; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v9 + 8) )
  {
    v37 = a5;
    v32 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v30);
    goto LABEL_19;
  }
  if ( a5 == 0 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
    {
      v37 = 0;
      v32 = a3;
      sub_277F280();
    }
    return v8;
  }
  v10 = *(_QWORD *)(a3 + 8);
  v11 = 34081944;
  if ( v10 > a5 || a5 > *(_QWORD *)(a3 + 16) )
  {
LABEL_19:
    v37 = a5;
    v32 = a3;
    v24 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v24 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v24 = sub_1EAA920(a1, a2, a3: v11);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v24 + 40;
      *(_DWORD *)v24 = 34081944;
      *(_DWORD *)(v24 + 4) = 0;
      *(_QWORD *)(v24 + 8) = 0;
      *(_QWORD *)(v24 + 16) = 0;
      *(_QWORD *)(v24 + 24) = 0;
      *(_QWORD *)(v24 + 32) = 0;
    }
    *(_DWORD *)(v24 + 20) = 46923644;
    *(_DWORD *)(v24 + 16) = v8[93585974];
    *(_DWORD *)(v24 + 12) = (unsigned __int64)(v24 - (_QWORD)v8) >> 3;
    v31 = (_DWORD *)v24;
    sub_503B9A0(a1, a2, a3: v24, a4: v11, a5: 0);
    v28 = (unsigned __int64)v31;
    v31[2] = 46228026;
    if ( (*(_DWORD *)v28 & 2) != 0 )
    {
      v25 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v25) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v25) >> 9) + 0x38) = 0;
    }
    goto LABEL_22;
  }
  v12 = *(unsigned int *)(a3 + 4);
  v7 = a5 - v10;
  if ( a5 - v10 != -1024 )
    JUMPOUT(0x303D45599LL);
  v13 = 64;
  v14 = 4294967285LL;
  if ( (_DWORD)v12 == 0 )
    goto LABEL_23;
  v15 = v8[2 * v12 + 2];
  if ( v15 <= 0xFFFFFFF5 )
    goto LABEL_24;
  v16 = &v8[2 * v12];
  v17 = (unsigned int)v16[4294967288LL];
  if ( (_DWORD)v17 != 0 )
    v18 = &v8[2 * v17];
  else
    v18 = &v8[2 * v16[1073741816]];
  if ( v18 == v8 )
  {
    while ( 1 )
    {
      v36 = v7;
      v37 = a5;
      v32 = a3;
      v29 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v29 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v35 = v14;
        v29 = sub_1EAA920(a1: v14, a2: v13, a3: v11);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v29 + 40;
        *(_DWORD *)v29 = 34081944;
        *(_DWORD *)(v29 + 4) = 0;
        *(_QWORD *)(v29 + 8) = 0;
        *(_QWORD *)(v29 + 16) = 0;
        *(_QWORD *)(v29 + 24) = 0;
        *(_QWORD *)(v29 + 32) = 0;
      }
      *(_DWORD *)(v29 + 20) = 46923644;
      *(_DWORD *)(v29 + 16) = v8[93585974];
      *(_DWORD *)(v29 + 12) = (unsigned __int64)(v29 - (_QWORD)v8) >> 3;
      v31 = (_DWORD *)v29;
      sub_503B9A0(a1: v14, a2: v13, a3: v29, a4: v11, a5: 0);
      v28 = (unsigned __int64)v31;
      v31[2] = 46228026;
      if ( (*(_DWORD *)v28 & 2) != 0 )
      {
        v25 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v25) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v25) >> 9) + 0x38) = 0;
      }
LABEL_22:
      sub_2769900(a1: v26, a2: v27, a3: v28, a4: v25, a5: &a7);
LABEL_23:
      v36 = v7;
      v37 = a5;
      v32 = a3;
      sub_2771080(a1: v14, a2: v13, a3, a4: v11);
LABEL_24:
      v36 = v7;
      v37 = a5;
      v32 = a3;
      sub_2771220(a1: v14, a2: v13, a3: (unsigned int)v14, a4: v11, a5: v15);
    }
  }
  v31 = v18;
  v36 = a5 - v10;
  v37 = a5;
  v32 = a3;
  v34 = 0;
  v33 = 0;
  v19 = sub_4F9CAA0(a1: 4294967285LL, a2: 64, a3: 0);
  v22 = (unsigned int)v31[v19 + 3];
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280(a1: v20, a2: v21, a3: v22, a4: v33, a5: v34);
  return &v8[2 * v22];
}
