// sub_1815C14E0
// rva 0x015c14e0  size 1421  section .text  group text
// window base 0x1815c14e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C14E0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 result; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  _DWORD *v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // [rsp+0h] [rbp-28h] BYREF
  __int64 v33; // [rsp+8h] [rbp-20h]
  _DWORD *v34; // [rsp+10h] [rbp-18h]
  _DWORD *v35; // [rsp+18h] [rbp-10h]
  __int64 v36; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    while ( 1 )
    {
      v26 = (v31 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + ((v31 - v26) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + ((v31 - v26) >> 9) + 0x38) = 0;
      do
      {
        *(_DWORD *)(v31 + 12) = ((unsigned __int64)v35 - v7) >> 3;
        if ( (*(_DWORD *)v31 & 2) != 0 )
        {
          v26 = (v31 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + ((v31 - v26) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + ((v31 - v26) >> 9) + 0x38) = 0;
          v25 = (_DWORD *)v31;
        }
        else
        {
          v25 = (_DWORD *)v31;
        }
        do
        {
          do
          {
            v25 = (_DWORD *)MEMORY[0x182769900](a1: v27, a2: v28, a3: v25, a4: v26, a5: &a7);
            v29 = *v25 >> 3;
          }
          while ( *(__int16 *)(v7 + 8 * v29 + 62) < 4 );
        }
        while ( *(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v29 + 16) + 24) != 81770 );
        v35 = v25;
        v30 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v30 + 40) > *(_QWORD *)(v8 + 32) )
        {
          v30 = MEMORY[0x181EAA920](a1: v27, a2: v28, a3: 35841800);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v30 + 40;
          *(_DWORD *)v30 = 35841800;
          *(_DWORD *)(v30 + 4) = 0;
          *(_QWORD *)(v30 + 8) = 0;
          *(_QWORD *)(v30 + 16) = 0;
          *(_QWORD *)(v30 + 24) = 0;
          *(_QWORD *)(v30 + 32) = 0;
        }
        *(_DWORD *)(v30 + 20) = 46923644;
        *(_DWORD *)(v30 + 16) = *(_DWORD *)(v7 + 374343896);
        *(_DWORD *)(v30 + 12) = (unsigned __int64)(v30 - v7) >> 3;
        v34 = (_DWORD *)v30;
        MEMORY[0x18503B9A0](a1: v27, a2: v28, a3: v30, a4: v30, a5: 0);
        v31 = (unsigned __int64)v34;
        v34[2] = 46232825;
      }
      while ( (*(_DWORD *)v31 & 2) == 0 );
    }
  }
  v9 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v9 + 56) > *(_QWORD *)(v8 + 32) )
  {
    v9 = MEMORY[0x181EAA920](a1, a2, a3: 35840824);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v9 + 56;
    *(_DWORD *)v9 = 35840824;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 0;
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 32) = 0;
    *(_QWORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 48) = 0;
  }
  v36 = v9;
  *(_DWORD *)(v9 + 32) = 16;
  *(_DWORD *)(v9 + 20) = 16;
  *(_DWORD *)(v9 + 16) = 16;
  v10 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v10 + 48) > *(_QWORD *)(v8 + 32) )
  {
    v10 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: 34082368, a5: 32);
    v9 = v36;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v10 + 48;
    *(_QWORD *)v10 = 34082368;
    *(_DWORD *)(v10 + 8) = 32;
    *(_DWORD *)(v10 + 12) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 32) = 0;
    *(_QWORD *)(v10 + 40) = 0;
  }
  v11 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v11 + 16) > *(_QWORD *)(v8 + 32) )
  {
    v35 = (_DWORD *)v10;
    v11 = MEMORY[0x181EAA920](a1, a2, a3: 35840936);
    v10 = (__int64)v35;
    v9 = v36;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v11 + 16;
    *(_DWORD *)v11 = 35840936;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
  }
  *(_DWORD *)(v11 + 4) = 16;
  v12 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v12 + 24) > *(_QWORD *)(v8 + 32) )
  {
    v34 = (_DWORD *)v11;
    v35 = (_DWORD *)v10;
    v12 = MEMORY[0x181EAA920](a1, a2, a3: 35841072);
    v11 = (__int64)v34;
    v10 = (__int64)v35;
    v9 = v36;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v12 + 24;
    *(_DWORD *)v12 = 35841072;
    *(_DWORD *)(v12 + 4) = 0;
    *(_QWORD *)(v12 + 8) = 0;
    *(_QWORD *)(v12 + 16) = 0;
  }
  *(_DWORD *)(v12 + 12) = 16;
  v13 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v13 + 32) > *(_QWORD *)(v8 + 32) )
  {
    v33 = v12;
    v34 = (_DWORD *)v11;
    v35 = (_DWORD *)v10;
    v13 = MEMORY[0x181EAA920](a1, a2, a3: 35841256);
    v12 = v33;
    v11 = (__int64)v34;
    v10 = (__int64)v35;
    v9 = v36;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v13 + 32;
    *(_DWORD *)v13 = 35841256;
    *(_DWORD *)(v13 + 4) = 0;
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 16) = 0;
    *(_QWORD *)(v13 + 24) = 0;
  }
  *(_DWORD *)(v9 + 4) = (unsigned __int64)(v10 - v7) >> 3;
  if ( (*(_DWORD *)v9 & 2) != 0 )
  {
    a2 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - a2) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - a2) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v9 + 8) = (unsigned __int64)(v11 - v7) >> 3;
  if ( (*(_DWORD *)v9 & 2) != 0 )
  {
    v21 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v21) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v21) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v9 + 12) = (unsigned __int64)(v12 - v7) >> 3;
  if ( (*(_DWORD *)v9 & 2) != 0 )
  {
    v24 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v24) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v24) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v12 + 4) = (unsigned __int64)(v13 - v7) >> 3;
  if ( (*(_DWORD *)v12 & 2) != 0 )
  {
    v22 = v12 & 0xFFFFFFFFFFF80000LL;
    v23 = (v12 - ((v12 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)(v22 + v23 + 56) != 0 )
      *(_BYTE *)(v22 + v23 + 56) = 0;
  }
  v35 = (_DWORD *)(v7 + 368549424);
  MEMORY[0x182B4AA20](a1, a2, a3: v9, a4: v9, a5: v7 + 371637152);
  MEMORY[0x182B4B6A0](a1: v15, a2: v16, a3: v36, a4: v14, a5: v35);
  result = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v8 + 32) )
  {
    result = MEMORY[0x181EAA920](a1: v17, a2: v18, a3: 35841400);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = result + 24;
    *(_DWORD *)result = 35841400;
    *(_DWORD *)(result + 4) = 0;
    *(_QWORD *)(result + 8) = 0;
    *(_QWORD *)(result + 16) = 0;
  }
  v20 = v36;
  *(_DWORD *)(result + 8) = 16;
  *(_DWORD *)(result + 4) = (unsigned __int64)(v20 - v7) >> 3;
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
