// sub_4F25CC0
// rva 0x04f25cc0  size 432  section .text  group text
// window base 0x184f25cc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F25CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64, __int64); // rcx
  int v15; // eax
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdi
  char v23; // [rsp+0h] [rbp-18h] BYREF
  __int64 v24; // [rsp+8h] [rbp-10h]
  int v25; // [rsp+14h] [rbp-4h]

  v24 = a3;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_13;
  }
  sub_4F25A20(a1, a2, a3, a4, a5, a6, a7: v23);
  v9 = *(unsigned int *)(v24 + 12);
  if ( (_DWORD)v9 == 0 )
  {
LABEL_13:
    sub_2771080();
    goto LABEL_14;
  }
  v10 = *(_DWORD *)(v7 + 8 * v9) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v7
                                   + 8LL * *(unsigned int *)(v7 + 8 * v10 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v7 + 8 * v10 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v7 + 8 * v10 + 44))))
                                   + 12) != 1384 )
  {
LABEL_14:
    sub_2770780();
LABEL_15:
    sub_2771080();
    goto LABEL_16;
  }
  v11 = *(_DWORD *)(v7 + 8 * v9) >> 3;
  v12 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v11 + 20);
  v13 = *(_DWORD *)(v7 + 8 * v11 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v7 + 8 * v11 + 44)));
  v14 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v6
                                                          + *(_QWORD *)(v7
                                                                      + 8 * v11
                                                                      + HIWORD(*(_DWORD *)(v12 + 4 * v13 + 12))
                                                                      + 40));
  v25 = *(_DWORD *)(v24 + 16);
  v15 = v14(a1: v13, a2: v12, a3: v7 + 8 * v9);
  if ( v15 <= v25 )
  {
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return 0xFFFFFFFFLL;
  }
  v17 = v24;
  ++*(_DWORD *)(v24 + 16);
  v18 = *(unsigned int *)(v17 + 12);
  if ( (_DWORD)v18 == 0 )
    goto LABEL_15;
  v19 = *(_DWORD *)(v7 + 8 * v18) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v7
                                   + 8LL * *(unsigned int *)(v7 + 8 * v19 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v7 + 8 * v19 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v7 + 8 * v19 + 44))))
                                   + 12) != 1384 )
  {
LABEL_16:
    sub_2770780();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F25E80();
  }
  v20 = *(_DWORD *)(v7 + 8 * v18) >> 3;
  v21 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v20 + 20);
  v22 = *(_DWORD *)(v7 + 8 * v20 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v7 + 8 * v20 + 44)));
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v6
                                                              + *(_QWORD *)(v7
                                                                          + 8 * v20
                                                                          + HIWORD(*(_DWORD *)(v21 + 4 * v22 + 12)))))(
             a1: v22,
             a2: v21,
             a3: v7 + 8 * v18);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
