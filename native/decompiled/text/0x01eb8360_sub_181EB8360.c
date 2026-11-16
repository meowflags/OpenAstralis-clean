// sub_181EB8360
// rva 0x01eb8360  size 71  section .text  group text
// window base 0x181eb8360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181EB8360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  unsigned __int64 result; // rax
  int v7; // [rsp+10h] [rbp-8h]

  v7 = *(_DWORD *)(v5 + 320);
  result = (unsigned int)v7;
  *(_DWORD *)(v5 + 320) = a5;
  if ( a5 > v7 )
    return sub_181EB8240(a1, a2, a3: v7, a4, a5);
  if ( v7 > a5 )
    return sub_181EB82C0(a1, a2, a3: v7, a4, a5);
  return result;
}
