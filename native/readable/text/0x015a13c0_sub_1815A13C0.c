// sub_15A13C0
// rva 0x015a13c0  size 710  section .text  group text
// window base 0x1815a13c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A13C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned int v25; // ecx
  __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // r10
  unsigned __int64 v29; // rcx
  __int64 v31; // rcx
  __int64 v32; // r10
  char *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v36; // [rsp+Ch] [rbp-2Ch]
  __int64 i; // [rsp+10h] [rbp-28h]
  __int64 v38; // [rsp+18h] [rbp-20h]
  __int64 v39; // [rsp+20h] [rbp-18h]
  __int64 v40; // [rsp+28h] [rbp-10h]
  unsigned int v41; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v8 + 8) )
    goto LABEL_30;
  v39 = a3;
  v9 = sub_15A0E80(a1, a2, a3, a4, a5, a6);
  v11 = *(unsigned int *)(v9 + 8);
  v6 = *(_DWORD *)(v9 + 12);
  v12 = v7 + 8 * v11;
  if ( (_DWORD)v11 == 0 )
  {
LABEL_31:
    v38 = v12;
    v41 = v6;
    i = v9;
    v9 = sub_2771080();
    goto LABEL_32;
  }
  v13 = *(_DWORD *)(v7 + 8 * v11) >> 3;
  if ( (v6 & 0x80000000) != 0 )
  {
    v38 = v7 + 8 * v11;
    v41 = v6;
    i = v9;
    sub_579AF80(a1: v10, a2: v12, a3: v38, a4: v7 + 8 * v13, a5: v6, a6: v7 + 8 * v13);
LABEL_30:
    v39 = a3;
    v9 = sub_1EB84E0();
    goto LABEL_31;
  }
  v14 = *(unsigned int *)(v7 + 8 * v13 + 24);
  v15 = v7 + 8 * v14;
  if ( (_DWORD)v14 == 0 )
  {
LABEL_32:
    i = v9;
    goto LABEL_33;
  }
  if ( (_DWORD)v14 == 4260190 )
    goto LABEL_34;
  v16 = *(unsigned int *)(v7 + 8 * v14 + 28);
  if ( (_DWORD)v16 == 0 )
    goto LABEL_39;
  v17 = *(unsigned int *)(v7 + 8 * v16 + 32);
  if ( (_DWORD)v17 != 0 )
  {
    v18 = *(unsigned int *)(v7 + 8 * v17 + 28);
    if ( (_DWORD)v18 != 0 )
    {
      if ( (*(_BYTE *)(v7 + 8 * v18 + 112) & 1) != 0 )
      {
        v19 = v7 + 8 * v17;
        goto LABEL_11;
      }
      for ( i = v9; ; i = v9 )
      {
LABEL_33:
        v9 = sub_1EB87C0(a1: v15, a2: v12, a3: v15);
LABEL_34:
        ;
      }
    }
    i = v9;
    sub_2771080(a1: v15, a2: v12);
LABEL_39:
    sub_2771080(a1: v15, a2: v12, a3: v39);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15A16A0();
  }
  v38 = v7 + 8 * v11;
  v41 = v6;
  v36 = v11;
  i = v9;
  v34 = sub_1EB8B60(a1: v15, a2: v12, a3: v15);
  if ( v34 == v7 )
    goto LABEL_33;
  v19 = v34;
  v12 = v38;
  v11 = v36;
  v9 = i;
LABEL_11:
  v20 = v19;
  v21 = *(_QWORD *)(v8 + 40);
  v22 = v6;
  v23 = (((unsigned __int64)v6 << *(_DWORD *)(v19 + 32)) + ((*(int *)(v19 + 32) >> 8) & 0xFFF) + 7)
      & 0xFFFFFFFFFFFFFFF8LL;
  v24 = v20 - v7;
  if ( v23 >= 0x20000 || (v23 += v21, v23 > *(_QWORD *)(v8 + 32)) )
  {
    v40 = v6;
    v38 = v12;
    v36 = v11;
    i = v9;
    v41 = v6;
    v21 = sub_1EAA840(a1: v24, a2: v12, a3: v24, a4: v23, a5: v6);
    v22 = v40;
    v12 = v38;
    v6 = v41;
    v11 = v36;
    v9 = i;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v23;
    *(_QWORD *)v21 = v24;
    *(_DWORD *)(v21 + 8) = v6;
  }
  v25 = *(_DWORD *)(v7 + 8 * v11 + 8);
  if ( v6 < v25 )
    JUMPOUT(0x302B2D4CFLL);
  v26 = v25;
  if ( v6 <= v25 )
    JUMPOUT(0x302B2D4DBLL);
  if ( v25 != 0 )
  {
    v12 += 12;
    v27 = 0;
    do
    {
      *(_DWORD *)(v21 + 12 + 4 * v27) = *(_DWORD *)(v12 + 4 * v27);
      ++v27;
    }
    while ( v27 <= v25 - 1LL );
  }
  v28 = v22 - v25;
  v29 = 4 * v28;
  if ( 4 * v28 >= 2048 )
  {
    i = v9;
    v33 = (char *)(v21 + 4LL * (unsigned int)v26 + 12);
    memset(v33, 0, v29);
    v26 = (__int64)&v33[v29];
    v9 = i;
  }
  else if ( v6 > (unsigned int)v26 )
  {
    v31 = v21 + 4LL * (unsigned int)v26 + 12;
    v32 = v28 - 1;
    v26 = 0;
    do
      *(_DWORD *)(v31 + 4 * v26++) = 0;
    while ( v26 <= v32 );
  }
  if ( *(int *)(v8 + 16) <= 0 )
  {
    i = v9;
    sub_277F280(a1: v26, a2: v12, a3: v21);
  }
  return v21;
}
