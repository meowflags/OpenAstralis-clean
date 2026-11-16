// sub_1E99CE0
// rva 0x01e99ce0  size 742  section .text  group text
// window base 0x181e99ce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E99CE0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
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
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // rsi
  __int64 result; // rax
  char v95; // [rsp+0h] [rbp-58h] BYREF
  __int64 v96; // [rsp+10h] [rbp-48h]
  __int64 v97; // [rsp+18h] [rbp-40h]
  __int64 v98; // [rsp+20h] [rbp-38h]
  __int64 v99; // [rsp+28h] [rbp-30h]
  __int64 v100; // [rsp+30h] [rbp-28h]
  __int64 v101; // [rsp+38h] [rbp-20h]
  unsigned int v102; // [rsp+44h] [rbp-14h]
  __int64 v103; // [rsp+48h] [rbp-10h]
  unsigned int v104; // [rsp+50h] [rbp-8h]
  unsigned int v105; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)&v95 <= *(_QWORD *)(v8 + 8) )
  {
    v105 = a2;
    v104 = a1;
    v103 = a6;
    v99 = a5;
    v100 = a3;
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v95);
    goto LABEL_9;
  }
  v102 = *(_DWORD *)(v7 + 376654972);
  v9 = v7 + 8LL * v102;
  if ( a5 == v7 )
  {
LABEL_9:
    v101 = v9;
    v105 = a2;
    v104 = a1;
    v103 = a6;
    v100 = a3;
    sub_276EFE0();
    goto LABEL_10;
  }
  v101 = v7 + 8LL * v102;
  v105 = a2;
  v104 = a1;
  v103 = a6;
  v99 = a5;
  v100 = a3;
  v98 = v7 + 376612120;
  v10 = sub_2084840(a1, a2, a3: v7 + 376612120, a4: v9, a5: v7 + 370500320);
  sub_2084180(a1: v12, a2: v13, a3: v10, a4: v11, a5: 1);
  v17 = sub_2084840(a1: v15, a2: v16, a3: v98, a4: v14, a5: v7 + 368525672);
  if ( v102 == 0 )
  {
LABEL_10:
    sub_276EFE0();
    goto LABEL_11;
  }
  v18 = *(_DWORD *)(v7 + 8LL * v102) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v7
                                   + 8LL * *(unsigned int *)(v7 + 8 * v18 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v7 + 8 * v18 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v18 + 44))))
                                   + 12) != 519 )
  {
LABEL_11:
    sub_276EDE0();
    goto LABEL_12;
  }
  v97 = v17;
  v19 = *(_DWORD *)(v7 + 8LL * v102) >> 3;
  v20 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v19 + 20);
  v21 = *(_DWORD *)(v7 + 8 * v19 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v19 + 44)));
  v22 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v6
                                                           + *(_QWORD *)(v7
                                                                       + 8 * v19
                                                                       + HIWORD(*(_DWORD *)(v20 + 4 * v21 + 12))
                                                                       + 96)))(
          a1: v21,
          a2: v20,
          a3: v101);
  v26 = sub_2084840(a1: v24, a2: v25, a3: v97, a4: v23, a5: v22);
  sub_20841E0(a1: v27, a2: v28, a3: v26);
  v32 = sub_2084840(a1: v30, a2: v31, a3: v98, a4: v29, a5: v7 + 368776768);
  v33 = *(unsigned int *)(v7 + 8LL * v102 + 8);
  if ( (_DWORD)v33 == 0 )
  {
LABEL_12:
    sub_276EFE0(a1: v104, a2: v105, a3: v100, a4: v101, a5: v99, a6: v103);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1E99FE0();
  }
  v97 = v32;
  v96 = v7 + 8 * v33;
  v34 = sub_1E9F540();
  v38 = sub_2084A00(a1: v36, a2: v37, a3: v97, a4: v35, a5: v34);
  sub_20841E0(a1: v39, a2: v40, a3: v38);
  v97 = sub_2084840(a1: v42, a2: v43, a3: v98, a4: v41, a5: v7 + 368776488);
  v46 = sub_1E9F5A0(a1: v44, a2: v45, a3: v96);
  v50 = sub_2084A00(a1: v48, a2: v49, a3: v97, a4: v47, a5: v46);
  sub_20841E0(a1: v51, a2: v52, a3: v50);
  v97 = sub_2084840(a1: v54, a2: v55, a3: v98, a4: v53, a5: v7 + 368776432);
  v58 = sub_1E9F5C0(a1: v56, a2: v57, a3: v96);
  v62 = sub_2084A00(a1: v60, a2: v61, a3: v97, a4: v59, a5: v58);
  sub_20841E0(a1: v63, a2: v64, a3: v62);
  v97 = sub_2084840(a1: v66, a2: v67, a3: v98, a4: v65, a5: v7 + 368776544);
  v70 = sub_1E9F580(a1: v68, a2: v69, a3: v96);
  v74 = sub_2084A00(a1: v72, a2: v73, a3: v97, a4: v71, a5: v70);
  sub_20841E0(a1: v75, a2: v76, a3: v74);
  v80 = sub_2084840(a1: v78, a2: v79, a3: v98, a4: v77, a5: v7 + 368776656);
  v81 = v96;
  v96 = v80;
  v84 = sub_1E9F560(a1: v82, a2: v83, a3: v81);
  v88 = sub_2084A00(a1: v86, a2: v87, a3: v96, a4: v85, a5: v84);
  sub_20841E0(a1: v89, a2: v90, a3: v88);
  result = sub_2084180(a1: v92, a2: v93, a3: v98, a4: v91, a5: 0);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
