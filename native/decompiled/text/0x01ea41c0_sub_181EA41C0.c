// sub_181EA41C0
// rva 0x01ea41c0  size 255  section .text  group text
// window base 0x181ea41c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA41C0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
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
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 result; // rax
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // r8
  __int64 v49; // r9
  char v50; // [rsp+0h] [rbp-38h] BYREF
  __int64 v51; // [rsp+8h] [rbp-30h]
  __int64 v52; // [rsp+10h] [rbp-28h]
  __int64 v53; // [rsp+18h] [rbp-20h]
  __int64 v54; // [rsp+20h] [rbp-18h]
  __int64 v55; // [rsp+28h] [rbp-10h]
  int v56; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v50 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v50);
    __builtin_debugtrap();
    return sub_181EA42C0(a1: v46, a2: v47, a3: v44, a4: v45, a5: v48, a6: v49);
  }
  else
  {
    if ( (_DWORD)a2 != 0 )
      v8 = v6 + 350857936;
    else
      v8 = v6 + 373281248;
    v53 = v8;
    v56 = a2;
    v52 = a1;
    v55 = a6;
    v54 = a5;
    v51 = v6 + 376612120;
    v9 = MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4: v6 + 352678304, a5: v6 + 352678304);
    v13 = MEMORY[0x182084840](a1: v11, a2: v12, a3: v9, a4: v10, a5: v53);
    v17 = MEMORY[0x182084840](a1: v15, a2: v16, a3: v13, a4: v14, a5: v52);
    v21 = MEMORY[0x1820846E0](a1: v19, a2: v20, a3: v17, a4: v18, a5: 1);
    v25 = MEMORY[0x182084BC0](a1: v23, a2: v24, a3: v21, a4: v22, a5: v55);
    MEMORY[0x1820846E0](a1: v27, a2: v28, a3: v25, a4: v26, a5: 1);
    v32 = MEMORY[0x182084840](a1: v30, a2: v31, a3: v51, a4: v29, a5: v6 + 372682168);
    v36 = MEMORY[0x182084BC0](a1: v34, a2: v35, a3: v32, a4: v33, a5: v54);
    result = MEMORY[0x182084840](a1: v38, a2: v39, a3: v36, a4: v37, a5: v6 + 372674176);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v42, a2: v43, a3: v41, a4: v53);
  }
  return result;
}
