// sub_185036D00
// rva 0x05036d00  size 397  section .text  group text
// window base 0x185036d00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185036D00(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+8h] [rbp-10h]
  unsigned __int64 v19; // [rsp+10h] [rbp-8h]

  result = (__int64)a5;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_11;
  }
  v10 = (unsigned int)__sync_fetch_and_add((volatile signed __int32 *)(v7 + 376362380), 0x61C88647u);
  *(_DWORD *)(a3 + 4) = v10;
  if ( a5 == (_DWORD *)v7 )
  {
LABEL_11:
    v13 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v13 + 48) > *(_QWORD *)(v8 + 32) )
      goto LABEL_15;
    *(_QWORD *)(v8 + 40) = v13 + 48;
    *(_DWORD *)v13 = 34101256;
    *(_DWORD *)(v13 + 4) = 0;
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 16) = 0;
    *(_QWORD *)(v13 + 24) = 0;
    *(_QWORD *)(v13 + 32) = 0;
    *(_QWORD *)(v13 + 40) = 0;
    v19 = a3;
    goto LABEL_13;
  }
  v11 = (unsigned __int16)*(_DWORD *)(v7
                                    + 8LL * *(unsigned int *)(v7 + 8LL * (*a5 >> 3) + 20)
                                    + 4LL
                                    * (*(_DWORD *)(v7 + 8LL * (*a5 >> 3) + 44)
                                     & (0x654u >> HIBYTE(*(_DWORD *)(v7 + 8LL * (*a5 >> 3) + 44))))
                                    + 12);
  if ( (_DWORD)v11 != 1620 )
  {
    while ( 1 )
    {
      v19 = a3;
      MEMORY[0x18276FC00](a1, a2, a3: result, a4: v11, a5: v7 + 34193080);
LABEL_15:
      v19 = a3;
      v13 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
LABEL_13:
      *(_DWORD *)(v13 + 20) = 46923644;
      *(_DWORD *)(v13 + 16) = *(_DWORD *)(v7 + 374343896);
      *(_DWORD *)(v13 + 12) = (unsigned __int64)(v13 - v7) >> 3;
      v18 = v13;
      sub_18503B9A0(a1, a2, a3: v13, a4: v10, a5: 0);
      result = MEMORY[0x182769900](a1: v15, a2: v16, a3: v18, a4: v14, a5: &a7);
    }
  }
  *(_DWORD *)(a3 + 8) = ((unsigned __int64)a5 - v7) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v12 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v12) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v12) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
