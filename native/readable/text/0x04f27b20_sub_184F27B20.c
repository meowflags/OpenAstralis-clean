// sub_4F27B20
// rva 0x04f27b20  size 882  section .text  group text
// window base 0x184f27b20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_4F27B20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  _DWORD *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // rsi
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rbx
  __int64 v41; // [rsp+0h] [rbp-38h] BYREF
  __int64 v42; // [rsp+10h] [rbp-28h]
  unsigned __int64 v43; // [rsp+18h] [rbp-20h]
  _DWORD *v44; // [rsp+20h] [rbp-18h]
  __int64 v45; // [rsp+28h] [rbp-10h]
  __int64 v46; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v41 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
LABEL_13:
    v45 = a3;
    v15 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v15 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v44 = v14;
      v43 = v13;
      v15 = sub_1EAA920(a1, a2, a3: 34085680);
      v14 = v44;
      v13 = v43;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v15 + 24;
      *(_DWORD *)v15 = 34085680;
      *(_DWORD *)(v15 + 4) = 0;
      *(_QWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 16) = 0;
    }
    v42 = v15;
    v16 = *(_QWORD *)(v9 + 40);
    v17 = 34082368;
    if ( (unsigned __int64)(v16 + 32) > *(_QWORD *)(v9 + 32) )
    {
      v44 = v14;
      v43 = v13;
      v16 = sub_1EAA840(a1, a2: 34082368, a3: 34082368, a4: v13, a5: 16);
      v15 = v42;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v16 + 32;
      *(_QWORD *)v16 = 34082368;
      *(_DWORD *)(v16 + 8) = 16;
      *(_DWORD *)(v16 + 12) = 0;
      *(_QWORD *)(v16 + 16) = 0;
      *(_QWORD *)(v16 + 24) = 0;
    }
    *(_DWORD *)(v15 + 4) = (v16 - v8) >> 3;
    if ( (*(_DWORD *)v15 & 2) != 0 )
    {
      v13 = v15 & 0xFFFFFFFFFFF80000LL;
      v39 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v39) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v39) >> 9) + 0x38) = 0;
    }
    sub_4F36F80(a1, a2: v17, a3: v15, a4: v13, a5: v8 + 361726144);
    sub_500AEA0(a1: v19, a2: v20, a3: v42, a4: v18, a5: v8 + 8LL * *(unsigned int *)(v45 + 12));
    sub_4F36F80(a1: v22, a2: v23, a3: v42, a4: v21, a5: v8 + 372639776);
    v27 = *(unsigned int *)(v9 + 72);
    if ( (_DWORD)v27 == 0 )
      goto LABEL_29;
    v28 = *(unsigned int *)(v8 + 8 * v27 + 72);
    if ( (_DWORD)v28 != 0 )
      v29 = v8 + 8 * v28;
    else
      v29 = v8 + 8 * v27;
    while ( 1 )
    {
      sub_500AEA0(a1: v25, a2: v26, a3: v42, a4: v24, a5: v29);
      v33 = v42;
      if ( *(_DWORD *)(v42 + 8) != 0 )
      {
        v34 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v34 + 24) > *(_QWORD *)(v9 + 32) )
        {
          v34 = sub_1EAA920(a1: v31, a2: v32, a3: 34082680);
          v33 = v42;
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v34 + 24;
          *(_DWORD *)v34 = 34082680;
          *(_DWORD *)(v34 + 4) = 0;
          *(_QWORD *)(v34 + 8) = 0;
          *(_QWORD *)(v34 + 16) = 0;
        }
        v44 = (_DWORD *)v34;
        sub_4FE9280(a1: v31, a2: v32, a3: v34, a4: v34, a5: v33, a6: v8);
        v46 = v7;
        v43 = (unsigned __int64)v44;
      }
      else
      {
        v43 = v8 + 373281248;
      }
      v35 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v35 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v35 = sub_1EAA920(a1: v31, a2: v32, a3: 38432696);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v35 + 40;
        *(_DWORD *)v35 = 38432696;
        *(_DWORD *)(v35 + 4) = 0;
        *(_QWORD *)(v35 + 8) = 0;
        *(_QWORD *)(v35 + 16) = 0;
        *(_QWORD *)(v35 + 24) = 0;
        *(_QWORD *)(v35 + 32) = 0;
      }
      *(_DWORD *)(v35 + 20) = 46923644;
      *(_DWORD *)(v35 + 16) = *(_DWORD *)(v8 + 374343896);
      *(_DWORD *)(v35 + 12) = (v35 - v8) >> 3;
      v44 = (_DWORD *)v35;
      sub_503B9A0(a1: v31, a2: v32, a3: v35, a4: v30, a5: 0);
      v38 = (unsigned __int64)v44;
      v44[2] = (v43 - v8) >> 3;
      if ( (*(_DWORD *)v38 & 2) != 0 )
      {
        v40 = (v38 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + ((v38 - v40) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + ((v38 - v40) >> 9) + 0x38) = 0;
      }
      sub_2769900(a1: v36, a2: v37, a3: v38, a4: v38, a5: &a7);
LABEL_29:
      v29 = v8;
    }
  }
  v10 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v10 != 0 )
  {
    v11 = *(unsigned int *)(v9 + 72);
    if ( (_DWORD)v11 != 0 )
    {
      v12 = *(unsigned int *)(v8 + 8 * v11 + 72);
      v13 = (_DWORD)v12 != 0 ? v8 + 8 * v12 : v8 + 8 * v11;
    }
    else
    {
      v13 = v8;
    }
    v14 = (_DWORD *)(v8 + 8 * v10);
    if ( v14 != (_DWORD *)v13 )
      goto LABEL_13;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280();
}
