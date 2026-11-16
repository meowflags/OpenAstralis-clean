// sub_159CD00
// rva 0x0159cd00  size 493  section .text  group text
// window base 0x18159cd00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159CD00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  _QWORD *v29; // rdx
  __int64 result; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // [rsp+0h] [rbp-48h] BYREF
  __int64 v60; // [rsp+10h] [rbp-38h]
  __int64 v61; // [rsp+18h] [rbp-30h]
  __int64 v62; // [rsp+20h] [rbp-28h]
  __int64 v63; // [rsp+28h] [rbp-20h]
  int v64; // [rsp+34h] [rbp-14h]
  __int64 v65; // [rsp+38h] [rbp-10h]
  _QWORD *v66; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v59 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB83C0();
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
    return sub_159CF00();
  }
  else
  {
    v63 = v5 + 376612120;
    v7 = *(_QWORD **)(a5 + 56);
    v66 = v7;
    if ( v7 != nullptr )
    {
      v65 = a5;
      v62 = v5 + 372121696;
      v8 = sub_2084840(a1, a2, a3: v5 + 376612120, a4: v7, a5: v5 + 372121696);
      v12 = sub_2084BC0(a1: v10, a2: v11, a3: v8, a4: v9, a5: v66);
      v61 = v5 + 372980800;
      v15 = sub_2084840(a1: v13, a2: v14, a3: v12, a4: v5 + 372980800, a5: v5 + 372980800);
      v18 = sub_2084BC0(a1: v16, a2: v17, a3: v15, a4: v66, a5: v66[2]);
      v60 = v5 + 372980848;
      v21 = sub_2084840(a1: v19, a2: v20, a3: v18, a4: v5 + 372980848, a5: v5 + 372980848);
      v24 = sub_2084BC0(a1: v22, a2: v23, a3: v21, a4: v66, a5: v66[1]);
      sub_20841E0(a1: v25, a2: v26, a3: v24);
      v29 = (_QWORD *)v66[3];
      for ( result = 1; ; result = (unsigned int)(v64 + 1) )
      {
        v52 = v63;
        v66 = v29;
        if ( v29 == nullptr )
        {
          v64 = result;
          goto LABEL_11;
        }
        if ( (int)result >= 1000 )
          break;
        v64 = result;
        v31 = sub_2084840(a1: v27, a2: v28, a3: v63, a4: v63, a5: v62);
        v35 = sub_2084BC0(a1: v33, a2: v34, a3: v31, a4: v32, a5: v66);
        v39 = sub_2084840(a1: v37, a2: v38, a3: v35, a4: v36, a5: v61);
        v42 = sub_2084BC0(a1: v40, a2: v41, a3: v39, a4: v66, a5: v66[2]);
        v46 = sub_2084840(a1: v44, a2: v45, a3: v42, a4: v43, a5: v60);
        v49 = sub_2084BC0(a1: v47, a2: v48, a3: v46, a4: v66, a5: v66[1]);
        sub_20841E0(a1: v50, a2: v51, a3: v49);
        v29 = (_QWORD *)v66[3];
      }
      v64 = result;
      v56 = sub_2084840(a1: v27, a2: v28, a3: v63, a4: v63, a5: v5 + 372583328);
      result = sub_20841E0(a1: v57, a2: v58, a3: v56);
LABEL_11:
      if ( *(int *)(v6 + 16) <= 0 )
        return sub_277F280(a1: v27, a2: v28, a3: v66, a4: v52);
    }
    else
    {
      v65 = a5;
      v53 = sub_2084840(a1, a2, a3: v63, a4: 0, a5: v5 + 368426608);
      result = sub_20841E0(a1: v54, a2: v55, a3: v53);
      if ( *(int *)(v6 + 16) <= 0 )
        return sub_277F280();
    }
  }
  return result;
}
