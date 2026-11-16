// sub_1EC99A0
// rva 0x01ec99a0  size 1173  section .text  group text
// window base 0x181ec99a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1EC99A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  _DWORD *result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // ebx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r9
  int v25; // eax
  unsigned __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // r8
  int v29; // [rsp+0h] [rbp-48h] BYREF
  __int64 v30; // [rsp+8h] [rbp-40h]
  __int64 v31; // [rsp+10h] [rbp-38h]
  __int64 v32; // [rsp+18h] [rbp-30h]
  unsigned __int64 v33; // [rsp+20h] [rbp-28h]
  __int64 v34; // [rsp+28h] [rbp-20h]
  __int64 v35; // [rsp+30h] [rbp-18h]
  __int64 v36; // [rsp+38h] [rbp-10h]
  int v37; // [rsp+44h] [rbp-4h]

  v34 = a3;
  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v7 + 8) )
  {
    v32 = a5;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v29);
    goto LABEL_57;
  }
  v8 = *(unsigned int *)(a3 + 12);
  v9 = v6 + 8 * v8;
  if ( (_DWORD)v8 != 0 )
  {
    v32 = a5;
    goto LABEL_4;
  }
  v15 = *(_DWORD *)(v6 + 8LL * (*(_DWORD *)a3 >> 3) + 48);
  v37 = v15;
  v36 = v15;
  if ( v15 == 0 )
    goto LABEL_40;
  a2 = *(unsigned int *)(a3 + v15);
  if ( (_DWORD)a2 == 0 || v7 == *(_QWORD *)(v6 + 376351704) )
    goto LABEL_40;
  a1 = *(_QWORD *)(v7 + 64);
  v16 = *(_QWORD *)(v6 + 8 * a2 + 16);
  if ( v16 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v6 + 8 * a2 + 16), 0, a1) == 0 )
    {
      v33 = v6 + 8 * v8;
      v32 = a5;
      goto LABEL_15;
    }
    goto LABEL_40;
  }
  if ( v16 != a1 || (v27 = *(_DWORD *)(v6 + 8 * a2 + 28) + 1) < 0 )
  {
LABEL_40:
    v33 = v9;
    v32 = a5;
    sub_208CC20();
    a3 = v34;
    goto LABEL_15;
  }
  *(_DWORD *)(v6 + 8 * a2 + 28) = v27;
  v33 = v9;
  v32 = a5;
LABEL_15:
  v17 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v17 != 0 )
  {
    v18 = v6 + 8 * v17;
  }
  else
  {
    v18 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v18 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v18 = sub_1EAA920(a1, a2, a3: 40469656);
      a3 = v34;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v18 + 24;
      *(_DWORD *)v18 = 40469656;
      *(_DWORD *)(v18 + 4) = 0;
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = 0;
    }
    v21 = *(_QWORD *)(v7 + 40);
    v9 = 34107288;
    if ( (unsigned __int64)(v21 + 64) > *(_QWORD *)(v7 + 32) )
    {
      v31 = v18;
      v35 = 34107288;
      v21 = sub_1EAA920(a1, a2, a3: 34107288);
      v9 = v35;
      v18 = v31;
      a3 = v34;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v21 + 64;
      *(_DWORD *)v21 = 34107288;
      *(_DWORD *)(v21 + 4) = 0;
      *(_QWORD *)(v21 + 8) = 0;
      *(_QWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 24) = 0;
      *(_QWORD *)(v21 + 32) = 0;
      *(_QWORD *)(v21 + 40) = 0;
      *(_QWORD *)(v21 + 48) = 0;
      *(_QWORD *)(v21 + 56) = 0;
    }
    v22 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v22 + 64) > *(_QWORD *)(v7 + 32) )
    {
      v30 = v21;
      v31 = v18;
      v22 = sub_1EAA920(a1, a2, a3: v9);
      v21 = v30;
      v18 = v31;
      a3 = v34;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v22 + 64;
      *(_DWORD *)v22 = 34107288;
      *(_DWORD *)(v22 + 4) = 0;
      *(_QWORD *)(v22 + 8) = 0;
      *(_QWORD *)(v22 + 16) = 0;
      *(_QWORD *)(v22 + 24) = 0;
      *(_QWORD *)(v22 + 32) = 0;
      *(_QWORD *)(v22 + 40) = 0;
      *(_QWORD *)(v22 + 48) = 0;
      *(_QWORD *)(v22 + 56) = 0;
    }
    *(_DWORD *)(v18 + 4) = (unsigned __int64)(v21 - v6) >> 3;
    if ( (*(_DWORD *)v18 & 2) != 0 )
    {
      v9 = v18 & 0xFFFFFFFFFFF80000LL;
      v26 = (v18 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v26) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v26) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v18 + 8) = (unsigned __int64)(v22 - v6) >> 3;
    if ( (*(_DWORD *)v18 & 2) != 0 )
    {
      v9 = (v18 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v9) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v9) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 12) = (unsigned __int64)(v18 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v9 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v9) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v9) >> 9) + 0x38) = 0;
    }
  }
  if ( v37 != 0 )
  {
    v19 = *(unsigned int *)(a3 + v36);
    v20 = *(_DWORD *)(v6 + 8 * v19 + 28);
    if ( v20 == 1 )
    {
      *(_QWORD *)(v6 + 8 * v19 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v9 = (unsigned int)(v20 - 1);
      *(_DWORD *)(v6 + 8 * v19 + 28) = v9;
    }
    if ( v20 != 1 )
    {
      v9 = v18;
      goto LABEL_4;
    }
    v23 = *(unsigned int *)(v6 + 8 * v19 + 4);
    if ( (_DWORD)v23 == 0 )
    {
      v9 = v18;
      goto LABEL_4;
    }
    v24 = *(unsigned int *)(v6 + 8 * v23 + 8);
    if ( (_DWORD)v24 == 0 )
    {
      v9 = v18;
      goto LABEL_4;
    }
    v25 = *(_DWORD *)(v6 + 8 * v24 + 16);
    if ( v25 == 0 )
    {
      v9 = v18;
      goto LABEL_4;
    }
    v31 = v18;
    v28 = v25 != 0;
  }
  else
  {
    v31 = v18;
    v28 = 0xFFFFFFFFLL;
  }
  sub_208CCA0(a1, a2, a3: v34, a4: v9, a5: v28);
  v9 = v31;
  a3 = v34;
LABEL_4:
  v10 = *(unsigned int *)(v9 + 4);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_57:
    result = (_DWORD *)sub_2771080(a1, a2, a3);
LABEL_58:
    sub_276FC00(a1: v13, a2: v14, a3: result, a4: v12, a5: v6 + 40469176);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_1EC9E40();
  }
  result = (_DWORD *)sub_59DF680(a1, a2, a3: v6 + 8 * v10, a4: v9, a5: v32, a6: v6 + 376659704);
  if ( result != (_DWORD *)v6 && *result >> 3 != 5058647 )
    goto LABEL_58;
  if ( *(int *)(v7 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
