// sub_18502DA40
// rva 0x0502da40  size 1423  section .text  group text
// window base 0x18502da40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502DA40(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rbx
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  int v36; // [rsp+0h] [rbp-48h] BYREF
  __int64 v37; // [rsp+10h] [rbp-38h]
  __int64 v38; // [rsp+18h] [rbp-30h]
  __int64 v39; // [rsp+20h] [rbp-28h]
  __int64 v40; // [rsp+28h] [rbp-20h]
  unsigned int *v41; // [rsp+30h] [rbp-18h]
  int v42; // [rsp+38h] [rbp-10h]
  unsigned int v43; // [rsp+3Ch] [rbp-Ch]
  unsigned int v44; // [rsp+40h] [rbp-8h]
  unsigned int v45; // [rsp+44h] [rbp-4h]

  v41 = (unsigned int *)a3;
  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v8 + 8) )
  {
    v45 = a1;
    v40 = a6;
    v16 = MEMORY[0x181EB84E0]();
    goto LABEL_41;
  }
  *(_DWORD *)(a3 + 20) = 0;
  *(_DWORD *)(a3 + 72) = 0;
  v9 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v9 + 40) > *(_QWORD *)(v8 + 32) )
  {
    v45 = a1;
    v40 = a6;
    v39 = a5;
    v9 = MEMORY[0x181EAA920](a1, a2, a3: 36590208);
    a1 = v45;
    a6 = v40;
    a5 = v39;
    a3 = (unsigned __int64)v41;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v9 + 40;
    *(_DWORD *)v9 = 36590208;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 0;
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 32) = 0;
  }
  *(_DWORD *)(a3 + 64) = (unsigned __int64)(v9 - v7) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v28 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v28) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v28) >> 9) + 0x38) = 0;
  }
  if ( a6 == v7 )
    v10 = v7 + 377212616;
  else
    v10 = a6;
  v11 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v11 + 48) > *(_QWORD *)(v8 + 32) )
  {
    v38 = v10;
    v45 = a1;
    v40 = a6;
    v39 = a5;
    v11 = MEMORY[0x181EAA920](a1, a2, a3: 36590096);
    v10 = v38;
    a1 = v45;
    a6 = v40;
    a5 = v39;
    a3 = (unsigned __int64)v41;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v11 + 48;
    *(_DWORD *)v11 = 36590096;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 32) = 0;
    *(_QWORD *)(v11 + 40) = 0;
  }
  *(_BYTE *)(v11 + 32) = (_DWORD)a1 != 0;
  *(_DWORD *)(v11 + 24) = 5;
  *(_DWORD *)(v11 + 4) = (unsigned __int64)(v10 - v7) >> 3;
  *(_DWORD *)(a3 + 12) = (unsigned __int64)(v11 - v7) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    a2 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - a2) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - a2) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v11 + 28) = 5;
  __faststorefence();
  *(_QWORD *)(a3 + 80) = __sync_add_and_fetch((volatile signed __int64 *)(v7 + 376624696), 1);
  v12 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v12 + 16) > *(_QWORD *)(v8 + 32) )
  {
    v38 = v10;
    v45 = a1;
    v40 = a6;
    v39 = a5;
    v12 = MEMORY[0x181EAA920](a1, a2, a3: 34085496);
    v10 = v38;
    a1 = v45;
    a6 = v40;
    a5 = v39;
    a3 = (unsigned __int64)v41;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v12 + 16;
    *(_DWORD *)v12 = 34085496;
    *(_DWORD *)(v12 + 4) = 0;
    *(_QWORD *)(v12 + 8) = 0;
  }
  *(_DWORD *)(a3 + 28) = (unsigned __int64)(v12 - v7) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v29 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v29) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v29) >> 9) + 0x38) = 0;
  }
  if ( a5 == v7 )
  {
    v38 = v10;
    v45 = a1;
    v40 = a6;
    v39 = a5;
    v15 = (unsigned int)__sync_add_and_fetch((volatile signed __int32 *)(v7 + 377212668), 1);
    v44 = v15;
    v16 = MEMORY[0x1850130C0](a1, a2, a3: 7, a4: v15, a5: (unsigned int)v15);
    if ( (v16 & 0x80000000) == 0 )
    {
      v20 = *(_QWORD *)(v8 + 40);
      v21 = (v16 + 19LL) & 0x1FFFFFFF8LL;
      if ( v21 >= 0x20000 || (v22 = v20 + v21) > *(_QWORD *)(v8 + 32) )
      {
        v43 = v16;
        v20 = MEMORY[0x181EAA840](a1: 34082368, a2: v19, a3: 34082368, a4: v17, a5: v16);
        v16 = v43;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v22;
        *(_QWORD *)v20 = 34082368;
        *(_DWORD *)(v20 + 8) = v16;
      }
      v37 = v20;
      v43 = v16;
      MEMORY[0x181EB4960](a1: v16, a2: 0, a3: v7 + 376351544, a4: v20, a5: 0, a6: v20);
      v24 = MEMORY[0x185011920](a1: v44, a2: v7 + 60267792, a3: v43, a4: v23, a5: 0, a6: v37);
      v27 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v27 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v42 = v24;
        v13 = MEMORY[0x181EAA920](a1: v25, a2: v26, a3: 34082680);
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v27 + 24;
        *(_DWORD *)v27 = 34082680;
        *(_DWORD *)(v27 + 4) = 0;
        *(_QWORD *)(v27 + 8) = 0;
        *(_QWORD *)(v27 + 16) = 0;
        v13 = v27;
      }
      *(_DWORD *)(v13 + 4) = (unsigned __int64)(v37 - v7) >> 3;
      a3 = (unsigned __int64)v41;
      goto LABEL_15;
    }
LABEL_41:
    v43 = v16;
    v31 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v31 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v31 = MEMORY[0x181EAA920](a1: v18, a2: v19, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v31 + 40;
      *(_DWORD *)v31 = 34082880;
      *(_DWORD *)(v31 + 4) = 0;
      *(_QWORD *)(v31 + 8) = 0;
      *(_QWORD *)(v31 + 16) = 0;
      *(_QWORD *)(v31 + 24) = 0;
      *(_QWORD *)(v31 + 32) = 0;
    }
    *(_DWORD *)(v31 + 20) = 46923644;
    *(_DWORD *)(v31 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v31 + 12) = (unsigned __int64)(v31 - v7) >> 3;
    v37 = v31;
    sub_18503B9A0(a1: v18, a2: v19, a3: v31, a4: v17, a5: 0);
    v35 = v37;
    *(_DWORD *)(v37 + 8) = 46004603;
    if ( (*(_DWORD *)v35 & 2) != 0 )
      goto LABEL_45;
    while ( 1 )
    {
      v35 = MEMORY[0x182769900](a1: v33, a2: v34, a3: v35, a4: v32, a5: &a7);
LABEL_45:
      v32 = (v35 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v32) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v32) >> 9) + 0x38) = 0;
    }
  }
  v38 = v10;
  v45 = a1;
  v40 = a6;
  v39 = a5;
  v13 = a5;
LABEL_15:
  *(_DWORD *)(a3 + 4) = (unsigned __int64)(v13 - v7) >> 3;
  __faststorefence();
  result = *(unsigned int *)a3;
  if ( (result & 2) != 0 )
  {
    v30 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    result = (a3 - v30) >> 9;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v30) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
