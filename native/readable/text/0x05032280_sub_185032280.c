// sub_5032280
// rva 0x05032280  size 285  section .text  group text
// window base 0x185032280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5032280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+10h] [rbp-18h]
  __int64 v20; // [rsp+18h] [rbp-10h]
  int v21; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
  {
    v20 = a3;
    LODWORD(result) = sub_1EB84E0();
LABEL_6:
    v13 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v13 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v21 = result;
      v13 = sub_1EAA920(a1: v11, a2: v12, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v13 + 40;
      *(_DWORD *)v13 = 34082880;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 32) = 0;
    }
    *(_DWORD *)(v13 + 20) = 46923644;
    *(_DWORD *)(v13 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v13 + 12) = (unsigned __int64)(v13 - v7) >> 3;
    v19 = v13;
    sub_503B9A0(a1: v11, a2: v12, a3: v13, a4: v10, a5: 0);
    v17 = v19;
    *(_DWORD *)(v19 + 8) = 45801061;
    if ( (*(_DWORD *)v17 & 2) != 0 )
      goto LABEL_10;
    while ( 1 )
    {
      v17 = sub_2769900(a1: v15, a2: v16, a3: v17, a4: v14, a5: &a7);
LABEL_10:
      v14 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v14) >> 9) + 0x38) = 0;
    }
  }
  v20 = a3;
  result = sub_277C980(a1, a2, a3: v7 + 376612728, a4, a5: a3);
  if ( (_DWORD)result == 0 )
    goto LABEL_6;
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
