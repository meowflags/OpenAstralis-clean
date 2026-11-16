// sub_4F21320
// rva 0x04f21320  size 286  section .text  group text
// window base 0x184f21320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F21320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+8h] [rbp-10h]
  __int64 v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    result = sub_1EB84E0();
LABEL_6:
    v11 = *(_QWORD *)(v8 + 40);
    v12 = v11 + 40;
    if ( (unsigned __int64)(v11 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v19 = result;
      v18 = a3;
      v11 = sub_1EAA920(a1, a2, a3: 34107088);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v12;
      *(_DWORD *)v11 = 34107088;
      *(_DWORD *)(v11 + 4) = 0;
      *(_QWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *(_QWORD *)(v11 + 32) = 0;
      v18 = a3;
    }
    *(_DWORD *)(v11 + 20) = 46923644;
    *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v11 + 12) = (unsigned __int64)(v11 - v7) >> 3;
    v19 = v11;
    sub_503B9A0(a1, a2, a3: v11, a4: v12, a5: 0);
    v16 = v19;
    *(_DWORD *)(v19 + 8) = 45876601;
    if ( (*(_DWORD *)v16 & 2) != 0 )
      goto LABEL_10;
    while ( 1 )
    {
      v16 = sub_2769900(a1: v14, a2: v15, a3: v16, a4: v13, a5: &a7);
LABEL_10:
      v13 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v13) >> 9) + 0x38) = 0;
    }
  }
  v9 = *(unsigned int *)(a3 + 4);
  result = v7 + 8 * v9;
  if ( (_DWORD)v9 == 0 )
    goto LABEL_6;
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
