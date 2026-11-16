// sub_1932C0570
// rva 0x132c0570  size 198  section .text  group text
// window base 0x1932c0570: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int16 *__fastcall sub_1932C0570(_DWORD a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v6; // rcx
  unsigned __int16 *v7; // r10
  unsigned __int16 *result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi

  v4 = *(_QWORD *)(a4 + 32);
  if ( v4 != 0 )
  {
    v6 = *(_QWORD *)(a4 + 40);
    if ( a3 >= v6 && a3 + 46 <= v6 + 0x2000 )
    {
      v7 = (unsigned __int16 *)(a3 + v4 - v6);
      if ( v7[14] + v7[16] + v7[15] + 46LL + a3 <= v6 + 0x2000 )
        return v7;
    }
  }
  result = sub_1932C03D4(a1: a3, a2, a3, a4, a5: 0x2000);
  if ( result != nullptr )
  {
    MEMORY[0x79AE0](a1: v10, a2: result, a3: v9, a4: *(_QWORD *)(a4 + 32));
    *(_QWORD *)(a4 + 32) = v11;
    *(_QWORD *)(a4 + 40) = v12;
    return (unsigned __int16 *)v11;
  }
  return result;
}
