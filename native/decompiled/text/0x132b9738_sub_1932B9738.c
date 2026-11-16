// sub_1932B9738
// rva 0x132b9738  size 116  section .text  group text
// window base 0x1932b9738: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B9738(_DWORD a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-38h]
  __int64 v14; // [rsp+8h] [rbp-30h]
  __int64 v15; // [rsp+10h] [rbp-28h]
  __int64 v16; // [rsp+18h] [rbp-20h]

  v5 = sub_1932B8AE0(a1: a3, a2, a3, a4);
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1824LL))(
             a1: v7,
             a2: v5,
             a3: v6,
             a4);
  if ( (_BYTE)result == 0 )
  {
    result = JNU_NewObjectByName(
               a1: v9,
               a2: v10,
               a3: 545272,
               a4,
               a5: 545232,
               a6: v9,
               a7: v13,
               a8: v14,
               a9: v15,
               a10: v16);
    if ( result != 0 )
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 104LL))(
               a1: v11,
               a2: v12,
               a3: result,
               a4);
  }
  return result;
}
