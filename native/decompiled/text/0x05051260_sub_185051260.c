// sub_185051260
// rva 0x05051260  size 477  section .text  group text
// window base 0x185051260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_185051260(__int64 a1, char *a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  char *result; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // edi
  int v20; // esi
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  __int64 v24; // [rsp+10h] [rbp-28h]
  __int64 v25; // [rsp+18h] [rbp-20h]
  __int64 v26; // [rsp+20h] [rbp-18h]
  char *v27; // [rsp+28h] [rbp-10h]
  _DWORD *v28; // [rsp+30h] [rbp-8h]

  v28 = a3;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v9 + 8) )
  {
    v27 = a2;
    v26 = a1;
    v25 = a6;
    v24 = a5;
    MEMORY[0x181EB84E0]();
LABEL_15:
    result = (char *)MEMORY[0x182770780]();
LABEL_16:
    MEMORY[0x18276FC00](a1: v26, a2: v27, a3: result, a4: v28, a5: v8 + 43311960, a6: v25);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (char *)sub_185051440(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21, a6: v22, a7);
  }
  if ( a2 == v8 )
  {
    v10 = (__int64)(v8 + 376426880);
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v10 + 16) > *(_QWORD *)(v9 + 32) )
    {
      v27 = a2;
      v26 = a1;
      v25 = a6;
      v24 = a5;
      v10 = MEMORY[0x181EAA920](a1, a2, a3: 34201016);
      a2 = v27;
      a1 = v26;
      a6 = v25;
      a5 = v24;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v10 + 16;
      *(_DWORD *)v10 = 34201016;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
    }
    *(_DWORD *)(v10 + 4) = (unsigned __int64)(a2 - v8) >> 3;
  }
  v27 = a2;
  v26 = a1;
  v24 = a5;
  v25 = a6;
  v11 = MEMORY[0x18505FB00](a1: v10, a2, a3: a1);
  if ( (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*v28 >> 3) + 20]
                                      + 12
                                      + 4
                                      * (*(_DWORD *)&v8[8 * (*v28 >> 3) + 44]
                                       & (0x1E9Du >> HIBYTE(*(_DWORD *)&v8[8 * (*v28 >> 3) + 44])))] != 7837 )
    goto LABEL_15;
  v13 = *v28 >> 3;
  v14 = *(_DWORD *)&v8[8 * v13 + 44] & (0x16BCu >> HIBYTE(*(_DWORD *)&v8[8 * v13 + 44]));
  v15 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v7
                                                                            + *(_QWORD *)&v8[8 * v13
                                                                                           + 32
                                                                                           + HIWORD(*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v13 + 20] + 12 + 4 * v14])]);
  result = (char *)v15(a1: v12, a2: v14, a3: v28, a4: v15, a5: v11);
  if ( result != v8
    && (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*(_DWORD *)result >> 3) + 20]
                                      + 12
                                      + 4
                                      * (*(_DWORD *)&v8[8 * (*(_DWORD *)result >> 3) + 44]
                                       & (0x1E9Du >> HIBYTE(*(_DWORD *)&v8[8 * (*(_DWORD *)result >> 3) + 44])))] != 7837 )
  {
    goto LABEL_16;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return (char *)MEMORY[0x18277F280]();
  return result;
}
