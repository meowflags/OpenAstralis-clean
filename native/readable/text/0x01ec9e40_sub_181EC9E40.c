// sub_1EC9E40
// rva 0x01ec9e40  size 1293  section .text  group text
// window base 0x181ec9e40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1EC9E40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  _DWORD *result; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // ebx
  signed __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // r9
  int v30; // eax
  unsigned __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // r8
  int v34; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v35; // [rsp+Ch] [rbp-4Ch]
  __int64 v36; // [rsp+10h] [rbp-48h]
  unsigned __int64 v37; // [rsp+18h] [rbp-40h]
  __int64 v38; // [rsp+20h] [rbp-38h]
  unsigned __int64 v39; // [rsp+28h] [rbp-30h]
  __int64 v40; // [rsp+30h] [rbp-28h]
  __int64 v41; // [rsp+38h] [rbp-20h]
  __int64 v42; // [rsp+40h] [rbp-18h]
  __int64 v43; // [rsp+48h] [rbp-10h]
  int v44; // [rsp+50h] [rbp-8h]
  unsigned int v45; // [rsp+54h] [rbp-4h]

  v41 = a3;
  v40 = a6;
  v45 = a1;
  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v7 + 8) )
  {
    v38 = a5;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v34);
    goto LABEL_60;
  }
  v8 = *(unsigned int *)(a3 + 12);
  v9 = v6 + 8 * v8;
  if ( (_DWORD)v8 != 0 )
  {
    v38 = a5;
    goto LABEL_4;
  }
  v19 = *(_DWORD *)(v6 + 8LL * (*(_DWORD *)a3 >> 3) + 48);
  v44 = v19;
  v43 = v19;
  if ( v19 == 0 )
    goto LABEL_42;
  a2 = *(unsigned int *)(a3 + v19);
  if ( (_DWORD)a2 == 0 || v7 == *(_QWORD *)(v6 + 376351704) )
    goto LABEL_42;
  v20 = *(_QWORD *)(v7 + 64);
  v21 = *(_QWORD *)(v6 + 8 * a2 + 16);
  if ( v21 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v6 + 8 * a2 + 16), 0, v20) == 0 )
    {
      v39 = v6 + 8 * v8;
      v38 = a5;
      goto LABEL_17;
    }
    goto LABEL_42;
  }
  if ( v21 != v20 || (v32 = *(_DWORD *)(v6 + 8 * a2 + 28) + 1) < 0 )
  {
LABEL_42:
    v39 = v9;
    v38 = a5;
    sub_208CC20();
    a3 = v41;
    goto LABEL_17;
  }
  *(_DWORD *)(v6 + 8 * a2 + 28) = v32;
  v39 = v9;
  v38 = a5;
LABEL_17:
  v22 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v22 != 0 )
  {
    v23 = v6 + 8 * v22;
  }
  else
  {
    v23 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v23 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v23 = sub_1EAA920(a1, a2, a3: 40469656);
      a3 = v41;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v23 + 24;
      *(_DWORD *)v23 = 40469656;
      *(_DWORD *)(v23 + 4) = 0;
      *(_QWORD *)(v23 + 8) = 0;
      *(_QWORD *)(v23 + 16) = 0;
    }
    v26 = *(_QWORD *)(v7 + 40);
    v9 = 34107288;
    if ( (unsigned __int64)(v26 + 64) > *(_QWORD *)(v7 + 32) )
    {
      v37 = v23;
      v42 = 34107288;
      v26 = sub_1EAA920(a1, a2, a3: 34107288);
      v9 = v42;
      v23 = v37;
      a3 = v41;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v26 + 64;
      *(_DWORD *)v26 = 34107288;
      *(_DWORD *)(v26 + 4) = 0;
      *(_QWORD *)(v26 + 8) = 0;
      *(_QWORD *)(v26 + 16) = 0;
      *(_QWORD *)(v26 + 24) = 0;
      *(_QWORD *)(v26 + 32) = 0;
      *(_QWORD *)(v26 + 40) = 0;
      *(_QWORD *)(v26 + 48) = 0;
      *(_QWORD *)(v26 + 56) = 0;
    }
    v27 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v27 + 64) > *(_QWORD *)(v7 + 32) )
    {
      v36 = v26;
      v37 = v23;
      v27 = sub_1EAA920(a1, a2, a3: v9);
      v26 = v36;
      v23 = v37;
      a3 = v41;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v27 + 64;
      *(_DWORD *)v27 = 34107288;
      *(_DWORD *)(v27 + 4) = 0;
      *(_QWORD *)(v27 + 8) = 0;
      *(_QWORD *)(v27 + 16) = 0;
      *(_QWORD *)(v27 + 24) = 0;
      *(_QWORD *)(v27 + 32) = 0;
      *(_QWORD *)(v27 + 40) = 0;
      *(_QWORD *)(v27 + 48) = 0;
      *(_QWORD *)(v27 + 56) = 0;
    }
    *(_DWORD *)(v23 + 4) = (unsigned __int64)(v26 - v6) >> 3;
    if ( (*(_DWORD *)v23 & 2) != 0 )
    {
      v9 = v23 & 0xFFFFFFFFFFF80000LL;
      v31 = (v23 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v31) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v31) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v23 + 8) = (unsigned __int64)(v27 - v6) >> 3;
    if ( (*(_DWORD *)v23 & 2) != 0 )
    {
      v9 = (v23 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v9) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v9) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 12) = (unsigned __int64)(v23 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v9 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v9) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v9) >> 9) + 0x38) = 0;
    }
  }
  if ( v44 != 0 )
  {
    v24 = *(unsigned int *)(a3 + v43);
    v25 = *(_DWORD *)(v6 + 8 * v24 + 28);
    if ( v25 == 1 )
    {
      *(_QWORD *)(v6 + 8 * v24 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v9 = (unsigned int)(v25 - 1);
      *(_DWORD *)(v6 + 8 * v24 + 28) = v9;
    }
    if ( v25 != 1 )
    {
      v9 = v23;
      goto LABEL_4;
    }
    v28 = *(unsigned int *)(v6 + 8 * v24 + 4);
    if ( (_DWORD)v28 == 0 )
    {
      v9 = v23;
      goto LABEL_4;
    }
    v29 = *(unsigned int *)(v6 + 8 * v28 + 8);
    if ( (_DWORD)v29 == 0 )
    {
      v9 = v23;
      goto LABEL_4;
    }
    v30 = *(_DWORD *)(v6 + 8 * v29 + 16);
    if ( v30 == 0 )
    {
      v9 = v23;
      goto LABEL_4;
    }
    v37 = v23;
    v33 = v30 != 0;
  }
  else
  {
    v37 = v23;
    v33 = 0xFFFFFFFFLL;
  }
  sub_208CCA0(a1, a2, a3: v41, a4: v9, a5: v33);
  v9 = v37;
  a3 = v41;
LABEL_4:
  v10 = *(unsigned int *)(v9 + 8);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_60:
    result = (_DWORD *)sub_2771080(a1, a2, a3);
LABEL_61:
    sub_276FC00(a1: v17, a2: v18, a3: result, a4: v16, a5: v6 + 40469064);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_1ECA360();
  }
  v11 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v11 + 24) > *(_QWORD *)(v7 + 32) )
  {
    v35 = *(_DWORD *)(v9 + 8);
    v37 = v9;
    v12 = sub_1EAA920(a1, a2, a3: 40469768);
    v10 = v35;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v11 + 24;
    *(_DWORD *)v11 = 40469768;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = 0;
    v12 = v11;
  }
  v13 = v45;
  v14 = v40;
  *(_DWORD *)(v12 + 8) = v45;
  *(_DWORD *)(v12 + 4) = (unsigned __int64)(v14 - v6) >> 3;
  result = (_DWORD *)sub_59DF680(a1: v13, a2, a3: v6 + 8 * v10, a4: v14, a5: v38);
  if ( result != (_DWORD *)v6 && *result >> 3 != 5058633 )
    goto LABEL_61;
  if ( *(int *)(v7 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
