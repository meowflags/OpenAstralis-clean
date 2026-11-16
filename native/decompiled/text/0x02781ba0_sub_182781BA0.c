// sub_182781BA0
// rva 0x02781ba0  size 390  section .text  group text
// window base 0x182781ba0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182781BA0(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
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
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 result; // rax
  __int64 v66; // rdx
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // [rsp+0h] [rbp-38h] BYREF
  __int64 v70; // [rsp+10h] [rbp-28h]
  unsigned int v71; // [rsp+1Ch] [rbp-1Ch]
  __int64 v72; // [rsp+20h] [rbp-18h]
  __int64 v73; // [rsp+28h] [rbp-10h]
  int v74; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v69 <= *(_QWORD *)(v11 + 8) )
  {
    MEMORY[0x181EB83C0]();
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
    return sub_182781D40();
  }
  else
  {
    v73 = a3;
    v74 = a6;
    v12 = *(unsigned int *)(a3 + 4);
    v13 = v10 + 8 * v12;
    if ( (_DWORD)v12 != 0 )
    {
      v72 = v10 + 8 * v12;
      v71 = v12;
      v14 = *(_QWORD *)(a3 + 40);
      v70 = v10 + 376612120;
      v15 = MEMORY[0x1820843E0](a1: 3, a2, a3: v10 + 376612120, a4: v13, a5: v14, a6: 1000);
      v19 = MEMORY[0x182084840](a1: v17, a2: v18, a3: v15, a4: v16, a5: v10 + 352152176);
      v23 = MEMORY[0x1820846E0](a1: v21, a2: v22, a3: v19, a4: v20, a5: (unsigned int)(2 * *(_DWORD *)(v73 + 12)));
      MEMORY[0x182084840](a1: v25, a2: v26, a3: v23, a4: v24, a5: v10 + 8LL * *(unsigned int *)(v10 + 8LL * v71 + 4));
      if ( v74 != 0 )
      {
        v30 = MEMORY[0x182084840](a1: v28, a2: v29, a3: v70, a4: v27, a5: v10 + 373055288);
        MEMORY[0x182084840](a1: v32, a2: v33, a3: v30, a4: v31, a5: v10 + 8LL * *(unsigned int *)(v73 + 8));
      }
      v34 = MEMORY[0x182084840](a1: v28, a2: v29, a3: v70, a4: v27, a5: v10 + 372986752);
      v37 = MEMORY[0x182083E40](a1: v35, a2: v36, a3: v34, a4: v73, a5: *(unsigned __int8 *)(v73 + 48));
      v41 = MEMORY[0x182084840](a1: v39, a2: v40, a3: v37, a4: v38, a5: v10 + 372620264);
      v44 = MEMORY[0x182084BC0](a1: v42, a2: v43, a3: v41, a4: v73, a5: *(_QWORD *)(v73 + 16));
      v48 = MEMORY[0x182084840](a1: v46, a2: v47, a3: v44, a4: v45, a5: v10 + 372633336);
      v51 = MEMORY[0x182084BC0](a1: v49, a2: v50, a3: v48, a4: v73, a5: *(_QWORD *)(v73 + 24));
      v55 = MEMORY[0x182084840](a1: v53, a2: v54, a3: v51, a4: v52, a5: v10 + 372618136);
      v58 = MEMORY[0x182084A00](a1: v56, a2: v57, a3: v55, a4: v73, a5: *(_QWORD *)(v73 + 32));
      v62 = MEMORY[0x182084840](a1: v60, a2: v61, a3: v58, a4: v59, a5: v10 + 372674176);
      result = MEMORY[0x1820841E0](a1: v63, a2: v64, a3: v62);
      if ( *(int *)(v11 + 16) <= 0 )
        return sub_18277F280(a1: v67, a2: v68, a3: v66, a4: v72);
    }
    else
    {
      return sub_182781D08(a1, a2, a3, a4: v13, a5, a6, a7, a8, a9, a10);
    }
  }
  return result;
}
