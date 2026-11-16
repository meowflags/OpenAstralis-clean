// sub_5031640
// rva 0x05031640  size 335  section .text  group text
// window base 0x185031640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5031640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  char v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+10h] [rbp-18h]
  __int64 v18; // [rsp+18h] [rbp-10h]
  __int64 v19; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    v19 = a3;
    sub_1EB84E0();
LABEL_10:
    v19 = a3;
    v11 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v11 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v11 = sub_1EAA920(a1, a2, a3: 34081944);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v11 + 40;
      *(_DWORD *)v11 = 34081944;
      *(_DWORD *)(v11 + 4) = 0;
      *(_QWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *(_QWORD *)(v11 + 32) = 0;
    }
    *(_DWORD *)(v11 + 20) = 46923644;
    *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v11 + 12) = (unsigned __int64)(v11 - v7) >> 3;
    v17 = v11;
    sub_503B9A0(a1, a2, a3: v11, a4, a5: 0);
    v15 = v17;
    *(_DWORD *)(v17 + 8) = 43885988;
    if ( (*(_DWORD *)v15 & 2) != 0 )
      goto LABEL_14;
    while ( 1 )
    {
      v15 = sub_2769900(a1: v13, a2: v14, a3: v15, a4: v12, a5: &a7);
LABEL_14:
      v12 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v12) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v12) >> 9) + 0x38) = 0;
    }
  }
  if ( a3 < 0 )
    goto LABEL_10;
  if ( a3 < 0x8637BD05AF7LL )
    v9 = 1000000 * a3;
  else
    v9 = 0x7FFFFFFFFFFFFFFFLL;
  v19 = a3;
  v18 = v9;
  result = sub_5031A20(a1, a2, a3: v9, a4, a5, a6, a7: v16);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
