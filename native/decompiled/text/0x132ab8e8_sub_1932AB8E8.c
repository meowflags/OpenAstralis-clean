// sub_1932AB8E8
// rva 0x132ab8e8  size 280  section .text  group text
// window base 0x1932ab8e8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932AB8E8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  _QWORD v32[7]; // [rsp+0h] [rbp-A1h] BYREF
  __int16 v33; // [rsp+38h] [rbp-69h]
  int *v34; // [rsp+40h] [rbp-61h]
  __int64 v35; // [rsp+48h] [rbp-59h]
  int v36; // [rsp+50h] [rbp-51h]
  int v37; // [rsp+58h] [rbp-49h]
  int v38; // [rsp+60h] [rbp-41h] BYREF
  __int64 v39; // [rsp+68h] [rbp-39h]
  __int64 v40; // [rsp+70h] [rbp-31h] BYREF
  __m128i v41; // [rsp+78h] [rbp-29h]
  _QWORD v42[4]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v43; // [rsp+B0h] [rbp+Fh]

  v38 = 255;
  v39 = 0;
  memset(v42, 0, sizeof(v42));
  v13 = MEMORY[0x79AD0](a1: a3, a2: a4, a3, a4: 68);
  v17 = v13;
  if ( v13 != 0 )
  {
    if ( a6 == nullptr )
    {
      v40 = 23;
      a6 = &v40;
      v41 = MEMORY[0x88FD8];
    }
    v37 = a11;
    v36 = 68;
    v35 = v13;
    v34 = &v38;
    v33 = 32;
    v32[6] = v42;
    v32[5] = a5;
    v32[4] = a6;
    MEMORY[0x79278](a1: v15, a2: v16, a3: 0, a4: v15, a5: 0, a6: 0);
    MEMORY[0x79AE0](a1: v26, a2: v27, a3: v25, a4: v17);
    MEMORY[0x79258](a1: v29, a2: v30, a3: v28, a4: v29);
  }
  else
  {
    MEMORY[0x79258](a1: v15, a2: v16, a3: v14, a4: v15);
    sub_1932AED0C(a1: v18, a2: v19, a3: 0xFFFFFFFFLL, a4: v19, a5: 537496);
  }
  return sub_1932C8DE0(a1: v21, a2: v22, a3: v20, a4: (unsigned __int64)v32 ^ v43, a5: v23, a6: v24);
}
