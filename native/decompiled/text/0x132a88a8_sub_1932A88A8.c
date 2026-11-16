// sub_1932A88A8
// rva 0x132a88a8  size 500  section .text  group text
// window base 0x1932a88a8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A88A8(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 *v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // ecx
  __int64 *v35; // rdx
  __int64 v36; // rax
  int v38; // [rsp+0h] [rbp-38h]
  int v39; // [rsp+8h] [rbp-30h]
  __int64 v40; // [rsp+10h] [rbp-28h]

  if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDLL )
  {
    sub_1932A85F8(a1, a2, a3, a4: 6u);
    return 0xFFFFFFFFLL;
  }
  v11 = sub_1932A9A2C(a1, a2, a3, a4: a3, a5, a6);
  if ( v11 == -1 )
    return 0xFFFFFFFFLL;
  v12 = (__int64 *)a4[6];
  if ( v12 == a4 + 6 || (--v12, v12 == nullptr) || (unsigned __int64)v12[4] >= 0x20 )
  {
    v12 = (__int64 *)sub_1932A87FC(a1: (__int64)v12, a2: v10, a3: v9, a4);
    if ( v12 == nullptr )
      return 0xFFFFFFFFLL;
  }
  if ( ++v12[4] == 32 )
  {
    v9 = (__int64)(v12 + 1);
    *(_QWORD *)(v12[1] + 8) = v12[2];
    *(_QWORD *)v12[2] = v12[1];
    v13 = (_QWORD *)a4[7];
    v12[2] = (__int64)v13;
    v12[1] = (__int64)(a4 + 6);
    *v13 = v12 + 1;
    a4[7] = (__int64)(v12 + 1);
  }
  v14 = MEMORY[0x79AD0](a1: v12, a2: v10, a3: v9, a4: 144);
  if ( v14 == 0 )
  {
    sub_1932A85F8(a1: v16, a2: 0, a3: v15, a4: 8u);
LABEL_13:
    v30 = v17[1];
    v31 = (__int64 *)(*v17 + 48LL);
    v32 = v17[2];
    --v17[4];
    *(_QWORD *)(v30 + 8) = v32;
    *(_QWORD *)v17[2] = v17[1];
    v17[2] = v31;
    v33 = *v31;
    v17[1] = *v31;
    *(_QWORD *)(v33 + 8) = v17 + 1;
    *v31 = (__int64)(v17 + 1);
    return 0xFFFFFFFFLL;
  }
  sub_1932CA161(a1: v16, a2: v14, a3: 0, a4: v14, a5: 144);
  *(_QWORD *)(v18 + 112) = v11;
  *(_QWORD *)(v18 + 104) = v19;
  sub_1932CA161(a1: v19, a2: v18, a3: 0, a4: v18 + 64, a5: 40);
  *(_QWORD *)(v20 + 48) = v20 + 48;
  *(_QWORD *)(v20 + 56) = v20 + 48;
  if ( (int)sub_1932A94B0(a1: v21, a2: v20, a3: v20 + 64, a4: a4 + 1, a5: a3) < 0 )
  {
    sub_1932A85F8(a1: v23, a2: v24, a3: v22, a4: 0xB7u);
    MEMORY[0x79AE0](a1: v28, a2: v29, a3: v27, a4: v29);
    goto LABEL_13;
  }
  v34 = *(_DWORD *)a5 | 0x18;
  *(_DWORD *)(v24 + 128) = v34;
  *(_QWORD *)(v24 + 120) = *(_QWORD *)(a5 + 8);
  if ( (v34 & ~*(_DWORD *)(v24 + 132) & 0x27DF) != 0 )
  {
    v35 = (__int64 *)(v24 + 48);
    if ( (__int64 *)*v35 == v35 )
    {
      *(_QWORD *)(v24 + 56) = a4 + 2;
      v36 = a4[2];
      *v35 = v36;
      *(_QWORD *)(v36 + 8) = v35;
      a4[2] = (__int64)v35;
    }
  }
  if ( a4[19] != 0 )
  {
    while ( (__int64 *)a4[2] != a4 + 2
         && (int)sub_1932A9288(
                   a1: v23,
                   a2: v24,
                   a3: (unsigned int)a4[3] - 48,
                   (_DWORD)a4,
                   a5: v25,
                   a6: v26,
                   a7: v38,
                   a8: v39,
                   a9: v40) >= 0 )
      ;
  }
  return 0;
}
