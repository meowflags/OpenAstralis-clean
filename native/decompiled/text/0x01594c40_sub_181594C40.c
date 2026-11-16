// sub_181594C40
// rva 0x01594c40  size 323  section .text  group text
// window base 0x181594c40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181594C40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 i; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi

  v7 = *(unsigned int *)(v6 + 376612524);
  if ( (_DWORD)v7 == 0
    || (v8 = *(_DWORD *)(v6 + 8 * v7) >> 3,
        v9 = *(_DWORD *)(v6 + 8 * v8 + 44) & (0x1EEu >> HIBYTE(*(_DWORD *)(v6 + 8 * v8 + 44))),
        ((void (__fastcall *)(__int64, __int64, __int64, __int64))(v5
                                                                 + *(_QWORD *)(v6
                                                                             + 8 * v8
                                                                             + HIWORD(*(_DWORD *)(v6
                                                                                                + 8LL
                                                                                                * *(unsigned int *)(v6 + 8 * v8 + 20)
                                                                                                + 4 * v9
                                                                                                + 12)))))(
          a1,
          a2: v9,
          a3: v6 + 8 * v7,
          a4: a5),
        (_DWORD)(v12 = *(unsigned int *)(v6 + 376612528)) == 0) )
  {
    for ( i = MEMORY[0x18276E420](); ; i = MEMORY[0x1828C1D00](a1: v16, a2: v17, a3: i) )
      ;
  }
  v13 = *(_DWORD *)(v6 + 8 * v12) >> 3;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64))(v5
                                                                             + *(_QWORD *)(v6
                                                                                         + 8 * v13
                                                                                         + HIWORD(*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v13 + 20) + 4LL * (*(_DWORD *)(v6 + 8 * v13 + 44) & (0x1EEu >> HIBYTE(*(_DWORD *)(v6 + 8 * v13 + 44)))) + 12)))))(
           a1: v10,
           a2: v11,
           a3: v6 + 8 * v12,
           a4: HIBYTE(*(_DWORD *)(v6 + 8 * v13 + 44)),
           a5);
}
