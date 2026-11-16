// sub_1932B807C
// rva 0x132b807c  size 248  section .text  group text
// window base 0x1932b807c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B807C(_DWORD a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+0h] [rbp-100h] BYREF
  unsigned int *v19; // [rsp+20h] [rbp-E0h]
  int *v20; // [rsp+28h] [rbp-D8h]
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v25[44]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v26[32]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v27; // [rsp+120h] [rbp+20h]

  v24 = 0;
  v19 = (unsigned int *)&v24;
  if ( (unsigned int)MEMORY[0x79010](a1: 0, a2, a3: 533456, a4: -2147483646, a5: 0, a6: 131097) != 0 )
  {
    if ( (unsigned int)MEMORY[0x795B8](a1: v3, a2: v4, a3: v2, a4: v25) == -1 )
      JUMPOUT(0x326512138LL);
    v7 = v25[0];
  }
  else
  {
    v20 = &v21;
    v21 = 4;
    v19 = &v23;
    v22 = v3;
    if ( (unsigned int)MEMORY[0x79038](a1: v3, a2: v4, a3: 545136, a4: v24, a5: 0, a6: &v22) != 0 )
      JUMPOUT(0x32651211BLL);
    MEMORY[0x791C8](a1: v23, a2: v6, a3: v5, a4: v24);
  }
  sub_1932B7F74(a1: v7, a2: v8, a3: (__int64)v26, a4: v7);
  MEMORY[0x79CB8](a1: v10, a2: v11, a3: v9, a4: v26);
  return sub_1932C8DE0(a1: v13, a2: v14, a3: v12, a4: (unsigned __int64)&v18 ^ v27, a5: v15, a6: v16);
}
