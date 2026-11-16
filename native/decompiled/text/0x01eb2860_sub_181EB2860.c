// sub_181EB2860
// rva 0x01eb2860  size 837  section .text  group text
// window base 0x181eb2860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB2860(__int64 a1, __int64 a2, _DWORD *a3, int a4, int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  char v23; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v24; // [rsp+10h] [rbp-18h]
  _DWORD *v25; // [rsp+18h] [rbp-10h]
  int v26; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v8 + 8) )
  {
    LODWORD(result) = sub_181EB84E0(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v23);
    goto LABEL_11;
  }
  result = *(unsigned int *)(v7 + 374343896);
  v10 = a3[3];
  v11 = 34090048;
  if ( v10 < -1 )
  {
LABEL_11:
    v13 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v13 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v26 = result;
      v25 = a3;
      v13 = sub_181EAA920(a1, a2, a3: v11);
      LODWORD(result) = v26;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v13 + 40;
      *(_DWORD *)v13 = 34090048;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 32) = 0;
      v25 = a3;
    }
    *(_DWORD *)(v13 + 20) = 46923644;
    *(_DWORD *)(v13 + 16) = result;
    *(_DWORD *)(v13 + 12) = (unsigned __int64)(v13 - v7) >> 3;
    v24 = (_DWORD *)v13;
    MEMORY[0x18503B9A0](a1, a2, a3: v13, a4: v11, a5: 0);
    v17 = (unsigned __int64)v24;
    v24[2] = 45881261;
    if ( (*(_DWORD *)v17 & 2) != 0 )
    {
      v14 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v14) >> 9) + 0x38) = 0;
      v18 = v17;
    }
    else
    {
      v18 = v17;
    }
    goto LABEL_15;
  }
  v12 = a3[1];
  if ( v12 != 0 && a3[2] == 0 )
  {
    v25 = a3;
    v21 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v21 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v26 = result;
      v21 = sub_181EAA920(a1, a2, a3: 34090048);
      LODWORD(result) = v26;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v21 + 40;
      *(_DWORD *)v21 = 34090048;
      *(_DWORD *)(v21 + 4) = 0;
      *(_QWORD *)(v21 + 8) = 0;
      *(_QWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 24) = 0;
      *(_QWORD *)(v21 + 32) = 0;
    }
    *(_DWORD *)(v21 + 20) = 46923644;
    *(_DWORD *)(v21 + 16) = result;
    *(_DWORD *)(v21 + 12) = (unsigned __int64)(v21 - v7) >> 3;
    v24 = (_DWORD *)v21;
    MEMORY[0x18503B9A0](a1, a2, a3: v21, a4: v11, a5: 0);
    v22 = (unsigned __int64)v24;
    v24[2] = 46086499;
    if ( (*(_DWORD *)v22 & 2) != 0 )
    {
      v14 = (v22 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v14) >> 9) + 0x38) = 0;
      v18 = v22;
    }
    else
    {
      v18 = v22;
    }
    goto LABEL_15;
  }
  if ( (v12 != 0) == v10 >= 0 )
  {
    while ( 1 )
    {
      v25 = a3;
      v19 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v19 + 40) > *(_QWORD *)(v8 + 32) )
      {
        v26 = result;
        v19 = sub_181EAA920(a1, a2, a3: v11);
        LODWORD(result) = v26;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v19 + 40;
        *(_DWORD *)v19 = 34090048;
        *(_DWORD *)(v19 + 4) = 0;
        *(_QWORD *)(v19 + 8) = 0;
        *(_QWORD *)(v19 + 16) = 0;
        *(_QWORD *)(v19 + 24) = 0;
        *(_QWORD *)(v19 + 32) = 0;
      }
      *(_DWORD *)(v19 + 20) = 46923644;
      *(_DWORD *)(v19 + 16) = result;
      *(_DWORD *)(v19 + 12) = (unsigned __int64)(v19 - v7) >> 3;
      v24 = (_DWORD *)v19;
      MEMORY[0x18503B9A0](a1, a2, a3: v19, a4: v11, a5: 0);
      v20 = (unsigned __int64)v24;
      v24[2] = 46442024;
      if ( (*(_DWORD *)v20 & 2) != 0 )
      {
        v14 = (v20 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v14) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v14) >> 9) + 0x38) = 0;
        v18 = v20;
      }
      else
      {
        v18 = v20;
      }
LABEL_15:
      LODWORD(result) = MEMORY[0x182769900](a1: v15, a2: v16, a3: v18, a4: v14, a5: &a7);
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280](a1, a2, a3, a4: 34090048);
  return result;
}
