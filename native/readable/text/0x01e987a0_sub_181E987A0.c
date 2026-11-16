// sub_1E987A0
// rva 0x01e987a0  size 189  section .text  group text
// window base 0x181e987a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E987A0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
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
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 result; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rsi
  double v34; // xmm0_8
  char v35; // [rsp+0h] [rbp-28h] BYREF
  __int64 v36; // [rsp+10h] [rbp-18h]
  __int64 v37; // [rsp+18h] [rbp-10h]
  int v38; // [rsp+24h] [rbp-4h]

  v8 = v6 + 376612120;
  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v7 + 8) )
  {
    v34 = sub_1EB83C0(a1, a2, a3: v8, a4, a5, a6, a7: v35);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1E98860(a1: v34);
  }
  else
  {
    if ( a6 != 0 )
      v9 = v6 + 350857936;
    else
      v9 = v6 + 373281248;
    v36 = v9;
    v38 = a6;
    v37 = a5;
    v10 = sub_2084840(a1, a2, a3: v8, a4: v6 + 352678304, a5: v6 + 352678304);
    v14 = sub_2084840(a1: v12, a2: v13, a3: v10, a4: v11, a5: v36);
    v18 = sub_2084840(a1: v16, a2: v17, a3: v14, a4: v15, a5: v6 + 361206136);
    v22 = sub_20846E0(a1: v20, a2: v21, a3: v18, a4: v19, a5: 1);
    v26 = sub_2084BC0(a1: v24, a2: v25, a3: v22, a4: v23, a5: v37);
    result = sub_20846E0(a1: v28, a2: v29, a3: v26, a4: v27, a5: 1);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v32, a2: v33, a3: v31, a4: v36);
  }
  return result;
}
