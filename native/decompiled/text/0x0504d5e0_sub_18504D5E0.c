// sub_18504D5E0
// rva 0x0504d5e0  size 532  section .text  group text
// window base 0x18504d5e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_18504D5E0(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        char *a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r13
  char *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  char *v16; // rsi
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, char *, _DWORD *, _QWORD, __int64); // rcx
  char *result; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // [rsp+0h] [rbp-28h] BYREF
  __int64 v28; // [rsp+10h] [rbp-18h]
  _DWORD *v29; // [rsp+18h] [rbp-10h]
  char *v30; // [rsp+20h] [rbp-8h]

  v30 = a5;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v12 + 8) )
  {
    v29 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v11 )
  {
    if ( (unsigned __int16)*(_DWORD *)&v11[8 * *(unsigned int *)&v11[8 * (*a3 >> 3) + 20]
                                         + 12
                                         + 4
                                         * (*(_DWORD *)&v11[8 * (*a3 >> 3) + 44]
                                          & (0x1E99u >> HIBYTE(*(_DWORD *)&v11[8 * (*a3 >> 3) + 44])))] != 7833 )
      goto LABEL_13;
    v13 = *(_QWORD *)(v12 + 40);
    if ( (unsigned __int64)(v13 + 16) > *(_QWORD *)(v12 + 32) )
      return (char *)sub_18504D707(a1, a2, (_DWORD)a3, a4: v13, (_DWORD)a5, a6, a7, a8, a9, a10);
    *(_QWORD *)(v12 + 40) = v13 + 16;
    *(_DWORD *)v13 = 43310464;
    *(_DWORD *)(v13 + 4) = 0;
    *(_QWORD *)(v13 + 8) = 0;
    v14 = v13;
    *(_DWORD *)(v13 + 4) = (unsigned __int64)(a5 - v11) >> 3;
    v15 = *a3 >> 3;
    v16 = &v11[8 * *(unsigned int *)&v11[8 * v15 + 20]];
    v17 = *(_DWORD *)&v11[8 * v15 + 44] & (0x16BCu >> HIBYTE(*(_DWORD *)&v11[8 * v15 + 44]));
    v18 = (__int64 (__fastcall *)(__int64, char *, _DWORD *, _QWORD, __int64))(v10
                                                                             + *(_QWORD *)&v11[8 * v15
                                                                                             + 32
                                                                                             + HIWORD(*(_DWORD *)&v16[4 * v17 + 12])]);
    v29 = a3;
    result = (char *)v18(a1: v17, a2: v16, a3, a4: v18, a5: v14);
    if ( result != v11 )
    {
      v22 = (unsigned __int16)*(_DWORD *)&v11[8 * *(unsigned int *)&v11[8 * (*(_DWORD *)result >> 3) + 20]
                                            + 12
                                            + 4
                                            * (*(_DWORD *)&v11[8 * (*(_DWORD *)result >> 3) + 44]
                                             & (0x1E99u >> HIBYTE(*(_DWORD *)&v11[8 * (*(_DWORD *)result >> 3) + 44])))];
      if ( (_DWORD)v22 != 7833 )
      {
        while ( 1 )
        {
          MEMORY[0x18276FC00](a1: v20, a2: v21, a3: result, a4: v22, a5: v11 + 43291432);
LABEL_15:
          v23 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
LABEL_12:
          *(_DWORD *)(v23 + 20) = 46923644;
          *(_DWORD *)(v23 + 16) = *((_DWORD *)v11 + 93585974);
          *(_DWORD *)(v23 + 12) = (unsigned __int64)(v23 - (_QWORD)v11) >> 3;
          v28 = v23;
          sub_18503B9A0(a1, a2, a3: (unsigned int *)v23, a4, a5: 0);
          MEMORY[0x182769900](a1: v25, a2: v26, a3: v28, a4: v24, a5: &a7);
LABEL_13:
          v29 = a3;
          result = (char *)MEMORY[0x182770780]();
        }
      }
    }
    if ( *(int *)(v12 + 16) <= 0 )
      return (char *)MEMORY[0x18277F280]();
    return result;
  }
  v29 = a3;
  v23 = *(_QWORD *)(v12 + 40);
  if ( (unsigned __int64)(v23 + 48) > *(_QWORD *)(v12 + 32) )
    goto LABEL_15;
  *(_QWORD *)(v12 + 40) = v23 + 48;
  *(_DWORD *)v23 = 34101256;
  *(_DWORD *)(v23 + 4) = 0;
  *(_QWORD *)(v23 + 8) = 0;
  *(_QWORD *)(v23 + 16) = 0;
  *(_QWORD *)(v23 + 24) = 0;
  *(_QWORD *)(v23 + 32) = 0;
  *(_QWORD *)(v23 + 40) = 0;
  goto LABEL_12;
}
