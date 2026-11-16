// sub_1932BEFBC
// rva 0x132befbc  size 427  section .text  group text
// window base 0x1932befbc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BEFBC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  _QWORD v20[43]; // [rsp+0h] [rbp-158h] BYREF

  v7 = (__int64 *)MEMORY[0x79AD8](a1: a5, a2: a3, a3: 168, a4: 1);
  if ( v7 != nullptr )
  {
    v12 = MEMORY[0x79CB8](a1: v8, a2: v9, a3: v6, a4);
    *v7 = v12;
    if ( v12 != 0 )
      sub_1932C8C70();
    MEMORY[0x79AE0](a1: v14, a2: v15, a3: v13, a4: *v7);
    MEMORY[0x79AE0](a1: v17, a2: v18, a3: v16, a4: v7);
  }
  return sub_1932C8DE0(a1: v8, a2: v9, a3: v6, a4: (unsigned __int64)v20 ^ v20[36], a5: v10, a6: v11);
}
