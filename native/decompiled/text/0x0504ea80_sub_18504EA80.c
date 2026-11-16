// sub_18504EA80
// rva 0x0504ea80  size 443  section .text  group text
// window base 0x18504ea80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504EA80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-18h] BYREF
  __int64 v17; // [rsp+8h] [rbp-10h]
  __int64 v18; // [rsp+10h] [rbp-8h]

  v18 = a3;
  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v7 )
  {
    result = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v8 + 32) )
    {
      result = MEMORY[0x181EAA920](a1, a2, a3: 43311664);
      a3 = v18;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = result + 16;
      *(_DWORD *)result = 43311664;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
    }
    v10 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v10 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v17 = result;
      v10 = MEMORY[0x181EAA920](a1, a2, a3: 43311808);
      result = v17;
      a3 = v18;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v10 + 16;
      *(_DWORD *)v10 = 43311808;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
    }
    *(_DWORD *)(v10 + 4) = (unsigned __int64)(a3 - v7) >> 3;
    *(_DWORD *)(result + 4) = (unsigned __int64)(v10 - v7) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v11 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v11) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v17 = result;
      MEMORY[0x18277F280]();
      return v17;
    }
    return result;
  }
  v12 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v12 + 48) > *(_QWORD *)(v8 + 32) )
    goto LABEL_19;
  *(_QWORD *)(v8 + 40) = v12 + 48;
  *(_DWORD *)v12 = 34101256;
  *(_DWORD *)(v12 + 4) = 0;
  *(_QWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 40) = 0;
  while ( 1 )
  {
    *(_DWORD *)(v12 + 20) = 46923644;
    *(_DWORD *)(v12 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v12 + 12) = (unsigned __int64)(v12 - v7) >> 3;
    v17 = v12;
    sub_18503B9A0(a1, a2, a3: (unsigned int *)v12, a4, a5: 0);
    MEMORY[0x182769900](a1: v14, a2: v15, a3: v17, a4: v13, a5: &a7);
LABEL_19:
    v12 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
  }
}
