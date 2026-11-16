// sub_18159C2A0
// rva 0x0159c2a0  size 540  section .text  group text
// window base 0x18159c2a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159C2A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
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
  unsigned int v22; // edx
  __int64 v23; // rbx
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
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 result; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // [rsp+0h] [rbp-58h] BYREF
  __int64 v44; // [rsp+8h] [rbp-50h]
  __int64 v45; // [rsp+10h] [rbp-48h]
  __int64 v46; // [rsp+18h] [rbp-40h]
  unsigned int v47; // [rsp+24h] [rbp-34h]
  unsigned int v48; // [rsp+28h] [rbp-30h]
  unsigned int v49; // [rsp+2Ch] [rbp-2Ch]
  __int64 v50; // [rsp+30h] [rbp-28h]
  int v51; // [rsp+38h] [rbp-20h]
  int v52; // [rsp+3Ch] [rbp-1Ch]
  __int64 v53; // [rsp+40h] [rbp-18h]
  __int64 v54; // [rsp+48h] [rbp-10h]
  __int64 v55; // [rsp+50h] [rbp-8h]

  if ( (unsigned __int64)&v43 <= *(_QWORD *)(v7 + 8) )
  {
    v52 = a2;
    v51 = a1;
    v50 = a6;
    v45 = a3;
    MEMORY[0x181EB83C0]();
    goto LABEL_18;
  }
  v55 = *(_QWORD *)(a6 + 16);
  v8 = *(_QWORD *)(v7 + 240);
  v54 = v8;
  v53 = *(_QWORD *)(v7 + 232);
  if ( a5 == v6 )
  {
LABEL_18:
    MEMORY[0x18276EFE0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18159C4C0();
  }
  v52 = a2;
  v51 = a1;
  v50 = a6;
  v46 = a5;
  v45 = a3;
  v44 = v6 + 376612120;
  v9 = MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4: v8, a5: v6 + 366596776);
  v13 = MEMORY[0x182084BC0](a1: v11, a2: v12, a3: v9, a4: v10, a5: v55);
  v17 = MEMORY[0x182084840](a1: v15, a2: v16, a3: v13, a4: v14, a5: v6 + 372666776);
  MEMORY[0x182084180](a1: v19, a2: v20, a3: v17, a4: v18, a5: 1);
  if ( v54 != 0 )
  {
    v21 = v55;
    v22 = v55 - v54;
    if ( (unsigned __int64)(v55 - v54) >= 0x20 )
      v22 = 32;
    v23 = v53;
  }
  else
  {
    v22 = 32;
    v23 = v53;
    v21 = v55;
  }
  if ( v23 != 0 )
  {
    if ( (unsigned __int64)(v23 - v21) < 0x200 )
      v49 = v23 - v21;
    else
      v49 = 512;
  }
  else
  {
    v49 = 128;
  }
  v48 = v22;
  v47 = v22 >> 3;
  MEMORY[0x182084120](a1: v22 >> 3, a2: 32, a3: v44, a4: v54, a5: v21 - (v22 & 0xFFFFFFF8), a6: 8);
  MEMORY[0x182084180](a1: v25, a2: v26, a3: v44, a4: v24, a5: 0);
  v30 = MEMORY[0x182084840](a1: v28, a2: v29, a3: v44, a4: v27, a5: v6 + 372402064);
  MEMORY[0x182084500](a1: v32, a2: v33, a3: v30, a4: v31, a5: 1);
  MEMORY[0x182084120](a1: v49 >> 3, a2: 32, a3: v44, a4: v34, a5: v55, a6: 8);
  MEMORY[0x182084180](a1: v36, a2: v37, a3: v44, a4: v35, a5: 0);
  result = MEMORY[0x1820841E0](a1: v38, a2: v39, a3: v44);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v41, a2: v42, a3: v48, a4: v49);
  return result;
}
