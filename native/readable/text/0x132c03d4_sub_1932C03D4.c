// sub_132C03D4
// rva 0x132c03d4  size 228  section .text  group text
// window base 0x1932c03d4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int16 *__fastcall sub_132C03D4(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int16 *v12; // rbx
  __int64 v13; // rsi
  __int64 v15; // rax
  int v16; // r9d

  v5 = *(_QWORD *)(a4 + 48);
  v6 = a5;
  if ( a5 > *(_QWORD *)(a4 + 16) - a3 )
    v6 = (unsigned int)(*(_DWORD *)(a4 + 16) - a3);
  v7 = v6;
  v8 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v6, a2: a3, a3, a4: (int)v6);
  v12 = (unsigned __int16 *)v8;
  if ( v8 != 0 && (unsigned int)sub_132C0524(a1: v10, a2: v11, a3: v8, a4: v5, a5: v7, a6: v11) != -1 )
  {
    v13 = v12[15] + v12[16] + 46 + (unsigned int)v12[14];
    if ( (int)v13 <= (int)v10 )
      return v12;
    v15 = __imp_api-ms-win-crt-heap-l1-1-0.dll!realloc(a1: v10, a2: v13, a3: (unsigned int)v13, a4: v12);
    v12 = (unsigned __int16 *)v15;
    if ( v15 != 0
      && (unsigned int)sub_132C04B8(
                         a1: v10,
                         a2: (int)v11 - (int)v10,
                         a3: v7 + (int)v15,
                         a4: v5,
                         a5: (int)v11 - (int)v10,
                         a6: v16) != -1 )
    {
      return v12;
    }
  }
  __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v10, a2: v11, a3: v9, a4: v12);
  return nullptr;
}
