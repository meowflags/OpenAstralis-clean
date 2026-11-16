// sub_27737C0
// rva 0x027737c0  size 294  section .text  group text
// window base 0x1827737c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27737C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 result; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // [rsp+0h] [rbp-38h] BYREF
  __int64 v30; // [rsp+8h] [rbp-30h]
  __int64 v31; // [rsp+10h] [rbp-28h]
  __int64 v32; // [rsp+18h] [rbp-20h]
  __int64 v33; // [rsp+20h] [rbp-18h]
  __int64 v34; // [rsp+28h] [rbp-10h]
  __int64 v35; // [rsp+30h] [rbp-8h]

  v32 = a3;
  v31 = a5;
  v35 = a2;
  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v13 + 8) )
    return sub_1827738BB(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  v34 = a6;
  v33 = a1;
  sub_2773DA0(a1, a2, a3: a5, a4, a5: a6, a6: a1);
  if ( v31 == v12 )
    JUMPOUT(0x1827738CALL);
  v30 = v12 + 376612120;
  sub_2084840(a1: v14, a2: v15, a3: v12 + 376612120, a4: v12 + 372895576, a5: v12 + 372895576);
  if ( v35 < 0 )
  {
    v25 = sub_2084840(a1: v17, a2: v35, a3: v30, a4: v16, a5: v12 + 372400224);
    sub_20846E0(a1: v27, a2: v28, a3: v25, a4: v26, a5: 3);
    *(_QWORD *)(v32 + 8) = 0;
  }
  else
  {
    sub_2084620(a1: 1, a2: v35, a3: v30, a4: v16, a5: v35, a6: 4);
    *(_QWORD *)(v32 + 8) = v35 + v34;
  }
  result = sub_20846E0(a1: v19, a2: v20, a3: v30, a4: v18, a5: 2);
  v24 = v32;
  ++*(_DWORD *)(v32 + 24);
  if ( *(int *)(v13 + 16) <= 0 )
    return sub_277F280(a1: v22, a2: v23, a3: v24);
  return result;
}
