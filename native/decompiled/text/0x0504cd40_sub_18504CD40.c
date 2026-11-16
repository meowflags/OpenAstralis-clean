// sub_18504CD40
// rva 0x0504cd40  size 458  section .text  group text
// window base 0x18504cd40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504CD40(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // [rsp+0h] [rbp-28h] BYREF
  __int64 v25; // [rsp+10h] [rbp-18h]
  _DWORD *v26; // [rsp+18h] [rbp-10h]
  __int64 v27; // [rsp+20h] [rbp-8h]

  v27 = a5;
  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v12 + 8) )
  {
    v26 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v11 )
  {
    if ( (unsigned __int16)*(_DWORD *)(v11
                                     + 8LL * *(unsigned int *)(v11 + 8LL * (*a3 >> 3) + 20)
                                     + 4LL
                                     * (*(_DWORD *)(v11 + 8LL * (*a3 >> 3) + 44)
                                      & (0x1E99u >> HIBYTE(*(_DWORD *)(v11 + 8LL * (*a3 >> 3) + 44))))
                                     + 12) != 7833 )
    {
      while ( 1 )
      {
        v26 = a3;
        MEMORY[0x182770780]();
LABEL_12:
        v20 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
LABEL_10:
        *(_DWORD *)(v20 + 20) = 46923644;
        *(_DWORD *)(v20 + 16) = *(_DWORD *)(v11 + 374343896);
        *(_DWORD *)(v20 + 12) = (unsigned __int64)(v20 - v11) >> 3;
        v25 = v20;
        sub_18503B9A0(a1, a2, a3: (unsigned int *)v20, a4, a5: 0);
        MEMORY[0x182769900](a1: v22, a2: v23, a3: v25, a4: v21, a5: &a7);
      }
    }
    v13 = *(_QWORD *)(v12 + 40);
    if ( (unsigned __int64)(v13 + 24) > *(_QWORD *)(v12 + 32) )
      return sub_18504CE2E(a1, a2, (_DWORD)a3, a4: v13, a5, a6, a7, a8, a9, a10);
    *(_QWORD *)(v12 + 40) = v13 + 24;
    *(_DWORD *)v13 = 34228624;
    *(_DWORD *)(v13 + 4) = 0;
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 16) = 0;
    v14 = v13;
    *(_DWORD *)(v13 + 8) = (unsigned __int64)(a5 - v11) >> 3;
    v15 = *a3 >> 3;
    v16 = v11 + 8LL * *(unsigned int *)(v11 + 8 * v15 + 20);
    v17 = *(_DWORD *)(v11 + 8 * v15 + 44) & (0x1E99u >> HIBYTE(*(_DWORD *)(v11 + 8 * v15 + 44)));
    v18 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v10
                                                                              + *(_QWORD *)(v11
                                                                                          + 8 * v15
                                                                                          + HIWORD(*(_DWORD *)(v16 + 4 * v17 + 12))
                                                                                          + 72));
    v26 = a3;
    result = v18(a1: v17, a2: v16, a3, a4: v18, a5: v14);
    if ( *(int *)(v12 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v26 = a3;
  v20 = *(_QWORD *)(v12 + 40);
  if ( (unsigned __int64)(v20 + 48) > *(_QWORD *)(v12 + 32) )
    goto LABEL_12;
  *(_QWORD *)(v12 + 40) = v20 + 48;
  *(_DWORD *)v20 = 34101256;
  *(_DWORD *)(v20 + 4) = 0;
  *(_QWORD *)(v20 + 8) = 0;
  *(_QWORD *)(v20 + 16) = 0;
  *(_QWORD *)(v20 + 24) = 0;
  *(_QWORD *)(v20 + 32) = 0;
  *(_QWORD *)(v20 + 40) = 0;
  goto LABEL_10;
}
