// sub_1932A87FC
// rva 0x132a87fc  size 169  section .text  group text
// window base 0x1932a87fc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A87FC(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 **v10; // rdi
  __int64 *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 *v15; // rsi
  __int64 v16; // rax

  v4 = *a4;
  v6 = MEMORY[0x79AD0](a1, a2: a4 + 6, a3, a4: 40);
  if ( v6 == 0 )
  {
    sub_1932A85F8(a1: 0, a2: v8, a3: v7, a4: 8u);
    return 0;
  }
  sub_1932CA161(a1: v6, a2: v8, a3: 0, a4: v6, a5: 40);
  v11 = (__int64 *)(v10 + 1);
  *v10 = a4;
  v10[1] = (__int64 *)(v10 + 1);
  v10[2] = (__int64 *)(v10 + 1);
  if ( (int)sub_1932A7CD0(a1: (__int64)v10, a2: v12, a3: v10 + 3, a4: v4) < 0 )
  {
    MEMORY[0x79AE0](a1: v14, a2: v15, a3: v13, a4: v14);
    return 0;
  }
  v11[1] = (__int64)v15;
  v16 = *v15;
  *v11 = *v15;
  *(_QWORD *)(v16 + 8) = v11;
  *v15 = (__int64)v11;
  return v14;
}
