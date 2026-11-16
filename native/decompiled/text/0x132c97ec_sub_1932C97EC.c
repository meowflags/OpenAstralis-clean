// sub_1932C97EC
// rva 0x132c97ec  size 133  section .text  group text
// window base 0x1932c97ec: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C97EC(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 result; // rax

  v8 = *(_QWORD *)(a6 + 56) + 16LL * **(unsigned int **)(a6 + 56);
  sub_1932C8D70(a1: a6, a2: a3, a3: a6, a4: a3, a5: v8 + 4);
  result = 1;
  if ( ((((*(_DWORD *)(a4 + 4) & 0x66) != 0) + 1) & *(_DWORD *)(v8 + 4)) != 0 )
    return sub_1932CA18B(a1: v9, a2: v10, a3: v10, a4, a5, a6: v9);
  return result;
}
