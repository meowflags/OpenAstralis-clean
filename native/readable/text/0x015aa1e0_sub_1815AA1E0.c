// sub_15AA1E0
// rva 0x015aa1e0  size 293  section .text  group text
// window base 0x1815aa1e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15AA1E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  __int64 v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v8 + 8) )
  {
    result = sub_1EB84E0();
LABEL_6:
    if ( result != 2 )
    {
      v17 = result;
      sub_28C1C40(a1, a2, a3: v7 + 369029120);
    }
    v10 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v10 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v10 = sub_1EAA920(a1, a2, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v10 + 40;
      *(_DWORD *)v10 = 34082880;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      *(_QWORD *)(v10 + 32) = 0;
    }
    *(_DWORD *)(v10 + 20) = 46923644;
    *(_DWORD *)(v10 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v10 + 12) = (unsigned __int64)(v10 - v7) >> 3;
    v16 = v10;
    sub_503B9A0(a1, a2, a3: v10, a4, a5: 0);
    v14 = v16;
    *(_DWORD *)(v16 + 8) = 46045286;
    if ( (*(_DWORD *)v14 & 2) != 0 )
      goto LABEL_12;
    while ( 1 )
    {
      v14 = sub_2769900(a1: v12, a2: v13, a3: v14, a4: v11, a5: &a7);
LABEL_12:
      v11 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v11) >> 9) + 0x38) = 0;
    }
  }
  result = MEMORY[0x12001e80]/* 0x12001e80 */;
  if ( MEMORY[0x12001e80]/* 0x12001e80 */ != 1 )
    goto LABEL_6;
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
