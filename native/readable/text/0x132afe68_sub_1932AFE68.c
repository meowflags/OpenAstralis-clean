// sub_132AFE68
// rva 0x132afe68  size 127  section .text  group text
// window base 0x1932afe68: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AFE68(
        _DWORD a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        _DWORD a5,
        _DWORD a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx

  if ( (unsigned int)__imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: a4, a2, a3: a4, a4: 0, a5: 0, a6: &a9) != -2147481646 )
    return 0xFFFFFFFFLL;
  v13 = __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v11, a2: v12, a3: v10, a4: a9);
  *a3 = v13;
  if ( v13 == 0 )
    return 0xFFFFFFFFLL;
  v16 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v14, a2: v15, a3: (unsigned int)v14, a4: 0, a5: v13, a6: &a9);
  v19 = *a3;
  if ( v16 != 0 )
  {
    __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v17, a2: v18, a3: v19, a4: *a3);
    *a3 = 0;
    return 0xFFFFFFFFLL;
  }
  *(_BYTE *)(a9 - 1 + v19) = 0;
  return 0;
}
