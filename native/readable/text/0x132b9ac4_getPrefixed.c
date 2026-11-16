// getPrefixed
// rva 0x132b9ac4  size 151  section .text  group text
// window base 0x1932b9ac4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall getPrefixed(__int64 a1, __int64 a2, __int64 a3, _WORD *a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rsi
  _WORD *v10; // rdx

  v5 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1, a2, a3, a4: 2LL * ((int)a3 + 10));
  v7 = v5;
  if ( v5 != 0 )
  {
    if ( *a4 == 92 && a4[1] == 92 )
    {
      if ( a4[2] == 63 && a4[3] == 92 )
      {
        __imp_api-ms-win-crt-string-l1-1-0.dll!wcscpy(a1: v5, a2: v6, a3: a4, a4: v5);
        return v7;
      }
      __imp_api-ms-win-crt-string-l1-1-0.dll!wcscpy(a1: v5, a2: v6, a3: 545320, a4: v5);
      v10 = a4 + 1;
    }
    else
    {
      __imp_api-ms-win-crt-string-l1-1-0.dll!wcscpy(a1: v5, a2: v6, a3: 545344, a4: v5);
      v10 = a4;
    }
    __imp_api-ms-win-crt-string-l1-1-0.dll!wcscat(a1: v8, a2: v9, a3: v10, a4: v8);
  }
  return v7;
}
