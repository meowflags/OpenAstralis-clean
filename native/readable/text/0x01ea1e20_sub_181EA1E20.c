// sub_1EA1E20
// rva 0x01ea1e20  size 319  section .text  group text
// window base 0x181ea1e20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA1E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  char v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+10h] [rbp-18h]
  __int64 v25; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
  {
    v25 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v23);
  }
  else
  {
    if ( v6 + (a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      JUMPOUT(0x303D2BE3FLL);
    v8 = v6;
  }
  v25 = a3;
  sub_2771080(a1, a2, a3, a4, a5: v8);
  v24 = v9;
  v25 = v10;
  sub_276FC00(a1: v12, a2: v13, a3: v9, a4: v11, a5: v6 + 34096120);
  sub_2771080();
  sub_2770780(a1: v15, a2: v16, a3: v25, a4: v14, a5: v24);
  __builtin_debugtrap();
  return sub_1EA1F60(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21);
}
