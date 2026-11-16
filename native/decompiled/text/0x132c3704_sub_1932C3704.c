// sub_1932C3704
// rva 0x132c3704  size 46  section .text  group text
// window base 0x1932c3704: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C3704(_DWORD a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v9; // esi
  int v10; // r8d
  int v11; // r9d

  v7 = sub_1932C3734(a1: a4, a2, a3, a4, a5, a6);
  if ( v7 == 0 )
    sub_1932C41F0(a1: v8, a2: v9, a3: v6, a4: *(_QWORD *)(v8 + 40), a5: v10, a6: v11);
  return v7;
}
