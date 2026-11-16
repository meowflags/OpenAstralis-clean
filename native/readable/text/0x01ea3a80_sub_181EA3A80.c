// sub_1EA3A80
// rva 0x01ea3a80  size 179  section .text  group text
// window base 0x181ea3a80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA3A80(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ecx

  v11 = *(_QWORD *)(v10 + 40);
  v12 = *(_QWORD *)(v10 + 32);
  if ( v11 != 0 )
  {
    if ( v12 != 0 )
      v13 = v12 - v11;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  *(_DWORD *)(a3 + 340) = *(_DWORD *)(v10 + 340) + v13;
  *(_QWORD *)(a3 + 200) = *(_QWORD *)(a3 + 160);
  return sub_181EA3AD1(a1, a2, a3, a4: v13, a5, a6, a7, a8, a9, a10);
}
