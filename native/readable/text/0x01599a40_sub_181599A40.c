// sub_1599A40
// rva 0x01599a40  size 461  section .text  group text
// window base 0x181599a40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1599A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // rcx
  __int64 v89; // rdi
  __int64 v90; // rsi
  __int64 result; // rax
  __int64 v92; // [rsp+0h] [rbp-38h] BYREF
  __int64 v93; // [rsp+10h] [rbp-28h]
  __int64 v94; // [rsp+18h] [rbp-20h]
  __int64 v95; // [rsp+20h] [rbp-18h]
  __int64 v96; // [rsp+28h] [rbp-10h]
  int v97; // [rsp+30h] [rbp-8h]
  int v98; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v92 <= *(_QWORD *)(v7 + 8) )
  {
    v98 = a2;
    v97 = a1;
    v96 = a6;
    v94 = a3;
    sub_1EB83C0();
  }
  else if ( a5 != v6 )
  {
    v98 = a2;
    v97 = a1;
    v96 = a6;
    v95 = a5;
    v94 = a3;
    v93 = v6 + 376612120;
    v8 = sub_2084840(a1, a2, a3: v6 + 376612120, a4: v6 + 371689544, a5: v6 + 371689544);
    sub_2084180(a1: v10, a2: v11, a3: v8, a4: v9, a5: 1);
    v15 = sub_2084840(a1: v13, a2: v14, a3: v93, a4: v12, a5: v6 + 366187704);
    v19 = sub_2084840(a1: v17, a2: v18, a3: v15, a4: v16, a5: v6 + 57669056);
    v23 = sub_2084840(a1: v21, a2: v22, a3: v19, a4: v20, a5: v6 + 372643648);
    v27 = sub_2084840(a1: v25, a2: v26, a3: v23, a4: v24, a5: v6 + 57669080);
    sub_20841E0(a1: v28, a2: v29, a3: v27);
    v33 = sub_2084840(a1: v31, a2: v32, a3: v93, a4: v30, a5: v6 + 367854448);
    v37 = sub_2084840(a1: v35, a2: v36, a3: v33, a4: v34, a5: v6 + 350588200);
    v41 = sub_2084840(a1: v39, a2: v40, a3: v37, a4: v38, a5: v6 + 372574352);
    v45 = sub_2084840(a1: v43, a2: v44, a3: v41, a4: v42, a5: v6 + 365179232);
    sub_20841E0(a1: v46, a2: v47, a3: v45);
    v51 = sub_2084840(a1: v49, a2: v50, a3: v93, a4: v48, a5: v6 + 367980168);
    v55 = sub_2084940(a1: v53, a2: v54, a3: v51, a4: v52, a5: 0x10000);
    sub_20841E0(a1: v56, a2: v57, a3: v55);
    v61 = sub_2084840(a1: v59, a2: v60, a3: v93, a4: v58, a5: v6 + 371367064);
    v65 = sub_2083E40(a1: v63, a2: v64, a3: v61, a4: v62, a5: 0);
    sub_20841E0(a1: v66, a2: v67, a3: v65);
    v71 = sub_2084840(a1: v69, a2: v70, a3: v93, a4: v68, a5: v6 + 368272112);
    v75 = sub_2084560(a1: v73, a2: v74, a3: v71, a4: v72, a5: 4);
    sub_20841E0(a1: v76, a2: v77, a3: v75);
    v81 = sub_2084840(a1: v79, a2: v80, a3: v93, a4: v78, a5: v6 + 371590456);
    v85 = sub_2084840(a1: v83, a2: v84, a3: v81, a4: v82, a5: v6 + 57669456);
    sub_20841E0(a1: v86, a2: v87, a3: v85);
    result = sub_2084180(a1: v89, a2: v90, a3: v93, a4: v88, a5: 0);
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
  return sub_1599C20();
}
