// sub_15B3FE0
// rva 0x015b3fe0  size 189  section .text  group text
// window base 0x1815b3fe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __noreturn sub_15B3FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // [rsp+0h] [rbp-28h]
  __int64 v28; // [rsp+8h] [rbp-20h]

  v28 = v6 + 376612880;
  sub_2084840(a1, a2, a3: v6 + 376612880, a4: v6 + 360728480, a5: v6 + 360728480);
  v10 = sub_2084BC0(a1: v8, a2: v9, a3: v6 + 376612880, a4: v7, a5);
  v14 = sub_2084840(a1: v12, a2: v13, a3: v10, a4: v11, a5: v6 + 372616008);
  v18 = sub_2084BC0(a1: v16, a2: v17, a3: v14, a4: v15, a5: a3);
  sub_2084840(a1: v20, a2: v21, a3: v18, a4: v19, a5: v6 + 372637744);
  if ( a6 == 0 )
    goto LABEL_4;
  sub_15AE1E0(a1: v23, a2: v24, a3: v28, a4: v22, a5: a6, a6: 1u, a7: v27, a8: v28, a9: a6, a10: a5);
  while ( 1 )
  {
    sub_28C1C40(a1: v25, a2: v26, a3: v6 + 368408352);
LABEL_4:
    sub_2084840(a1: v23, a2: v24, a3: v28, a4: v22, a5: v6 + 353301280);
  }
}
