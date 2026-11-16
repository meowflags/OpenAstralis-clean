// sub_1E8C920
// rva 0x01e8c920  size 143  section .text  group text
// window base 0x181e8c920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E8C920(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // [rsp+24h] [rbp-4h]
  int v13; // [rsp+24h] [rbp-4h]

  v12 = sub_1EA7B00(a1, a2, a3: v2 + 376652784);
  for ( result = v12 | (unsigned int)sub_1E84FA0(a1: v4, a2: v5, a3: v2 + 376654168, a4: v3, a5: 0);
        (_DWORD)result != 0;
        result = v13 | (unsigned int)sub_1E84FA0(a1: v10, a2: v11, a3: v2 + 376654168, a4: v9, a5: 0) )
  {
    v13 = sub_1EA7B00(a1: v7, a2: v8, a3: v2 + 376652784);
  }
  return result;
}
