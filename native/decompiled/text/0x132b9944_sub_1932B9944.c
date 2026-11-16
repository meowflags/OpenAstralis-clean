// sub_1932B9944
// rva 0x132b9944  size 116  section .text  group text
// window base 0x1932b9944: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B9944(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned int v17; // [rsp+0h] [rbp-28h]

  a9 = a5;
  LOBYTE(a1) = a6;
  v10 = sub_1932B8E78(a1, a2, a3, a4);
  if ( v10 == -1 )
    return sub_1932B1570(a1: v11, a2: v12, a3: 543576, a4);
  if ( (_BYTE)v11 == 1 )
    result = sub_1932B8EBC(a1: v11, a2: v12, a3: (__int64)&a9, a4: v10, a5: 1, a6: v13, a7: v17);
  else
    result = sub_1932B9224(a1: v11, a2: v12, a3: (__int64)&a9, a4: v10, a5: 1, a6: v13, a7: v17);
  if ( (_DWORD)result == -1 )
    return sub_1932B1580(a1: v15, a2: v16, a3: 545216, a4);
  return result;
}
