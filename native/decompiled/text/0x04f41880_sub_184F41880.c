// sub_184F41880
// rva 0x04f41880  size 805  section .text  group text
// window base 0x184f41880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F41880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rbx
  __int64 v39; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v40; // [rsp+8h] [rbp-30h]
  __int64 v41; // [rsp+10h] [rbp-28h]
  __int64 i; // [rsp+18h] [rbp-20h]
  __int64 v43; // [rsp+20h] [rbp-18h]
  unsigned int v44; // [rsp+2Ch] [rbp-Ch]
  __int64 v45; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v39 <= *(_QWORD *)(v9 + 8) )
  {
    v43 = a3;
    v10 = MEMORY[0x181EB84E0]();
    goto LABEL_7;
  }
  v43 = a3;
  v10 = MEMORY[0x184F88640]();
  v13 = *(unsigned int *)(v10 + 4);
  if ( (unsigned int)(v13 + 128) >= 0x100 )
  {
LABEL_7:
    i = v10;
    v15 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v15 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v44 = v13;
      v15 = MEMORY[0x181EAA920](a1: v11, a2: v12, a3: 34085680);
      v13 = v44;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v15 + 24;
      *(_DWORD *)v15 = 34085680;
      *(_DWORD *)(v15 + 4) = 0;
      *(_QWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 16) = 0;
    }
    v41 = v15;
    v16 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v16 + 32) > *(_QWORD *)(v9 + 32) )
    {
      v44 = v13;
      v16 = MEMORY[0x181EAA840](a1: v11, a2: v12, a3: 34082368, a4: v13, a5: 16);
      v15 = v41;
      v13 = v44;
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
    *(_DWORD *)(v15 + 4) = (unsigned __int64)(v16 - v8) >> 3;
    if ( (*(_DWORD *)v15 & 2) != 0 )
    {
      v38 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v38) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v38) >> 9) + 0x38) = 0;
    }
    v44 = v13;
    sub_184F36F80(a1: v11, a2: v12, a3: v15, a4: v13, a5: v8 + 366218536);
    sub_184F36640(a1: v18, a2: v19, a3: v41, a4: v17, a5: v44);
    sub_184F36F80(a1: v21, a2: v22, a3: v41, a4: v20, a5: v8 + 372900152);
    v26 = sub_184F36F80(a1: v24, a2: v25, a3: v41, a4: v23, a5: v43);
    v30 = v41;
    if ( *(_DWORD *)(v41 + 8) == 0 )
      goto LABEL_20;
    v31 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v31 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v40 = (_DWORD *)v26;
      v31 = MEMORY[0x181EAA920](a1: v28, a2: v29, a3: 34082680);
      v32 = v41;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v31 + 24;
      *(_DWORD *)v31 = 34082680;
      *(_DWORD *)(v31 + 4) = 0;
      *(_QWORD *)(v31 + 8) = 0;
      *(_QWORD *)(v31 + 16) = 0;
      v32 = v30;
    }
    v40 = (_DWORD *)v31;
    MEMORY[0x184FE9280](a1: v28, a2: v29, a3: v31, a4: v27, a5: v32, a6: v8);
    v45 = v7;
    for ( i = (__int64)v40; ; i = v8 + 373281248 )
    {
      v33 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v33 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v33 = MEMORY[0x181EAA920](a1: v28, a2: v29, a3: 34317776);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v33 + 40;
        *(_DWORD *)v33 = 34317776;
        *(_DWORD *)(v33 + 4) = 0;
        *(_QWORD *)(v33 + 8) = 0;
        *(_QWORD *)(v33 + 16) = 0;
        *(_QWORD *)(v33 + 24) = 0;
        *(_QWORD *)(v33 + 32) = 0;
      }
      *(_DWORD *)(v33 + 20) = 46923644;
      *(_DWORD *)(v33 + 16) = *(_DWORD *)(v8 + 374343896);
      *(_DWORD *)(v33 + 12) = (unsigned __int64)(v33 - v8) >> 3;
      v40 = (_DWORD *)v33;
      MEMORY[0x18503B9A0](a1: v28, a2: v29, a3: v33, a4: v27, a5: 0);
      v36 = (unsigned __int64)v40;
      v40[2] = (unsigned __int64)(i - v8) >> 3;
      if ( (*(_DWORD *)v36 & 2) != 0 )
      {
        v37 = (v36 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v36 & 0xFFFFFFFFFFF80000LL) + ((v36 - v37) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v36 & 0xFFFFFFFFFFF80000LL) + ((v36 - v37) >> 9) + 0x38) = 0;
      }
      MEMORY[0x182769900](a1: v34, a2: v35, a3: v36, a4: v36, a5: &a7);
LABEL_20:
      ;
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v8 + 8LL * *(unsigned int *)(v8 + 4LL * (unsigned int)((char)v13 + 128) + 376354740);
}
