// sub_27832E0
// rva 0x027832e0  size 331  section .text  group text
// window base 0x1827832e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27832E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v23; // [rsp+38h] [rbp-20h]

  if ( a5 == v6 )
  {
    sub_2780F80();
    *(_DWORD *)(v6 + 336) |= 4u;
  }
  sub_27839C0(a1, a2, a3: a5);
  sub_277A280(a1: v8, a2: v9, a3: a5, a4: v7, a5: v10, a6: v11);
  sub_1EA4400(a1: v12, a2: v13, a3: a5);
  v16 = a5;
  v17 = *(_QWORD *)(a5 + 216);
  if ( *(_BYTE *)(a5 + 248) != 0 )
  {
    v18 = __atomic_exchange_n((volatile __int64 *)(v5 + 376658480), v17, __ATOMIC_SEQ_CST);
    v23 = v18;
  }
  else
  {
    MEMORY[0x10e44f48]/* 0x10e44f48 */(a1: v14, a2: v15, a3: v17, a4: v17);
    v23 = 0;
    v16 = a5;
  }
  if ( v16 == v6 )
    sub_2781380(a1: v14, a2: v15);
  if ( v23 != 0 )
    sub_278A140(a1: v14, a2: v15, a3, a4: v18, a5: v23);
  MEMORY[0x10e445c0]/* 0x10e445c0 */(a1: v14, a2: v15, a3: v17, a4: a5 + 80);
  return MEMORY[0x10e45030]/* 0x10e45030 */(a1: v19, a2: v20, a3: *(_QWORD *)(a5 + 264), a4: *(_QWORD *)(a5 + 264));
}
