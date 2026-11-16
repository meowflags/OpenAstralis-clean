// sub_502B860
// rva 0x0502b860  size 561  section .text  group text
// window base 0x18502b860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502B860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  int v22; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    LODWORD(result) = sub_1EB84E0();
LABEL_8:
    v11 = *(_QWORD *)(v8 + 40);
    v12 = v11 + 48;
    if ( (unsigned __int64)(v11 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v22 = result;
      v21 = a3;
      v11 = sub_1EAA920(a1, a2, a3: 34101256);
      LODWORD(result) = v22;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v12;
      *(_DWORD *)v11 = 34101256;
      *(_DWORD *)(v11 + 4) = 0;
      *(_QWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *(_QWORD *)(v11 + 32) = 0;
      *(_QWORD *)(v11 + 40) = 0;
    }
    *(_DWORD *)(v11 + 20) = 46923644;
    *(_DWORD *)(v11 + 16) = result;
    *(_DWORD *)(v11 + 12) = (unsigned __int64)(v11 - v7) >> 3;
    v20 = (_DWORD *)v11;
    sub_503B9A0(a1, a2, a3: v11, a4: v12, a5: 0);
    v16 = (unsigned __int64)v20;
    v20[2] = 44922193;
    if ( (*(_DWORD *)v16 & 2) != 0 )
    {
      v13 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v13) >> 9) + 0x38) = 0;
    }
    goto LABEL_11;
  }
  result = *(unsigned int *)(v7 + 374343896);
  if ( a3 == v7 )
    goto LABEL_8;
  v10 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v10 == 0 )
    goto LABEL_12;
  if ( *(_DWORD *)(v7 + 8 * v10 + 8) == 0 )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(v8 + 40);
      v18 = v17 + 40;
      if ( (unsigned __int64)(v17 + 40) > *(_QWORD *)(v8 + 32) )
      {
        v22 = result;
        v21 = a3;
        v17 = sub_1EAA920(a1, a2, a3: 34081944);
        LODWORD(result) = v22;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v18;
        *(_DWORD *)v17 = 34081944;
        *(_DWORD *)(v17 + 4) = 0;
        *(_QWORD *)(v17 + 8) = 0;
        *(_QWORD *)(v17 + 16) = 0;
        *(_QWORD *)(v17 + 24) = 0;
        *(_QWORD *)(v17 + 32) = 0;
        v21 = a3;
      }
      *(_DWORD *)(v17 + 20) = 46923644;
      *(_DWORD *)(v17 + 16) = result;
      *(_DWORD *)(v17 + 12) = (unsigned __int64)(v17 - v7) >> 3;
      v20 = (_DWORD *)v17;
      sub_503B9A0(a1, a2, a3: v17, a4: v18, a5: 0);
      v16 = (unsigned __int64)v20;
      v20[2] = 44922209;
      if ( (*(_DWORD *)v16 & 2) != 0 )
      {
        v13 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v13) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v13) >> 9) + 0x38) = 0;
      }
LABEL_11:
      sub_2769900(a1: v14, a2: v15, a3: v16, a4: v13, a5: &a7);
LABEL_12:
      LODWORD(result) = sub_2771080();
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
