// sub_181599EA0
// rva 0x01599ea0  size 414  section .text  group text
// window base 0x181599ea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181599EA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
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
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 result; // rax
  __int64 v28; // rdx
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
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // [rsp+0h] [rbp-58h] BYREF
  __int64 v46; // [rsp+10h] [rbp-48h]
  __int64 v47; // [rsp+18h] [rbp-40h]
  __int64 v48; // [rsp+20h] [rbp-38h]
  unsigned int v49; // [rsp+2Ch] [rbp-2Ch]
  _QWORD *v50; // [rsp+30h] [rbp-28h]
  int v51; // [rsp+3Ch] [rbp-1Ch]
  __int64 v52; // [rsp+40h] [rbp-18h]
  __int64 v53; // [rsp+48h] [rbp-10h]
  unsigned int v54; // [rsp+54h] [rbp-4h]

  v54 = a2;
  if ( (unsigned __int64)&v45 <= *(_QWORD *)(v7 + 8) )
  {
    v51 = a1;
    v50 = a6;
    v47 = a3;
    MEMORY[0x181EB83C0]();
    goto LABEL_14;
  }
  v8 = a6[2];
  v9 = *a6;
  if ( a5 == v6 )
  {
LABEL_14:
    MEMORY[0x18276EFE0](a1, a2, a3, a4: v9);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_18159A040)();
  }
  v53 = *a6;
  v52 = v8;
  v51 = a1;
  v50 = a6;
  v48 = a5;
  v47 = a3;
  v46 = v6 + 376612120;
  v10 = MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4: v9, a5: v6 + 367047056);
  v14 = MEMORY[0x182084BC0](a1: v12, a2: v13, a3: v10, a4: v11, a5: v7);
  v18 = MEMORY[0x182084840](a1: v16, a2: v17, a3: v14, a4: v15, a5: v6 + 372989672);
  MEMORY[0x182084180](a1: v20, a2: v21, a3: v18, a4: v19, a5: 1);
  *(_DWORD *)(v6 + 376613252) = v54;
  *(_DWORD *)(v6 + 376613256) = 0;
  *(_QWORD *)(v6 + 376613240) = 0;
  *(_DWORD *)(v6 + 376613248) = -5;
  v23 = MEMORY[0x182774360](a1: v6 + 376613232, a2: v46, a3: v7, a4: v22, a5: v52, a6: v53);
  if ( v23 != 0 )
  {
    v49 = v23;
  }
  else
  {
    if ( (v52 & 0xF) != 0 )
    {
      v49 = 0;
      if ( (v52 & 7) == 0 )
      {
        MEMORY[0x1820841E0](a1: v25, a2: v26, a3: v46);
        v34 = MEMORY[0x182084840](a1: v32, a2: v33, a3: v46, a4: v31, a5: v6 + 366055848);
        v38 = MEMORY[0x182084560](a1: v36, a2: v37, a3: v34, a4: v35, a5: 16);
        v42 = MEMORY[0x182084840](a1: v40, a2: v41, a3: v38, a4: v39, a5: v6 + 372931816);
        MEMORY[0x1820841E0](a1: v43, a2: v44, a3: v42);
      }
    }
    else
    {
      v49 = 0;
    }
    sub_18159A040(a1: v25, a2: v26, a3: v46, a4: v24, a5: v54, a6: v52);
  }
  result = MEMORY[0x182084180](a1: v25, a2: v26, a3: v46, a4: v24, a5: 0);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v29, a2: v30, a3: v28, a4: v49);
  return result;
}
