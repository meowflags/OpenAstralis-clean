// sub_132B8E48
// rva 0x132b8e48  size 48  section .text  group text
// window base 0x1932b8e48: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B8E48(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  int v7; // ebx

  v6 = 0;
  v7 = a4;
  if ( a3 != 0 )
    v6 = (*(__int64 (**)(void))(*(_QWORD *)a4 + 760LL))();
  return sub_132B9260(a1, a2, a3: v6, a4: v7, a5: 0, a6);
}
