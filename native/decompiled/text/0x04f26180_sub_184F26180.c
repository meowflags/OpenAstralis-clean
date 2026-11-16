// sub_184F26180
// rva 0x04f26180  size 290  section .text  group text
// window base 0x184f26180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F26180(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  unsigned __int64 v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_10;
  }
  *(_DWORD *)(a3 + 8) = 0;
  if ( a5 == v7 )
  {
LABEL_10:
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
    v17 = a3;
    while ( 1 )
    {
      *(_DWORD *)(v11 + 20) = 46923644;
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 374343896);
      *(_DWORD *)(v11 + 12) = (unsigned __int64)(v11 - v7) >> 3;
      v16 = v11;
      MEMORY[0x18503B9A0](a1, a2, a3: v11, a4, a5: 0);
      MEMORY[0x182769900](a1: v13, a2: v14, a3: v16, a4: v12, a5: &a7);
LABEL_13:
      v17 = a3;
      v11 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
    }
  }
  *(_DWORD *)(a3 + 4) = (unsigned __int64)(a5 - v7) >> 3;
  result = *(unsigned int *)a3;
  if ( (result & 2) != 0 )
  {
    v10 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    result = (a3 - v10) >> 9;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v10) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
