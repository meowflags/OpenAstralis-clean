// sub_1932A7DD4
// rva 0x132a7dd4  size 128  section .text  group text
// window base 0x1932a7dd4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A7DD4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbx
  int v9; // edx
  int v10; // edi
  int v11; // esi
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // edx
  int v24; // edi
  int v25; // esi
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v32; // [rsp+0h] [rbp-28h]
  __int64 v33; // [rsp+8h] [rbp-20h]

  a8 = v8;
  if ( (int)sub_1932A8620() < 0 )
    return 0;
  v15 = sub_1932A8E28(a1: v10, a2: v11, a3: v9, a4: (unsigned int)&a7, a5: v12, a6: v13);
  if ( v15 == 0 )
    return 0;
  MEMORY[0x79400](a1: v15, a2: v16, a3: v14, a4: 3372224);
  v19 = sub_1932A94B0(a1: v17, a2: v18, a3: v17 + 64, a4: 3372216, a5: a7);
  MEMORY[0x793F0](a1: v21, a2: v22, a3: v20, a4: 3372224);
  if ( v19 < 0 )
  {
    sub_1932A8D60(a1: v24, a2: v25, a3: v23, a4: v24, a5: v26, a6: v27, a7: v32, a8: v33);
    sub_1932A85F8(a1: v29, a2: v30, a3: v28, a4: 183);
    return 0;
  }
  return a7;
}
