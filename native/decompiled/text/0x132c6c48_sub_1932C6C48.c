// sub_1932C6C48
// rva 0x132c6c48  size 685  section .text  group text
// window base 0x1932c6c48: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C6C48(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, _DWORD a5, int a6)
{
  __int64 *v6; // rax
  _WORD *v7; // r14
  int v8; // esi
  __int64 v10; // rdi
  int v11; // r8d
  __int64 v12; // rbp
  __int64 v13; // r10
  __int64 i; // rdx
  __int64 v15; // rcx
  int v16; // edx
  int j; // ebx
  int v18; // edx
  __int64 v19; // rbx
  __int64 v20; // rdi
  int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 k; // rcx
  unsigned int v34; // ecx
  int v35; // eax
  __int64 v37; // [rsp+0h] [rbp-88h] BYREF
  __int64 v38; // [rsp+8h] [rbp-80h]
  int v39; // [rsp+10h] [rbp-78h]
  __int64 v40; // [rsp+18h] [rbp-70h]
  _WORD v41[16]; // [rsp+20h] [rbp-68h]
  __int64 v42; // [rsp+40h] [rbp-48h]

  v6 = *(__int64 **)(a3 + 16);
  v7 = *(_WORD **)a3;
  v8 = -1;
  v10 = a4;
  v11 = 0;
  v12 = *((int *)v6 + 5);
  v13 = *v6;
  *(_DWORD *)(a4 + 5276) = 0;
  *(_DWORD *)(a4 + 5280) = 573;
  if ( (int)v12 > 0 )
  {
    for ( i = 0; i < v12; ++i )
    {
      if ( v7[2 * i] != 0 )
      {
        v15 = *(int *)(v10 + 5276);
        v8 = v11;
        *(_DWORD *)(v10 + 5276) = v15 + 1;
        *(_DWORD *)(v10 + 4 * v15 + 2988) = v11;
        *(_BYTE *)(v10 + i + 5284) = 0;
      }
      else
      {
        v7[2 * i + 1] = 0;
      }
      ++v11;
    }
  }
  while ( 1 )
  {
    v16 = *(_DWORD *)(v10 + 5276);
    if ( v16 >= 2 )
      break;
    *(_DWORD *)(v10 + 5276) = v16 + 1;
    if ( v8 < 2 )
      JUMPOUT(0x326520D00LL);
    *(_DWORD *)(v10 + 4LL * v16 + 2988) = 0;
    *v7 = 1;
    *(_BYTE *)(v10 + 5284) = 0;
    --*(_DWORD *)(v10 + 5884);
    if ( v13 != 0 )
      *(_DWORD *)(v10 + 5888) -= *(unsigned __int16 *)(v13 + 2);
  }
  *(_DWORD *)(a3 + 8) = v8;
  for ( j = *(_DWORD *)(v10 + 5276) / 2; j >= 1; --j )
    sub_1932C7570(a1: v10, a2: v8, a3: (_DWORD)v7, a4: v10, a5: j, a6, a7: v37, a8: v38);
  v18 = *(_DWORD *)(v10 + 5276);
  do
  {
    v19 = *(int *)(v10 + 2988);
    *(_DWORD *)(v10 + 2988) = *(_DWORD *)(v10 + 4LL * v18 + 2984);
    *(_DWORD *)(v10 + 5276) = v18 - 1;
    sub_1932C7570(a1: v10, a2: v8, a3: (_DWORD)v7, a4: v10, a5: 1, a6, a7: v37, a8: v38);
    v22 = *(int *)(v20 + 5280);
    v23 = *(int *)(v20 + 2988);
    *(_DWORD *)(v20 + 5280) = v22 - 1;
    *(_DWORD *)(v20 + 4 * v22 + 2980) = v19;
    v24 = *(int *)(v20 + 5280);
    *(_DWORD *)(v20 + 5280) = v24 - 1;
    *(_DWORD *)(v20 + 4 * v24 + 2980) = v23;
    v7[2 * (int)v12] = v7[2 * v23] + v7[2 * v19];
    v25 = *(_BYTE *)(v23 + v20 + 5284);
    if ( *(_BYTE *)(v19 + v20 + 5284) >= v25 )
      JUMPOUT(0x326520E03LL);
    *(_BYTE *)(v20 + (int)v12 + 5284) = v25 + 1;
    v7[2 * v23 + 1] = v12;
    v7[2 * v19 + 1] = v12;
    *(_DWORD *)(v20 + 2988) = v12;
    LODWORD(v12) = v12 + 1;
    sub_1932C7570(a1: v20, a2: v21, a3: (_DWORD)v7, a4: v20, a5: 1, a6: v23, a7: v37, a8: v38);
    v18 = *(_DWORD *)(v10 + 5276);
  }
  while ( v18 >= 2 );
  v27 = *(int *)(v10 + 5280);
  *(_DWORD *)(v10 + 5280) = v27 - 1;
  *(_DWORD *)(v10 + 4 * v27 + 2980) = *(_DWORD *)(v10 + 2988);
  sub_1932C72EC(a1: v10, a2: v8, a3, a4: v10, a5: v26, a6, a7: v37, a8: v38, a9: v39, a10: v40);
  LODWORD(v32) = 0;
  for ( k = 1; k <= 15; ++k )
  {
    v32 = 2 * (*(unsigned __int16 *)(v28 + 2 * k + 2950) + (unsigned int)v32);
    v41[k] = v32;
  }
  if ( (int)v29 >= 0 )
  {
    v32 = 0;
    do
    {
      v30 = (unsigned __int16)v7[2 * v32 + 1];
      if ( v7[2 * v32 + 1] != 0 )
      {
        LODWORD(v31) = (unsigned __int16)v41[v30];
        v34 = 0;
        v41[v30] = v31 + 1;
        do
        {
          v30 = (unsigned int)(v30 - 1);
          v35 = v31 & 1;
          v31 = (unsigned int)v31 >> 1;
          v34 = 2 * (v35 | v34);
        }
        while ( (int)v30 > 0 );
        v7[2 * v32] = v34 >> 1;
      }
      ++v32;
    }
    while ( v32 <= (int)v29 );
  }
  return sub_1932C8DE0(a1: v28, a2: v29, a3: v32, a4: (unsigned __int64)&v37 ^ v42, a5: v30, a6: v31);
}
