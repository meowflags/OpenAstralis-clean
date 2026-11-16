// sub_181EB3F80
// rva 0x01eb3f80  size 357  section .text  group text
// window base 0x181eb3f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_181EB3F80(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, int a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  _DWORD *result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  char v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+10h] [rbp-18h]
  _DWORD *v20; // [rsp+18h] [rbp-10h]
  int v21; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
  {
    v21 = a5;
    v20 = a3;
    sub_181EB84E0(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v18);
LABEL_8:
    v21 = a5;
    v20 = a3;
    v13 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v13 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v13 = sub_181EAA920(a1, a2, a3: 34081944);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v13 + 40;
      *(_DWORD *)v13 = 34081944;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 32) = 0;
    }
    *(_DWORD *)(v13 + 20) = 46923644;
    *(_DWORD *)(v13 + 16) = v7[93585974];
    *(_DWORD *)(v13 + 12) = (unsigned __int64)(v13 - (_QWORD)v7) >> 3;
    v19 = v13;
    MEMORY[0x18503B9A0](a1, a2, a3: v13, a4, a5: 0);
    v17 = v19;
    *(_DWORD *)(v19 + 8) = 46411909;
    if ( (*(_DWORD *)v17 & 2) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  if ( v7 + 94164370 == a3 )
    goto LABEL_8;
  v21 = a5;
  v20 = a3;
  result = (_DWORD *)MEMORY[0x185835CA0](a1, a2, a3: v7 + 94164504, a4: v20, a5: v20);
  if ( result != v7 && *result >> 3 != 5058276 )
  {
    while ( 1 )
    {
      v17 = MEMORY[0x18276FC00](a1: v11, a2: v12, a3: result, a4: v10, a5: v7 + 10116552);
LABEL_13:
      v14 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v14) >> 9) + 0x38) = 0;
LABEL_11:
      result = (_DWORD *)MEMORY[0x182769900](a1: v15, a2: v16, a3: v17, a4: v14, a5: &a7);
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
