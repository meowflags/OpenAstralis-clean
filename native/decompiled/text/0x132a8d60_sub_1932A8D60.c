// sub_1932A8D60
// rva 0x132a8d60  size 199  section .text  group text
// window base 0x1932a8d60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A8D60(_DWORD a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD a5, int a6)
{
  __int64 v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  _QWORD *v10; // rsi
  _QWORD *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi

  v6 = a4[1];
  v7 = a4;
  while ( v6 != 0 )
  {
    sub_1932A9114(a1: (_DWORD)v7, a2, a3: v6 - 64, a4: (_DWORD)v7, a5: 1, a6);
    v6 = v7[1];
  }
  v8 = v7 + 4;
  while ( (_QWORD *)*v8 != v8 )
  {
    a3 = v8[1];
    if ( a3 == 0 )
      break;
    sub_1932A9114(a1: (_DWORD)v7, a2, a3: a3 - 48, a4: (_DWORD)v7, a5: 1, a6);
  }
  v9 = v7 + 6;
  while ( (_QWORD *)*v9 != v9 )
  {
    a2 = v9[1];
    if ( a2 == 0 )
      break;
    MEMORY[0x797C8](a1: v7, a2, a3, a4: *(_QWORD *)(a2 + 16));
    *(_QWORD *)(*v10 + 8LL) = v10[1];
    v11 = (_QWORD *)v10[1];
    *v11 = *v10;
    *v10 = v10;
    v10[1] = v10;
    MEMORY[0x79AE0](a1: v12, a2: v10, a3: v11, a4: v10 - 1);
  }
  MEMORY[0x797A8](a1: v7, a2, a3, a4: v7 + 14);
  MEMORY[0x79AE0](a1: v14, a2: v15, a3: v13, a4: v14);
  return 0;
}
