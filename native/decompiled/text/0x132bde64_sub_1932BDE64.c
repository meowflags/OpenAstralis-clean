// sub_1932BDE64
// rva 0x132bde64  size 211  section .text  group text
// window base 0x1932bde64: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BDE64(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // [rsp+0h] [rbp-678h] BYREF
  _BYTE *v18; // [rsp+20h] [rbp-658h]
  _BYTE *v19; // [rsp+28h] [rbp-650h]
  __int64 v20; // [rsp+30h] [rbp-648h]
  _BYTE v21[512]; // [rsp+40h] [rbp-638h] BYREF
  _BYTE v22[1024]; // [rsp+240h] [rbp-438h] BYREF
  __int64 v23; // [rsp+640h] [rbp-38h]

  v20 = 0;
  LODWORD(v19) = 500;
  v21[0] = 0;
  v22[0] = 0;
  v18 = v21;
  if ( (unsigned int)MEMORY[0x79430](a1: a4, a2: a3, a3: 0, a4: 4096, a5: a6, a6: 0) == 0 )
    sub_1932CA27B(a1: v7, a2: v8, a3: 545504, a4: v21);
  v19 = v21;
  LODWORD(v18) = a6;
  sub_19329EDE0(a1: v7, a2: v8, a3: 1024, a4: (__int64)v22, a5: 545520);
  JNU_ThrowByName(a1: v9, a2: v10, a3: v10, a4: v9, a5: (__int64)v22);
  return sub_1932C8DE0(a1: v12, a2: v13, a3: v11, a4: (unsigned __int64)&v17 ^ v23, a5: v14, a6: v15);
}
