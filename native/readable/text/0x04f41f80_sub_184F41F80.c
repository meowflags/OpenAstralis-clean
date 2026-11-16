// sub_4F41F80
// rva 0x04f41f80  size 786  section .text  group text
// window base 0x184f41f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F41F80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rbx
  __int64 v38; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v39; // [rsp+8h] [rbp-30h]
  _DWORD *i; // [rsp+10h] [rbp-28h]
  __int64 v41; // [rsp+18h] [rbp-20h]
  __int64 v42; // [rsp+20h] [rbp-18h]
  int v43; // [rsp+28h] [rbp-10h]
  int v44; // [rsp+2Ch] [rbp-Ch]
  __int64 v45; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v9 + 8) )
  {
    v44 = a5;
    v42 = a3;
    v10 = sub_1EB84E0();
    goto LABEL_7;
  }
  v44 = a5;
  v42 = a3;
  v10 = sub_4F8A060();
  if ( (unsigned int)(v10 + 128) >= 0x100 )
  {
LABEL_7:
    v14 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v14 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v43 = v10;
      v14 = sub_1EAA920(a1: v11, a2: v12, a3: 34085680);
      v10 = v43;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v14 + 24;
      *(_DWORD *)v14 = 34085680;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
    }
    v41 = v14;
    v15 = *(_QWORD *)(v9 + 40);
    v16 = v15 + 32;
    if ( (unsigned __int64)(v15 + 32) > *(_QWORD *)(v9 + 32) )
    {
      v43 = v10;
      v15 = sub_1EAA840(a1: v11, a2: v12, a3: 34082368, a4: v16, a5: 16);
      v14 = v41;
      v10 = v43;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v16;
      *(_QWORD *)v15 = 34082368;
      *(_DWORD *)(v15 + 8) = 16;
      *(_DWORD *)(v15 + 12) = 0;
      *(_QWORD *)(v15 + 16) = 0;
      *(_QWORD *)(v15 + 24) = 0;
    }
    *(_DWORD *)(v14 + 4) = (unsigned __int64)(v15 - v8) >> 3;
    if ( (*(_DWORD *)v14 & 2) != 0 )
    {
      v37 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v37) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v37) >> 9) + 0x38) = 0;
    }
    v43 = v10;
    sub_4F36F80(a1: v11, a2: v12, a3: v14, a4: v14, a5: v8 + 366217296);
    sub_4F36F80(a1: v18, a2: v19, a3: v41, a4: v17, a5: v42);
    sub_4F36F80(a1: v21, a2: v22, a3: v41, a4: v20, a5: v8 + 372880272);
    sub_4F36640(a1: v24, a2: v25, a3: v41, a4: v23, a5: v44);
    v29 = v41;
    if ( *(_DWORD *)(v41 + 8) == 0 )
      goto LABEL_20;
    v30 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v30 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v30 = sub_1EAA920(a1: v27, a2: v28, a3: 34082680);
      v31 = v41;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v30 + 24;
      *(_DWORD *)v30 = 34082680;
      *(_DWORD *)(v30 + 4) = 0;
      *(_QWORD *)(v30 + 8) = 0;
      *(_QWORD *)(v30 + 16) = 0;
      v31 = v29;
    }
    v39 = (_DWORD *)v30;
    sub_4FE9280(a1: v27, a2: v28, a3: v30, a4: v26, a5: v31, a6: v8);
    v45 = v7;
    for ( i = v39; ; i = (_DWORD *)(v8 + 373281248) )
    {
      v32 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v32 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v32 = sub_1EAA920(a1: v27, a2: v28, a3: 34317776);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v32 + 40;
        *(_DWORD *)v32 = 34317776;
        *(_DWORD *)(v32 + 4) = 0;
        *(_QWORD *)(v32 + 8) = 0;
        *(_QWORD *)(v32 + 16) = 0;
        *(_QWORD *)(v32 + 24) = 0;
        *(_QWORD *)(v32 + 32) = 0;
      }
      *(_DWORD *)(v32 + 20) = 46923644;
      *(_DWORD *)(v32 + 16) = *(_DWORD *)(v8 + 374343896);
      *(_DWORD *)(v32 + 12) = (unsigned __int64)(v32 - v8) >> 3;
      v39 = (_DWORD *)v32;
      sub_503B9A0(a1: v27, a2: v28, a3: v32, a4: v26, a5: 0);
      v35 = (unsigned __int64)v39;
      v39[2] = ((unsigned __int64)i - v8) >> 3;
      if ( (*(_DWORD *)v35 & 2) != 0 )
      {
        v36 = (v35 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v36) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v36) >> 9) + 0x38) = 0;
      }
      sub_2769900(a1: v33, a2: v34, a3: v35, a4: v35, a5: &a7);
LABEL_20:
      ;
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    LOBYTE(v10) = sub_277F280();
  return (unsigned int)(char)v10;
}
