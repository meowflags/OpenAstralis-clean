// sub_15AE380
// rva 0x015ae380  size 545  section .text  group text
// window base 0x1815ae380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15AE380(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 result; // rax
  __int64 v56; // [rsp+0h] [rbp-48h] BYREF
  __int64 v57; // [rsp+10h] [rbp-38h]
  __int64 v58; // [rsp+18h] [rbp-30h]
  __int64 v59; // [rsp+20h] [rbp-28h]
  __int64 v60; // [rsp+28h] [rbp-20h]
  __int64 v61; // [rsp+30h] [rbp-18h]
  unsigned int v62; // [rsp+3Ch] [rbp-Ch]
  __int64 v63; // [rsp+40h] [rbp-8h]

  v63 = a5;
  v62 = a6;
  v59 = a1;
  if ( (unsigned __int64)&v56 <= *(_QWORD *)(v10 + 8) )
  {
    sub_1EB83C0(a1, a2, a3: a9);
    __halt();
  }
  v61 = a4;
  v60 = a2;
  v58 = v9 + 376612880;
  v11 = sub_2084840(a1, a2, a3: v9 + 376612880, a4, a5: v9 + 371394920);
  v15 = sub_2084BC0(a1: v13, a2: v14, a3: v11, a4: v12, a5: v63);
  v57 = v9 + 372985272;
  v18 = sub_2084840(a1: v16, a2: v17, a3: v15, a4: v9 + 372985272, a5: v9 + 372985272);
  v21 = sub_2084BC0(a1: v19, a2: v20, a3: v18, a4: v63 + 229, a5: v63 + 229);
  v25 = sub_2084840(a1: v23, a2: v24, a3: v21, a4: v22, a5: v9 + 372667848);
  if ( v62 <= 6 )
    __asm { jmp     rdx; switch jump }
  sub_2084840(a1: v27, a2: v28, a3: v25, a4: v26, a5: v9 + 360863240);
  v31 = v59;
  if ( v59 != v9 )
  {
    v32 = sub_2084840(a1: v59, a2: v30, a3: v58, a4: v29, a5: v57);
    sub_2084840(a1: v34, a2: v35, a3: v32, a4: v33, a5: v59);
  }
  v36 = sub_2084840(a1: v31, a2: v30, a3: v58, a4: v29, a5: v9 + 372627352);
  v40 = sub_2084BC0(a1: v38, a2: v39, a3: v36, a4: v37, a5: v60);
  v44 = sub_2084840(a1: v42, a2: v43, a3: v40, a4: v41, a5: v57);
  v48 = sub_2084BC0(a1: v46, a2: v47, a3: v44, a4: v45, a5: v61);
  sub_2084840(a1: v50, a2: v51, a3: v48, a4: v49, a5: v9 + 372674176);
  result = sub_2084840(a1: v53, a2: v54, a3: v58, a4: v52, a5: v9 + 372627832);
  if ( *(int *)(v10 + 16) <= 0 )
    return sub_277F280();
  return result;
}
