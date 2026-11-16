// sub_1E9A020
// rva 0x01e9a020  size 365  section .text  group text
// window base 0x181e9a020: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9A020(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 result; // rax
  char v65; // [rsp+0h] [rbp-38h] BYREF
  __int64 v66; // [rsp+10h] [rbp-28h]
  __int64 v67; // [rsp+18h] [rbp-20h]
  __int64 v68; // [rsp+20h] [rbp-18h]
  __int64 v69; // [rsp+28h] [rbp-10h]
  int v70; // [rsp+30h] [rbp-8h]
  int v71; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v65 <= *(_QWORD *)(v7 + 8) )
  {
    v71 = a2;
    v70 = a1;
    v69 = a6;
    v67 = a3;
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v65);
  }
  else if ( a5 != v6 )
  {
    v71 = a2;
    v70 = a1;
    v69 = a6;
    v68 = a5;
    v67 = a3;
    v66 = v6 + 376612120;
    v8 = sub_2084840(a1, a2, a3: v6 + 376612120, a4: v6 + 370216616, a5: v6 + 370216616);
    sub_2084180(a1: v10, a2: v11, a3: v8, a4: v9, a5: 1);
    v15 = sub_2084840(a1: v13, a2: v14, a3: v66, a4: v12, a5: v6 + 367619608);
    v18 = sub_2084220(a1: 0, a2: v17, a3: v15, a4: v16, a5: 7, a6: 2);
    sub_20841E0(a1: v19, a2: v20, a3: v18);
    v24 = sub_2084840(a1: v22, a2: v23, a3: v66, a4: v21, a5: v6 + 372227408);
    v28 = sub_2084A00(a1: v26, a2: v27, a3: v24, a4: v25, a5: 0x80000);
    sub_20841E0(a1: v29, a2: v30, a3: v28);
    v34 = sub_2084840(a1: v32, a2: v33, a3: v66, a4: v31, a5: v6 + 369205504);
    v38 = sub_2084A00(a1: v36, a2: v37, a3: v34, a4: v35, a5: 0x20000);
    sub_20841E0(a1: v39, a2: v40, a3: v38);
    v44 = sub_2084840(a1: v42, a2: v43, a3: v66, a4: v41, a5: v6 + 369902112);
    v48 = sub_20849A0(a1: v46, a2: v47, a3: v44, a4: v45, a5: *(_QWORD *)(v6 + 376652704));
    sub_20841E0(a1: v49, a2: v50, a3: v48);
    v54 = sub_2084840(a1: v52, a2: v53, a3: v66, a4: v51, a5: v6 + 371380200);
    v58 = sub_20849A0(a1: v56, a2: v57, a3: v54, a4: v55, a5: *(_QWORD *)(v6 + 376652720));
    sub_20841E0(a1: v59, a2: v60, a3: v58);
    result = sub_2084180(a1: v62, a2: v63, a3: v66, a4: v61, a5: 0);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_276EFE0();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_1E9A1A0();
}
