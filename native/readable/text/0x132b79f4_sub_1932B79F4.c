// sub_132B79F4
// rva 0x132b79f4  size 112  section .text  group text
// window base 0x1932b79f4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B79F4(_DWORD a1, _DWORD a2, unsigned int a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx

  if ( __imp_api-ms-win-crt-string-l1-1-0.dll!wcscmp == nullptr )
    return 0;
  if ( (unsigned int)__imp_api-ms-win-crt-string-l1-1-0.dll!wcscat_s(a1: a6, a2: a5, a3: a4, a4: 545064) != 0 )
    v10 = a4;
  else
    v10 = 545072;
  return MEMORY[0x337f68]/* 0x337f68 */(a1: v8, a2: v9, a3, a4: v10, a5: v9, a6: (unsigned int)v8);
}
