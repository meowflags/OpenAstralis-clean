// sub_2773080
// rva 0x02773080  size 117  section .text  group text
// window base 0x182773080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_2773080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rax

  v6 = *(__int64 **)(a5 + 56);
  if ( v6 == nullptr || *(_DWORD *)(a5 + 324) == 2 )
    sub_2772F80(a1: 0, a2: 0, a3, a4, a5: 0, a6: 0);
  else
    sub_2772F80(a1: v6[1], a2: v6[3], a3, a4: v6[2], a5: v6[2], a6);
}
