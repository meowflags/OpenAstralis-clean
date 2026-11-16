// sub_4F2A0E0
// rva 0x04f2a0e0  size 291  section .text  group text
// window base 0x184f2a0e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2A0E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+8h] [rbp-10h]
  __int64 v19; // [rsp+10h] [rbp-8h]

  v19 = a3;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_11;
  }
  v10 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v10 != 0 )
  {
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                                + *(_QWORD *)(v8
                                                                            + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3)
                                                                            + 136)))(
               a1,
               a2,
               a3: v8 + 8 * v10);
    if ( *(int *)(v9 + 16) > 0 )
      return result;
    return sub_277F280();
  }
  v12 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v12 == 0 )
  {
LABEL_11:
    v13 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v13 + 40) > *(_QWORD *)(v9 + 32) )
      goto LABEL_14;
    *(_QWORD *)(v9 + 40) = v13 + 40;
    *(_DWORD *)v13 = 34090048;
    *(_DWORD *)(v13 + 4) = 0;
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 16) = 0;
    *(_QWORD *)(v13 + 24) = 0;
    *(_QWORD *)(v13 + 32) = 0;
    while ( 1 )
    {
      *(_DWORD *)(v13 + 20) = 46923644;
      *(_DWORD *)(v13 + 16) = *(_DWORD *)(v8 + 374343896);
      *(_DWORD *)(v13 + 12) = (unsigned __int64)(v13 - v8) >> 3;
      v18 = v13;
      sub_503B9A0(a1, a2, a3: v13, a4, a5: 0);
      sub_2769900(a1: v15, a2: v16, a3: v18, a4: v14, a5: &a7);
LABEL_14:
      v13 = sub_1EAA920(a1, a2, a3: 34090048);
    }
  }
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                              + *(_QWORD *)(v8
                                                                          + 8LL * (*(_DWORD *)(v8 + 8 * v12) >> 3)
                                                                          + 144)))(
             a1,
             a2,
             a3: v8 + 8 * v12);
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
