// sub_1932B7C24
// rva 0x132b7c24  size 429  section .text  group text
// window base 0x1932b7c24: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B7C24(_DWORD a1, _DWORD a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v57; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v58; // [rsp+8h] [rbp-F8h]
  __int64 v59; // [rsp+10h] [rbp-F0h]
  __int64 v60; // [rsp+18h] [rbp-E8h]
  _BYTE v61[512]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v62[512]; // [rsp+230h] [rbp+130h] BYREF
  __int16 v63[256]; // [rsp+430h] [rbp+330h] BYREF
  __int64 v64; // [rsp+630h] [rbp+530h]

  sub_1932B7930(a1: a4, a2: a3, a3, a4, a5: 1, a6: 1, a7: v57, a8: v58, a9: v59, a10: v60, a11: (__int64)v61);
  sub_1932B7A64(a1: v4, a2: v5, a3: v5, a4: v4, a5: v63);
  v9 = MEMORY[0x79CB0](a1: v7, a2: v8, a3: v6, a4: v61);
  MEMORY[0x79C98](a1: v10, a2: v11, a3: 256 - v9, a4: v61, a5: v63);
  sub_1932B7930(
    a1: v12,
    a2: v13,
    a3: v13,
    a4: v12,
    a5: 1,
    a6: 0,
    a7: v57,
    a8: v58,
    a9: v59,
    a10: v60,
    a11: (__int64)v62);
  v17 = MEMORY[0x79CB0](a1: v15, a2: v16, a3: v14, a4: v61);
  MEMORY[0x79C98](a1: v18, a2: v19, a3: 256 - v17, a4: v61, a5: v62);
  v23 = MEMORY[0x79CB0](a1: v21, a2: v22, a3: v20, a4: v61);
  MEMORY[0x79C98](a1: v24, a2: v25, a3: 256 - v23, a4: v61, a5: 545080);
  sub_1932B7930(
    a1: v26,
    a2: v27,
    a3: v27,
    a4: v26,
    a5: 0,
    a6: 1,
    a7: v57,
    a8: v58,
    a9: v59,
    a10: v60,
    a11: (__int64)v62);
  v31 = MEMORY[0x79CB0](a1: v29, a2: v30, a3: v28, a4: v61);
  MEMORY[0x79C98](a1: v32, a2: v33, a3: 256 - v31, a4: v61, a5: v62);
  v37 = MEMORY[0x79CB0](a1: v35, a2: v36, a3: v34, a4: v61);
  MEMORY[0x79C98](a1: v38, a2: v39, a3: 256 - v37, a4: v61, a5: v63);
  sub_1932B7930(
    a1: v40,
    a2: v41,
    a3: v41,
    a4: v40,
    a5: 0,
    a6: 0,
    a7: v57,
    a8: v58,
    a9: v59,
    a10: v60,
    a11: (__int64)v62);
  v45 = MEMORY[0x79CB0](a1: v43, a2: v44, a3: v42, a4: v61);
  MEMORY[0x79C98](a1: v46, a2: v47, a3: 256 - v45, a4: v61, a5: v62);
  MEMORY[0x79C60](a1: v49, a2: v50, a3: v48, a4: v61);
  return sub_1932C8DE0(a1: v52, a2: v53, a3: v51, a4: (unsigned __int64)&v57 ^ v64, a5: v54, a6: v55);
}
