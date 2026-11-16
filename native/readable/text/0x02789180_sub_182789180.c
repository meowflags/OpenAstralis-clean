// sub_2789180
// rva 0x02789180  size 1222  section .text  group text
// window base 0x182789180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2789180(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __m128 v20; // xmm6
  __m128 v21; // xmm7
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rcx
  unsigned __int64 i; // r8
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rsi
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rsi
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rcx
  __int64 v77; // rdi
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rax
  __int64 v86; // r8
  char v88; // [rsp+0h] [rbp-268h] BYREF
  __int64 v89; // [rsp+10h] [rbp-258h]
  __int64 v90; // [rsp+18h] [rbp-250h]
  __int64 v91; // [rsp+20h] [rbp-248h]
  __int64 v92; // [rsp+28h] [rbp-240h]
  char v93; // [rsp+30h] [rbp-238h] BYREF
  int v94; // [rsp+244h] [rbp-24h]
  int v95; // [rsp+248h] [rbp-20h]
  unsigned int v96; // [rsp+24Ch] [rbp-1Ch]
  int v97; // [rsp+250h] [rbp-18h]
  int v98; // [rsp+254h] [rbp-14h]
  __int64 v99; // [rsp+258h] [rbp-10h]
  char *v100; // [rsp+260h] [rbp-8h]

  v92 = a3;
  if ( (unsigned __int64)&v88 <= *(_QWORD *)(v5 + 8) )
  {
    *(double *)v14.m128_u64 = sub_1EB84E0();
LABEL_36:
    v31 = sub_2770E80(
            a1: v10,
            a2: v11,
            a3: (unsigned int)v26,
            a4: v26,
            a5: v12,
            a6: v13,
            a7: v14,
            a8: v15,
            a9: v16,
            a10: v17,
            a11: v18,
            a12: v19,
            a13: v20,
            a14: v21,
            a15: v88);
LABEL_37:
    if ( v31 >= 1 )
      JUMPOUT(0x304ED25D9LL);
    v94 = 0;
    v47 = sub_28C1C40(a1: v33, a2: v34, a3: v4 + 361300432);
    goto LABEL_39;
  }
  v100 = &v93;
  v6 = sub_15A85E0(a1, a2, a3: v4 + 376669728, a4, a5: 0);
  v9 = sub_278B080(a1: v7, a2: v8, a3: v6);
  v99 = v9;
  if ( v9 != 0 )
  {
    v22 = sub_278B180(a1: v10, a2: v11, a3: v9);
    v25 = sub_4F9CAA0(a1: v23, a2: v24, a3: v22);
  }
  else
  {
    v25 = 0;
  }
  v98 = v25;
  v26 = (unsigned int)(v25 + 785);
  if ( (int)v26 < 0 )
    goto LABEL_36;
  v27 = *(_QWORD **)(v5 + 40);
  v28 = ((unsigned int)v26 + 19LL) & 0x1FFFFFFF8LL;
  if ( v28 >= 0x20000 || (unsigned __int64)v27 + v28 > *(_QWORD *)(v5 + 32) )
  {
    v91 = sub_1EAA840(a1: v10, a2: v11, a3: 34082368, a4: v26, a5: (unsigned int)v26);
  }
  else
  {
    *(_QWORD *)(v5 + 40) = (char *)v27 + v28;
    *v27 = 34082368;
    v27[1] = (unsigned int)v26;
    v29 = v28 - 16;
    if ( v28 - 16 >= 0x800 )
    {
      memset(v27 + 2, 0, v29);
      v10 = (__int64)v27 + v28;
      v29 = 0;
    }
    else
    {
      for ( i = 16; v28 > i; i += 8LL )
        v27[i / 8] = 0;
    }
    v91 = (__int64)v27;
  }
  v31 = sub_278AC00(a1: v10, a2: v11, a3: 0, a4: v29, a5: v100, a6: 260);
  v97 = v31;
  if ( v31 < 1 || (unsigned int)v31 >= 0x104 )
    goto LABEL_37;
  v35 = sub_27884C0(a1: v33, a2: v34, a3: (__int64)v100, a4: v32, a5: v31);
  v38 = *(_QWORD *)(v5 + 40);
  if ( (unsigned __int64)(v38 + 24) > *(_QWORD *)(v5 + 32) )
  {
    v90 = v35;
    v38 = sub_1EAA920(a1: v36, a2: v37, a3: 34085680);
    v35 = v90;
  }
  else
  {
    *(_QWORD *)(v5 + 40) = v38 + 24;
    *(_DWORD *)v38 = 34085680;
    *(_DWORD *)(v38 + 4) = 0;
    *(_QWORD *)(v38 + 8) = 0;
    *(_QWORD *)(v38 + 16) = 0;
  }
  v89 = v38;
  *(_DWORD *)(v38 + 4) = (unsigned __int64)(v91 - v4) >> 3;
  v90 = v35;
  sub_4F36A60(a1: v36, a2: v37, a3: v38, a4: v38, a5: v35);
  v39 = (unsigned int)*(char *)(v89 + 12);
  v40 = v4 + 8LL * *(unsigned int *)(v89 + 4);
  v96 = *(_DWORD *)(v89 + 8);
  v96 = sub_4FF77A0(a1: v4 + 365353144, a2: v96, a3: v40, a4: v41, a5: v39, a6: v96);
  sub_4F3CA40(a1: v43, a2: v44, a3: v89, a4: v42, a5: v96);
  v47 = sub_278AE20(a1: v45, a2: v46, a3: v100);
  v96 = v47;
  if ( v47 < 1 || (unsigned int)v47 >= 0x104 )
  {
LABEL_39:
    if ( v47 >= 1 )
      JUMPOUT(0x304ED2603LL);
    v94 = 0;
    v60 = sub_28C1C40(a1: v49, a2: v50, a3: v4 + 361300432);
LABEL_41:
    if ( v60 < 1 )
    {
      v94 = 0;
      sub_28C1C40(a1: v4 + 361300432, a2: v63, a3: v4 + 361300432);
      JUMPOUT(0x182789646LL);
    }
    JUMPOUT(0x304ED2631LL);
  }
  sub_4F35F80(a1: v49, a2: v50, a3: v89, a4: v48, a5: 59);
  v90 = sub_27884C0(a1: v52, a2: v53, a3: (__int64)v100, a4: v51, a5: v96);
  sub_4F36A60(a1: v55, a2: v56, a3: v89, a4: v54, a5: v90);
  v60 = sub_278AE60(a1: v58, a2: v59, a3: v100, a4: v57, a5: 260);
  v95 = v60;
  if ( v60 < 1 || (unsigned int)v60 >= 0x104 )
    goto LABEL_41;
  sub_4F35F80(a1: v62, a2: v63, a3: v89, a4: v61, a5: 59);
  v90 = sub_27884C0(a1: v65, a2: v66, a3: (__int64)v100, a4: v64, a5: v95);
  sub_4F36A60(a1: v68, a2: v69, a3: v89, a4: v67, a5: v90);
  if ( v99 != 0 )
  {
    sub_4F35F80(a1: v71, a2: v72, a3: v89, a4: v70, a5: 59);
    v90 = sub_27884C0(a1: v74, a2: v75, a3: v99, a4: v73, a5: v98);
    sub_4F36A60(a1: v77, a2: v78, a3: v89, a4: v76, a5: v90);
  }
  v79 = sub_4F36F80(a1: v71, a2: v72, a3: v89, a4: v70, a5: v4 + 372424872);
  v83 = v89;
  if ( *(_DWORD *)(v89 + 8) != 0 )
  {
    v84 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v84 + 24) > *(_QWORD *)(v5 + 32) )
    {
      v90 = v79;
      v84 = sub_1EAA920(a1: v81, a2: v82, a3: 34082680);
      v85 = v89;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v84 + 24;
      *(_DWORD *)v84 = 34082680;
      *(_DWORD *)(v84 + 4) = 0;
      *(_QWORD *)(v84 + 8) = 0;
      *(_QWORD *)(v84 + 16) = 0;
      v85 = v83;
    }
    v90 = v84;
    sub_4FE9280(a1: v81, a2: v82, a3: v84, a4: v80, a5: v85, a6: v4);
    v86 = v90;
  }
  else
  {
    v86 = v4 + 373281248;
  }
  if ( *(int *)(v5 + 16) <= 0 )
    sub_277F280(a1: v81, a2: v82, a3: v83, a4: v80);
  return v86;
}
