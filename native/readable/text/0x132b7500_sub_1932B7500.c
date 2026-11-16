// sub_132B7500
// rva 0x132b7500  size 126  section .text  group text
// window base 0x1932b7500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B7500(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx

  if ( __imp_api-ms-win-crt-string-l1-1-0.dll!wcscmp == nullptr )
    return 0;
  if ( (unsigned int)__imp_api-ms-win-crt-string-l1-1-0.dll!wcscmp(a1: a6, a2: a5, a3: a4, a4: 545064) != 0 )
    v10 = a4;
  else
    v10 = 545072;
  return MEMORY[0x337f58]/* 0x337f58 */(a1: v8, a2: v9, a3: v10, a4: sub_132B63D0, a5: a3, a6: 0);
}
