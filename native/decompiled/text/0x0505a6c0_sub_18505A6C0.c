// sub_18505A6C0
// rva 0x0505a6c0  size 311  section .text  group text
// window base 0x18505a6c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18505A6C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  __int64 v17; // [rsp+10h] [rbp-8h]

  v17 = a3;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v7 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v9 + 24) > *(_QWORD *)(v8 + 32) )
    {
      v9 = MEMORY[0x181EAA920](a1, a2, a3: 34228624);
      a3 = v17;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v9 + 24;
      *(_DWORD *)v9 = 34228624;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
    }
    *(_DWORD *)(v9 + 8) = (unsigned __int64)(a3 - v7) >> 3;
    result = sub_18505A800(a1, a2, a3: v9);
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v11 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v11 + 48) > *(_QWORD *)(v8 + 32) )
    goto LABEL_13;
  *(_QWORD *)(v8 + 40) = v11 + 48;
  *(_DWORD *)v11 = 34101256;
  *(_DWORD *)(v11 + 4) = 0;
  *(_QWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 24) = 0;
  *(_QWORD *)(v11 + 32) = 0;
  *(_QWORD *)(v11 + 40) = 0;
  while ( 1 )
  {
    *(_DWORD *)(v11 + 20) = 46923644;
    *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v11 + 12) = (unsigned __int64)(v11 - v7) >> 3;
    v16 = v11;
    sub_18503B9A0(a1, a2, a3: (unsigned int *)v11, a4, a5: 0);
    MEMORY[0x182769900](a1: v13, a2: v14, a3: v16, a4: v12, a5: &a7);
LABEL_13:
    v11 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
  }
}
