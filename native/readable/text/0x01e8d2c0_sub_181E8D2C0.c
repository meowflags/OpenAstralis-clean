// sub_1E8D2C0
// rva 0x01e8d2c0  size 1151  section .text  group text
// window base 0x181e8d2c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E8D2C0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
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
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // r8
  char v87; // [rsp+0h] [rbp-38h] BYREF
  __int64 v88; // [rsp+8h] [rbp-30h]
  __int64 v89; // [rsp+10h] [rbp-28h]
  __int64 v90; // [rsp+18h] [rbp-20h]
  __int64 v91; // [rsp+20h] [rbp-18h]
  __int64 v92; // [rsp+28h] [rbp-10h]
  __int64 v93; // [rsp+30h] [rbp-8h]

  v92 = a5;
  if ( (unsigned __int64)&v87 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v87);
LABEL_51:
    sub_276EFE0();
LABEL_52:
    sub_276EFE0();
LABEL_53:
    sub_276EAE0();
LABEL_54:
    sub_276EAE0();
LABEL_55:
    sub_276EFE0();
LABEL_56:
    sub_276EFE0();
LABEL_57:
    sub_276EFE0();
LABEL_58:
    sub_276EFE0();
LABEL_59:
    sub_276EAE0();
LABEL_60:
    sub_276EAE0();
LABEL_61:
    sub_276EAE0(a1, a2, a3: v81, a4: v11, a5: v92);
    __builtin_debugtrap();
    return sub_1E8D740(a1: v84, a2: v85, a3: v82, a4: v83, a5: v86);
  }
  v8 = *(unsigned int *)(v6 + 376656064);
  result = v6 + 35127280;
  if ( (_DWORD)v8 == 47076562 )
    v10 = v6 + 35127280;
  else
    v10 = v6 + 8 * v8;
  if ( v10 != v6 && *(_DWORD *)v10 >> 3 != 4261917 )
    goto LABEL_53;
  if ( v10 == v6 )
    goto LABEL_51;
  v11 = v6 + 376654936;
  v91 = v6 + 376652592;
  if ( *(_BYTE *)(v10 + 4) != 0 )
  {
    v89 = v6 + 35127280;
    v12 = *(_QWORD *)(v6 + 376656088);
    v13 = *(_QWORD *)(v6 + 376652832);
    v90 = v6 + 376654936;
    sub_1E8DF80(a1: v13, a2, a3: v11, a4: v11, a5: v6 + 370935816, a6: v12);
    v93 = *(_QWORD *)(v6 + 376656096);
    v88 = v6 + 366964088;
    v16 = sub_1E98300(a1: v14, a2: v15, a3: v91);
    sub_1E8DF80(a1: v16, a2: v18, a3: v90, a4: v17, a5: v88, a6: v93);
    v93 = *(_QWORD *)(v6 + 376656104);
    v88 = v6 + 368232200;
    v21 = sub_1E982C0(a1: v19, a2: v20, a3: v91);
    sub_1E8DF80(a1: v21, a2: v23, a3: v90, a4: v22, a5: v88, a6: v93);
    sub_1E8DF80(
      a1: *(_QWORD *)(v6 + 376656136) << 19,
      a2: v25,
      a3: v90,
      a4: v24,
      a5: v6 + 370540624,
      a6: *(_QWORD *)(v6 + 376656112));
    v26 = *(unsigned int *)(v6 + 376656168);
    if ( (_DWORD)v26 == 47076562 )
      v27 = v89;
    else
      v27 = v6 + 8 * v26;
    if ( v27 != v6 && *(_DWORD *)v27 >> 3 != 4261917 )
      goto LABEL_59;
    if ( v27 == v6 )
      goto LABEL_56;
    result = v6 + 376612880;
    if ( *(_BYTE *)(v27 + 4) != 0 )
    {
      v88 = v6 + 376612880;
      result = sub_1EA2060(a1, a2, a3: v6 + 376655136, a4: v11, a5: v6 + 376612880);
    }
    else
    {
      v88 = v6 + 376612880;
    }
    v28 = *(unsigned int *)(v6 + 376656200);
    if ( (_DWORD)v28 == 47076562 )
    {
      result = v89;
      v29 = v89;
    }
    else
    {
      v29 = v6 + 8 * v28;
    }
    if ( v29 != v6 && *(_DWORD *)v29 >> 3 != 4261917 )
      goto LABEL_60;
    if ( v29 == v6 )
      goto LABEL_57;
    if ( *(_BYTE *)(v29 + 4) != 0 )
      result = sub_1E9AC40(a1, a2, a3: v6 + 376613784, a4: v11, a5: v88, a6: 0);
  }
  else
  {
    v90 = v6 + 376654936;
    v89 = v6 + 35127280;
  }
  v30 = *(unsigned int *)(v6 + 376656232);
  if ( (_DWORD)v30 == 47076562 )
  {
    result = v89;
    v31 = v89;
  }
  else
  {
    v31 = v6 + 8 * v30;
  }
  if ( v31 != v6 )
  {
    result = *(_DWORD *)v31 >> 3;
    if ( (_DWORD)result != 4261917 )
      goto LABEL_54;
  }
  if ( v31 == v6 )
    goto LABEL_52;
  if ( *(_BYTE *)(v31 + 4) == 0 )
  {
    v80 = *(unsigned int *)(v6 + 376656064);
    if ( (_DWORD)v80 == 47076562 )
    {
      result = v89;
      v81 = v89;
    }
    else
    {
      v81 = v6 + 8 * v80;
    }
    if ( v81 != v6 )
    {
      result = *(_DWORD *)v81 >> 3;
      if ( (_DWORD)result != 4261917 )
        goto LABEL_61;
    }
    if ( v81 == v6 )
      goto LABEL_58;
    if ( *(_BYTE *)(v81 + 4) == 0 )
    {
LABEL_32:
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280();
      return result;
    }
  }
  if ( *(_BYTE *)(v6 + 376654992) != 0 )
    v32 = v6 + 370530392;
  else
    v32 = v6 + 369902360;
  v89 = v32;
  v33 = sub_1E8DD60(a1, a2, a3: v90);
  v37 = sub_2084840(a1: v35, a2: v36, a3: v33, a4: v34, a5: v6 + 367918920);
  v41 = sub_2084840(a1: v39, a2: v40, a3: v37, a4: v38, a5: v89);
  v45 = sub_2084840(a1: v43, a2: v44, a3: v41, a4: v42, a5: v6 + 372990000);
  if ( v92 != v6 )
  {
    v48 = sub_2084840(
            a1: v46,
            a2: v47,
            a3: v45,
            a4: v6 + 8LL * *(unsigned int *)(v92 + 4),
            a5: v6 + 8LL * *(unsigned int *)(v92 + 4));
    v52 = sub_2084840(a1: v50, a2: v51, a3: v48, a4: v49, a5: v6 + 372673352);
    v55 = sub_2084440(
            a1: 2,
            a2: v54,
            a3: v52,
            a4: v53,
            a5: *(_QWORD *)(v6 + 376656104) + *(_QWORD *)(v6 + 376656088) + *(_QWORD *)(v6 + 376656096),
            a6: 0x100000);
    v59 = sub_2084840(a1: v57, a2: v58, a3: v55, a4: v56, a5: v6 + 368955048);
    v60 = v91;
    v91 = v59;
    v63 = sub_1E98320(a1: v61, a2: v62, a3: v60);
    v66 = sub_2084440(a1: 2, a2: v65, a3: v91, a4: v64, a5: v63, a6: 0x100000);
    v70 = sub_2084840(a1: v68, a2: v69, a3: v66, a4: v67, a5: v6 + 368955216);
    v73 = sub_20843E0(a1: 3, a2: v72, a3: v70, a4: v71, a5: *(_QWORD *)(v6 + 376655728), a6: 1000000);
    v77 = sub_2084840(a1: v75, a2: v76, a3: v73, a4: v74, a5: v6 + 358610640);
    result = sub_20841E0(a1: v78, a2: v79, a3: v77);
    goto LABEL_32;
  }
  goto LABEL_55;
}
