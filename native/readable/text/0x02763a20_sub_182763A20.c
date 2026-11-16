// sub_2763A20
// rva 0x02763a20  size 623  section .text  group text
// window base 0x182763a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2763A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // [rsp+0h] [rbp-28h] BYREF
  __int64 v38; // [rsp+8h] [rbp-20h]
  __int64 v39; // [rsp+10h] [rbp-18h]
  int v40; // [rsp+18h] [rbp-10h]
  unsigned int v41; // [rsp+1Ch] [rbp-Ch]
  unsigned int v42; // [rsp+20h] [rbp-8h]
  unsigned int v43; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v37 <= *(_QWORD *)(v8 + 8) )
  {
    v39 = a3;
    v15 = sub_1EB84E0();
LABEL_14:
    v41 = v18;
    v40 = v15;
    v32 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v32 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v32 = sub_1EAA920(a1: v16, a2: v17, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v32 + 40;
      *(_DWORD *)v32 = 34082880;
      *(_DWORD *)(v32 + 4) = 0;
      *(_QWORD *)(v32 + 8) = 0;
      *(_QWORD *)(v32 + 16) = 0;
      *(_QWORD *)(v32 + 24) = 0;
      *(_QWORD *)(v32 + 32) = 0;
    }
    *(_DWORD *)(v32 + 20) = 46923644;
    *(_DWORD *)(v32 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v32 + 12) = (unsigned __int64)(v32 - v7) >> 3;
    v38 = v32;
    sub_503B9A0(a1: v16, a2: v17, a3: v32, a4: v18, a5: 0);
    v36 = v38;
    *(_DWORD *)(v38 + 8) = 46004603;
    if ( (*(_DWORD *)v36 & 2) != 0 )
      goto LABEL_18;
    while ( 1 )
    {
      v36 = sub_2769900(a1: v34, a2: v35, a3: v36, a4: v33, a5: &a7);
LABEL_18:
      v33 = (v36 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v36 & 0xFFFFFFFFFFF80000LL) + ((v36 - v33) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v36 & 0xFFFFFFFFFFF80000LL) + ((v36 - v33) >> 9) + 0x38) = 0;
    }
  }
  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(unsigned int *)(a3 + 4);
  v39 = a3;
  v43 = v10;
  v42 = v9;
  v11 = sub_50130C0(a1, a2, a3: 68, a4: v10, a5: (unsigned int)v10);
  v15 = sub_50130C0(a1: v13, a2: v14, a3: v11, a4: v12, a5: v42);
  v18 = (unsigned int)(v15 - 1);
  if ( v15 < 0 )
    goto LABEL_14;
  v19 = *(_QWORD *)(v8 + 40);
  v20 = ((unsigned int)v15 + 19LL) & 0x1FFFFFFF8LL;
  if ( v20 >= 0x20000 || (v21 = v19 + v20) > *(_QWORD *)(v8 + 32) )
  {
    v41 = v15 - 1;
    v40 = v15;
    v19 = sub_1EAA840(a1: 34082368, a2: v17, a3: 34082368, a4: v18, a5: (unsigned int)v15);
    v18 = v41;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v21;
    *(_QWORD *)v19 = 34082368;
    *(_DWORD *)(v19 + 8) = v15;
  }
  v38 = v19;
  v41 = v18;
  sub_1EB4960(a1: (unsigned int)v18, a2: 1, a3: v7 + 376667744, a4: v18, a5: 0, a6: v19);
  v23 = sub_5011920(a1: v42, a2: v7 + 58184504, a3: v41, a4: v22, a5: 0, a6: v38);
  v25 = sub_5011920(a1: v43, a2: v7 + 58184528, a3: v23, a4: v24, a5: 0, a6: v38);
  v28 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v28 + 24) > *(_QWORD *)(v8 + 32) )
  {
    v40 = v25;
    v29 = sub_1EAA920(a1: v26, a2: v27, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v28 + 24;
    *(_DWORD *)v28 = 34082680;
    *(_DWORD *)(v28 + 4) = 0;
    *(_QWORD *)(v28 + 8) = 0;
    *(_QWORD *)(v28 + 16) = 0;
    v29 = v28;
  }
  v30 = v38;
  *(_DWORD *)(v29 + 4) = (unsigned __int64)(v38 - v7) >> 3;
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v26, a2: v27, a3: v30);
  return v29;
}
