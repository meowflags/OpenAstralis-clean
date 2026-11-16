// sub_18501C9C0
// rva 0x0501c9c0  size 485  section .text  group text
// window base 0x18501c9c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501C9C0(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rsi
  void (__fastcall *v16)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  char v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+10h] [rbp-18h]
  unsigned int *v25; // [rsp+18h] [rbp-10h]
  _DWORD *v26; // [rsp+20h] [rbp-8h]

  v26 = (_DWORD *)a5;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v11 + 8) )
  {
    v25 = a3;
    MEMORY[0x181EB84E0]();
LABEL_9:
    v25 = a3;
    v18 = *(_QWORD *)(v11 + 40);
    if ( (unsigned __int64)(v18 + 48) > *(_QWORD *)(v11 + 32) )
    {
      v18 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v18 + 48;
      *(_DWORD *)v18 = 34101256;
      *(_DWORD *)(v18 + 4) = 0;
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = 0;
      *(_QWORD *)(v18 + 24) = 0;
      *(_QWORD *)(v18 + 32) = 0;
      *(_QWORD *)(v18 + 40) = 0;
    }
    *(_DWORD *)(v18 + 20) = 46923644;
    *(_DWORD *)(v18 + 16) = *(_DWORD *)(v10 + 374343896);
    *(_DWORD *)(v18 + 12) = (unsigned __int64)(v18 - v10) >> 3;
    v24 = v18;
    sub_18503B9A0(a1, a2, a3: v18, a4, a5: 0);
    v22 = v24;
    *(_DWORD *)(v24 + 8) = 43871089;
    if ( (*(_DWORD *)v22 & 2) != 0 )
      goto LABEL_14;
    goto LABEL_12;
  }
  if ( a5 == v10 )
    goto LABEL_9;
  if ( a3[2] == a3[3] )
    return sub_18501CA87(a1, a2, (_DWORD)a3, a4, a5, a6, a7, a8, a9);
  v25 = a3;
  v12 = sub_18501C860(a1, a2, a3, a4, a5, a6, a7: v23);
  if ( (unsigned __int16)*(_DWORD *)(v10
                                   + 8LL * *(unsigned int *)(v10 + 8LL * (*v26 >> 3) + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v10 + 8LL * (*v26 >> 3) + 44)
                                    & (0x636u >> HIBYTE(*(_DWORD *)(v10 + 8LL * (*v26 >> 3) + 44))))
                                   + 12) != 1590 )
  {
    while ( 1 )
    {
      v22 = MEMORY[0x182770780]();
LABEL_14:
      v19 = (v22 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v19) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v19) >> 9) + 0x38) = 0;
LABEL_12:
      MEMORY[0x182769900](a1: v20, a2: v21, a3: v22, a4: v19, a5: &a7);
    }
  }
  v14 = *v26 >> 3;
  v15 = *(_DWORD *)(v10 + 8 * v14 + 44) & (0x636u >> HIBYTE(*(_DWORD *)(v10 + 8 * v14 + 44)));
  v16 = (void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v9
                                                                         + *(_QWORD *)(v10
                                                                                     + 8 * v14
                                                                                     + HIWORD(*(_DWORD *)(v10 + 8LL * *(unsigned int *)(v10 + 8 * v14 + 20) + 4 * v15 + 12))));
  v16(a1: v13, a2: v15, a3: v26, a4: v16, a5: v12);
  if ( *(int *)(v11 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return 1;
}
