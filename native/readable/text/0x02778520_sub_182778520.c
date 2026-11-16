// sub_2778520
// rva 0x02778520  size 95  section .text  group text
// window base 0x182778520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2778520(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r14
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  char v18; // [rsp+0h] [rbp-38h]

  if ( a5 == v10 )
  {
    sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v18);
    __builtin_debugtrap();
    return sub_2778580(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7, a8, a9, a10);
  }
  else
  {
    sub_2839460(a1, a2, a3: a5 + 32, a4: a5 + 32, a5: a6, a6: (unsigned int)(8 * *(_DWORD *)(a5 + 8)));
    return *(_QWORD *)(a5 + 16);
  }
}
