// sub_132BF3F8
// rva 0x132bf3f8  size 312  section .text  group text
// window base 0x1932bf3f8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132BF3F8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbp
  __int64 i; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 j; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v21; // rdi

  v5 = a5;
  for ( i = a4; ; *(_DWORD *)(i + 148) = a2 )
  {
    v8 = *(_QWORD *)(i + 136);
    if ( v8 == 0 )
    {
      v9 = __imp_api-ms-win-crt-heap-l1-1-0.dll!calloc;
      *(_DWORD *)(i + 148) = __imp_api-ms-win-crt-heap-l1-1-0.dll!realloc;
      v8 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: i, a2, a3: 8, a4: v9);
      *(_QWORD *)(i + 136) = v8;
      if ( v8 == 0 )
        return 0xFFFFFFFFLL;
      *(_DWORD *)(i + 144) = 0;
    }
    v10 = *(int *)(i + 144);
    v11 = *(_DWORD *)(i + 148);
    if ( (int)v10 < v11 )
      break;
    v12 = (unsigned int)(2 * v11);
    v13 = (int)v12;
    v14 = MEMORY[0x79ae8]/* 0x79ae8 */(a1: i, a2: v12, a3: 8LL * (int)v12, a4: v8);
    *(_QWORD *)(i + 136) = v14;
    if ( v14 == 0 )
      return 0xFFFFFFFFLL;
    for ( j = *(int *)(i + 148); j < v13; ++j )
      *(_QWORD *)(*(_QWORD *)(i + 136) + 8 * j) = 0;
    *(_DWORD *)(i + 144) = *(_DWORD *)(i + 148);
  }
  v16 = MEMORY[0x79ad0]/* 0x79ad0 */(a1: i, a2, a3, a4: (int)v5 + 1);
  *(_QWORD *)(*(_QWORD *)(v17 + 136) + 8 * v10) = v16;
  v19 = *(_QWORD *)(*(_QWORD *)(v17 + 136) + 8 * v10);
  if ( v19 == 0 )
    return 0xFFFFFFFFLL;
  sub_1932CA15B(a1: v17, a2: v18, a3, a4: v19, a5: v5);
  *(_BYTE *)(v5 + *(_QWORD *)(*(_QWORD *)(v21 + 136) + 8 * v10)) = 0;
  ++*(_DWORD *)(v21 + 144);
  return 0;
}
