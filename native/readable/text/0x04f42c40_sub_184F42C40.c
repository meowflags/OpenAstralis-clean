// sub_4F42C40
// rva 0x04f42c40  size 397  section .text  group text
// window base 0x184f42c40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F42C40(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _DWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // [rsp+0h] [rbp-18h] BYREF
  __int64 v25; // [rsp+8h] [rbp-10h]
  _DWORD *v26; // [rsp+10h] [rbp-8h]

  v26 = a3;
  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v7
                                                                               + *(_QWORD *)(v8 + 8LL * (*a3 >> 3) + 128)))(
              a1,
              a2,
              a3,
              a4: a3) != 0 )
  {
    v13 = v26;
    ++v26[2];
    v14 = (unsigned int)v13[1];
    if ( (_DWORD)v14 == 0 )
      goto LABEL_11;
    v15 = *(_DWORD *)(v8 + 8 * v14) >> 3;
    if ( (unsigned __int16)*(_DWORD *)(v8
                                     + 8LL * *(unsigned int *)(v8 + 8 * v15 + 20)
                                     + 4LL
                                     * (*(_DWORD *)(v8 + 8 * v15 + 44)
                                      & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8 * v15 + 44))))
                                     + 12) != 1384 )
    {
      while ( 1 )
      {
        sub_2770780();
LABEL_13:
        v20 = sub_1EAA920(a1: v11, a2: v12, a3: 34152072);
LABEL_10:
        *(_DWORD *)(v20 + 20) = 46923644;
        *(_DWORD *)(v20 + 16) = *(_DWORD *)(v8 + 374343896);
        *(_DWORD *)(v20 + 12) = (unsigned __int64)(v20 - v8) >> 3;
        v25 = v20;
        sub_503B9A0(a1: v11, a2: v12, a3: v20, a4: v10, a5: 0);
        sub_2769900(a1: v22, a2: v23, a3: v25, a4: v21, a5: &a7);
LABEL_11:
        sub_2771080();
      }
    }
    v16 = *(_DWORD *)(v8 + 8 * v14) >> 3;
    v17 = v8 + 8LL * *(unsigned int *)(v8 + 8 * v16 + 20);
    v18 = *(_DWORD *)(v8 + 8 * v16 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8 * v16 + 44)));
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                                + *(_QWORD *)(v8
                                                                            + 8 * v16
                                                                            + HIWORD(*(_DWORD *)(v17 + 4 * v18 + 12)))))(
               a1: v18,
               a2: v17,
               a3: v8 + 8 * v14);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  v20 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v20 + 40) > *(_QWORD *)(v9 + 32) )
    goto LABEL_13;
  *(_QWORD *)(v9 + 40) = v20 + 40;
  *(_DWORD *)v20 = 34152072;
  *(_DWORD *)(v20 + 4) = 0;
  *(_QWORD *)(v20 + 8) = 0;
  *(_QWORD *)(v20 + 16) = 0;
  *(_QWORD *)(v20 + 24) = 0;
  *(_QWORD *)(v20 + 32) = 0;
  goto LABEL_10;
}
