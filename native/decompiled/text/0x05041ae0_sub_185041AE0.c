// sub_185041AE0
// rva 0x05041ae0  size 901  section .text  group text
// window base 0x185041ae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185041AE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdi
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rsi
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rbx
  __int64 v40; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v41; // [rsp+10h] [rbp-38h]
  __int64 i; // [rsp+18h] [rbp-30h]
  __int64 v43; // [rsp+20h] [rbp-28h]
  __int64 v44; // [rsp+28h] [rbp-20h]
  int v45; // [rsp+30h] [rbp-18h]
  unsigned int v46; // [rsp+34h] [rbp-14h]
  unsigned int v47; // [rsp+38h] [rbp-10h]
  unsigned int v48; // [rsp+3Ch] [rbp-Ch]
  __int64 v49; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v9 + 8) )
  {
    v48 = a6;
    v47 = a5;
    v44 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_10;
  }
  if ( (int)(a6 - a5) >= 2 )
  {
    if ( a3 != v8 )
    {
      v48 = a6;
      v47 = a5;
      v44 = a3;
      v46 = MEMORY[0x184FEBC20]();
      v13 = MEMORY[0x184F46FE0](a1: v11, a2: v12, a3: v46, a4: v10, a5: 10);
      if ( v13 >= 1 )
        goto LABEL_5;
LABEL_11:
      v45 = v13;
      v16 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v16 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v16 = MEMORY[0x181EAA920](a1: v14, a2, a3: 34085680);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v16 + 24;
        *(_DWORD *)v16 = 34085680;
        *(_DWORD *)(v16 + 4) = 0;
        *(_QWORD *)(v16 + 8) = 0;
        *(_QWORD *)(v16 + 16) = 0;
      }
      v43 = v16;
      v17 = *(_QWORD *)(v9 + 40);
      v18 = v17 + 32;
      if ( (unsigned __int64)(v17 + 32) > *(_QWORD *)(v9 + 32) )
      {
        v17 = MEMORY[0x181EAA840](a1: v14, a2, a3: 34082368, a4: v18, a5: 16);
        v16 = v43;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v18;
        *(_QWORD *)v17 = 34082368;
        *(_DWORD *)(v17 + 8) = 16;
        *(_DWORD *)(v17 + 12) = 0;
        *(_QWORD *)(v17 + 16) = 0;
        *(_QWORD *)(v17 + 24) = 0;
      }
      *(_DWORD *)(v16 + 4) = (unsigned __int64)(v17 - v8) >> 3;
      if ( (*(_DWORD *)v16 & 2) != 0 )
      {
        v18 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v18) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v18) >> 9) + 0x38) = 0;
      }
      MEMORY[0x184F36F80](a1: v14, a2, a3: v16, a4: v18, a5: v8 + 369187616);
      i = MEMORY[0x184FFD140](a1: v20, a2: v21, a3: v44, a4: v19, a5: v47, a6: v48);
      MEMORY[0x184F36F80](a1: v23, a2: v24, a3: v43, a4: v22, a5: i);
      v28 = MEMORY[0x184F36F80](a1: v26, a2: v27, a3: v43, a4: v25, a5: v8 + 372674176);
      v32 = v43;
      if ( *(_DWORD *)(v43 + 8) == 0 )
        goto LABEL_24;
      v33 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v33 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v41 = (_DWORD *)v28;
        v33 = MEMORY[0x181EAA920](a1: v30, a2: v31, a3: 34082680);
        v34 = v43;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v33 + 24;
        *(_DWORD *)v33 = 34082680;
        *(_DWORD *)(v33 + 4) = 0;
        *(_QWORD *)(v33 + 8) = 0;
        *(_QWORD *)(v33 + 16) = 0;
        v34 = v32;
      }
      v41 = (_DWORD *)v33;
      MEMORY[0x184FE9280](a1: v30, a2: v31, a3: v33, a4: v29, a5: v34, a6: v8);
      v49 = v7;
      for ( i = (__int64)v41; ; i = v8 + 373281248 )
      {
        v35 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v35 + 40) > *(_QWORD *)(v9 + 32) )
        {
          v35 = MEMORY[0x181EAA920](a1: v30, a2: v31, a3: 34081944);
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v35 + 40;
          *(_DWORD *)v35 = 34081944;
          *(_DWORD *)(v35 + 4) = 0;
          *(_QWORD *)(v35 + 8) = 0;
          *(_QWORD *)(v35 + 16) = 0;
          *(_QWORD *)(v35 + 24) = 0;
          *(_QWORD *)(v35 + 32) = 0;
        }
        *(_DWORD *)(v35 + 20) = 46923644;
        *(_DWORD *)(v35 + 16) = *(_DWORD *)(v8 + 374343896);
        *(_DWORD *)(v35 + 12) = (unsigned __int64)(v35 - v8) >> 3;
        v41 = (_DWORD *)v35;
        sub_18503B9A0(a1: v30, a2: v31, a3: (unsigned int *)v35, a4: v29, a5: 0);
        v38 = (unsigned __int64)v41;
        v41[2] = (unsigned __int64)(i - v8) >> 3;
        if ( (*(_DWORD *)v38 & 2) != 0 )
        {
          v39 = (v38 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + ((v38 - v39) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + ((v38 - v39) >> 9) + 0x38) = 0;
        }
        MEMORY[0x182769900](a1: v36, a2: v37, a3: v38, a4: v38, a5: &a7);
LABEL_24:
        ;
      }
    }
LABEL_10:
    v48 = a6;
    v47 = a5;
    v13 = MEMORY[0x182771080]();
    goto LABEL_11;
  }
  v48 = a6;
  v47 = a5;
  v44 = a3;
LABEL_5:
  result = MEMORY[0x184F89680](a1: 10, a2, a3: v44, a4, a5: v47, a6: v48);
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
