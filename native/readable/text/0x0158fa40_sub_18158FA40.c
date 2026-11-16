// sub_158FA40
// rva 0x0158fa40  size 787  section .text  group text
// window base 0x18158fa40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_158FA40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r9
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // [rsp+0h] [rbp-48h] BYREF
  __int64 v43; // [rsp+8h] [rbp-40h]
  __int64 v44; // [rsp+10h] [rbp-38h]
  __int64 v45; // [rsp+18h] [rbp-30h]
  __int64 v46; // [rsp+20h] [rbp-28h]
  __int64 v47; // [rsp+28h] [rbp-20h]
  __int64 v48; // [rsp+30h] [rbp-18h]
  int v49; // [rsp+38h] [rbp-10h]
  unsigned int v50; // [rsp+3Ch] [rbp-Ch]
  int v51; // [rsp+40h] [rbp-8h]
  unsigned int v52; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v42 <= *(_QWORD *)(v9 + 8) )
  {
    v46 = a3;
    sub_1EB84E0();
    goto LABEL_22;
  }
  v10 = *(unsigned int *)(a3 + 4);
  v11 = v8 + 8 * v10;
  v12 = v8 + 353301280;
  if ( (_DWORD)v10 != 0 )
    v13 = v8 + 8 * v10;
  else
    v13 = v8 + 353301280;
  v14 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v14 != 0 )
    v12 = v8 + 8 * v14;
  v48 = v8 + 8 * v14;
  v47 = v11;
  v46 = a3;
  v15 = (unsigned int)*(char *)(v12 + 12);
  v52 = v15 | *(char *)(v13 + 12);
  v45 = v13;
  v44 = v12;
  v16 = sub_50132E0(a1: v13, a2: v15, a3: 32);
  v20 = sub_50132E0(a1: v18, a2: v19, a3: v16, a4: v17, a5: v44);
  v51 = v20;
  v7 = v20 - 1;
  v22 = v8 + 57668792;
  v23 = v52;
  v24 = (unsigned int)(v20 << v52);
  if ( (int)v24 < 0 )
  {
LABEL_22:
    v50 = v7;
    v37 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v37 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v49 = v24;
      v37 = sub_1EAA920(a1: v21, a2: v24, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v37 + 40;
      *(_DWORD *)v37 = 34082880;
      *(_DWORD *)(v37 + 4) = 0;
      *(_QWORD *)(v37 + 8) = 0;
      *(_QWORD *)(v37 + 16) = 0;
      *(_QWORD *)(v37 + 24) = 0;
      *(_QWORD *)(v37 + 32) = 0;
      v49 = v24;
    }
    *(_DWORD *)(v37 + 20) = 46923644;
    *(_DWORD *)(v37 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v37 + 12) = (unsigned __int64)(v37 - v8) >> 3;
    v43 = v37;
    sub_503B9A0(a1: v21, a2: v24, a3: v37, a4: v23, a5: 0);
    v41 = v43;
    *(_DWORD *)(v43 + 8) = 46004603;
    if ( (*(_DWORD *)v41 & 2) != 0 )
      goto LABEL_26;
    while ( 1 )
    {
      v41 = sub_2769900(a1: v39, a2: v40, a3: v41, a4: v38, a5: &a7);
LABEL_26:
      v38 = (v41 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v41 & 0xFFFFFFFFFFF80000LL) + ((v41 - v38) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v41 & 0xFFFFFFFFFFF80000LL) + ((v41 - v38) >> 9) + 0x38) = 0;
    }
  }
  v25 = *(_QWORD *)(v9 + 40);
  v26 = ((unsigned int)v24 + 19LL) & 0x1FFFFFFF8LL;
  if ( v26 >= 0x20000 || (v27 = v25 + v26) > *(_QWORD *)(v9 + 32) )
  {
    v43 = v8 + 57668792;
    v50 = v20 - 1;
    v25 = sub_1EAA840(a1: 34082368, a2: v24, a3: 34082368, a4: v52, a5: (unsigned int)v24);
    v22 = v43;
    v7 = v50;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v27;
    *(_QWORD *)v25 = 34082368;
    *(_DWORD *)(v25 + 8) = v24;
  }
  v43 = v25;
  v50 = v7;
  if ( v52 != 0 )
    sub_4FF2C40(a1: 1, a2: v24, a3: v22, a4: v23, a5: v25, a6: v7);
  else
    sub_1EB4960(a1: v7, a2: 1, a3: v8 + 376611896, a4: v23, a5: 0, a6: v43);
  v29 = sub_5011A80(a1: v44, a2: v8 + 57668816, a3: v50, a4: v28, a5: v52, a6: v43);
  v31 = sub_5011A80(a1: v45, a2: v8 + 57668840, a3: v29, a4: v30, a5: v52, a6: v43);
  v34 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v34 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v51 = v31;
    v34 = sub_1EAA920(a1: v32, a2: v33, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v34 + 24;
    *(_DWORD *)v34 = 34082680;
    *(_DWORD *)(v34 + 4) = 0;
    *(_QWORD *)(v34 + 8) = 0;
    *(_QWORD *)(v34 + 16) = 0;
  }
  v35 = v43;
  *(_BYTE *)(v34 + 12) = v52;
  *(_DWORD *)(v34 + 4) = (unsigned __int64)(v35 - v8) >> 3;
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280(a1: v32, a2: v33, a3: v34, a4: v35, a5: v35);
  return v34;
}
