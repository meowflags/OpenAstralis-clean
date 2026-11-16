// sub_18502E460
// rva 0x0502e460  size 1360  section .text  group text
// window base 0x18502e460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502E460(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  BOOL v18; // edx
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rsi
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  signed __int64 v29; // rdx
  __int64 result; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r11
  int v38; // [rsp+0h] [rbp-58h] BYREF
  __int64 v39; // [rsp+10h] [rbp-48h]
  unsigned int *v40; // [rsp+18h] [rbp-40h]
  __int64 v41; // [rsp+20h] [rbp-38h]
  __int64 v42; // [rsp+28h] [rbp-30h]
  __int64 v43; // [rsp+30h] [rbp-28h]
  unsigned int *v44; // [rsp+38h] [rbp-20h]
  unsigned int v45; // [rsp+40h] [rbp-18h]
  unsigned int v46; // [rsp+44h] [rbp-14h]
  unsigned int v47; // [rsp+48h] [rbp-10h]
  unsigned int v48; // [rsp+4Ch] [rbp-Ch]
  __int64 v49; // [rsp+50h] [rbp-8h]

  v44 = (unsigned int *)a3;
  v43 = a5;
  v42 = a2;
  v49 = a4;
  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v8 + 8) )
  {
    v48 = a1;
    v41 = a6;
    MEMORY[0x181EB84E0]();
    goto LABEL_57;
  }
  *(_DWORD *)(a3 + 20) = 0;
  *(_DWORD *)(a3 + 72) = 0;
  v9 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v9 + 16) > *(_QWORD *)(v8 + 32) )
  {
    v48 = a1;
    v41 = a6;
    v9 = MEMORY[0x181EAA920](a1, a2, a3: 34085496);
    LODWORD(a4) = v49;
    a2 = v42;
    a1 = v48;
    a6 = v41;
    LODWORD(a5) = v43;
    a3 = (unsigned __int64)v44;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v9 + 16;
    *(_DWORD *)v9 = 34085496;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
  }
  *(_DWORD *)(a3 + 28) = (unsigned __int64)(v9 - v7) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v33 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v33) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v33) >> 9) + 0x38) = 0;
  }
  v10 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v10 + 40) > *(_QWORD *)(v8 + 32) )
  {
    v48 = a1;
    v41 = a6;
    v10 = MEMORY[0x181EAA920](a1, a2, a3: 36590208);
    LODWORD(a4) = v49;
    a2 = v42;
    a1 = v48;
    a6 = v41;
    LODWORD(a5) = v43;
    a3 = (unsigned __int64)v44;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v10 + 40;
    *(_DWORD *)v10 = 36590208;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 32) = 0;
  }
  *(_DWORD *)(a3 + 64) = (unsigned __int64)(v10 - v7) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v35 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v35) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v35) >> 9) + 0x38) = 0;
  }
  if ( a6 == v7 )
  {
    v48 = a1;
    v41 = a6;
    v11 = sub_18502F180(a1, a2, a3, a4, a5, a6, a7: v38);
    a3 = (unsigned __int64)v44;
  }
  else
  {
    v11 = a6;
    v48 = a1;
    v41 = a6;
  }
  *(_DWORD *)(a3 + 4) = (unsigned __int64)(v11 - v7) >> 3;
  __faststorefence();
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v34 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v34) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v34) >> 9) + 0x38) = 0;
  }
  v12 = *(unsigned int *)(v8 + 72);
  if ( (_DWORD)v12 != 0 )
  {
    v13 = *(unsigned int *)(v7 + 8 * v12 + 72);
    if ( (_DWORD)v13 != 0 )
      v14 = (unsigned int *)(v7 + 8 * v13);
    else
      v14 = (unsigned int *)(v7 + 8 * v12);
  }
  else
  {
    v14 = (unsigned int *)v7;
  }
  v15 = v43;
  v40 = v14;
  if ( (v48 & 4) != 0 )
    JUMPOUT(0x30A049598LL);
  v6 = 1;
  if ( v43 != v7 )
  {
    v16 = v43;
    v47 = 1;
    goto LABEL_17;
  }
  if ( v14 == (unsigned int *)v7 )
  {
LABEL_57:
    v47 = v6;
    v16 = MEMORY[0x182771080](a1, a2, a3, a4: v14, a5: v15);
LABEL_58:
    v39 = v16;
    v16 = MEMORY[0x182771080](a1, a2, a3, a4: v14, a5: v15);
    goto LABEL_59;
  }
  v47 = 1;
  v16 = sub_18502F540(a1, a2, a3: v14);
  v14 = v40;
LABEL_17:
  if ( v14 == v44 )
  {
    v20 = 0;
    LODWORD(v19) = 5;
    goto LABEL_25;
  }
  if ( v14 == (unsigned int *)v7 )
    goto LABEL_58;
  v17 = *v14 >> 3;
  v18 = *(__int16 *)(v7 + 8 * v17 + 62) >= 3
     && *(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v17 + 16) + 20) == 70129;
  if ( v18 )
  {
    v19 = 5;
    goto LABEL_23;
  }
  v31 = v14[3];
  if ( (_DWORD)v31 == 0 )
  {
LABEL_59:
    v39 = v16;
    MEMORY[0x182771080]();
    goto LABEL_60;
  }
  v19 = *(unsigned int *)(v7 + 8 * v31 + 24);
LABEL_23:
  if ( !v18 )
  {
    v32 = v14[3];
    if ( (_DWORD)v32 != 0 )
    {
      v20 = *(unsigned __int8 *)(v7 + 8 * v32 + 32);
      goto LABEL_25;
    }
LABEL_60:
    MEMORY[0x182771080](a1: v47, a2: v42, a3: v44, a4: v14, a5: v19, a6: v41);
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
    return sub_18502E9C0();
  }
  v20 = 1;
LABEL_25:
  v21 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v21 + 48) > *(_QWORD *)(v8 + 32) )
  {
    v46 = v20;
    v45 = v19;
    v39 = v16;
    v21 = MEMORY[0x181EAA920](a1, a2, a3: 36590096);
    v20 = v46;
    LODWORD(v19) = v45;
    v16 = v39;
    v14 = v40;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v21 + 48;
    *(_DWORD *)v21 = 36590096;
    *(_DWORD *)(v21 + 4) = 0;
    *(_QWORD *)(v21 + 8) = 0;
    *(_QWORD *)(v21 + 16) = 0;
    *(_QWORD *)(v21 + 24) = 0;
    *(_QWORD *)(v21 + 32) = 0;
    *(_QWORD *)(v21 + 40) = 0;
  }
  v22 = v49;
  v23 = v42;
  v24 = (unsigned __int64)v44;
  *(_BYTE *)(v21 + 32) = v20;
  *(_DWORD *)(v21 + 24) = v19;
  *(_QWORD *)(v21 + 16) = v22;
  *(_DWORD *)(v21 + 8) = (unsigned __int64)(v23 - v7) >> 3;
  *(_DWORD *)(v21 + 4) = (unsigned __int64)(v16 - v7) >> 3;
  *(_DWORD *)(v24 + 12) = (unsigned __int64)(v21 - v7) >> 3;
  v25 = *(unsigned int *)v24;
  if ( (v25 & 2) != 0 )
  {
    v37 = (v24 & 0xFFFFFFFFFFF80000LL) + 2112;
    v25 = (v24 - v37) >> 9;
    if ( *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + v25 + 0x38) != 0 )
      *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v37) >> 9) + 0x38) = 0;
  }
  v46 = v20;
  v45 = v19;
  v39 = v16;
  *(_DWORD *)(v21 + 28) = 0;
  __faststorefence();
  MEMORY[0x1827794E0](a1: v25, a2: v23, a3: v24, a4: v14, a5: v47, a6: v14);
  v29 = __sync_fetch_and_add((volatile signed __int64 *)(v7 + 376624696), 1u);
  result = (__int64)v44;
  *((_QWORD *)v44 + 10) = v29 + 1;
  *(_DWORD *)(result + 24) = 4262404;
  if ( (*(_DWORD *)result & 2) != 0 )
  {
    v26 = result & 0xFFFFFFFFFFF80000LL;
    v36 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v36) >> 9) + 0x38) != 0 )
      *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v36) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v27, a2: v28, a3: v46, a4: v26, a5: v45);
  return result;
}
