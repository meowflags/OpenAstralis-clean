// sub_1594DA0
// rva 0x01594da0  size 246  section .text  group text
// window base 0x181594da0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1594DA0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 i; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi

  v3 = *(unsigned int *)(v2 + 376612528);
  if ( (_DWORD)v3 == 0
    || (v4 = *(_DWORD *)(v2 + 8 * v3) >> 3,
        v5 = *(_DWORD *)(v2 + 8 * v4 + 44) & (0x1EEu >> HIBYTE(*(_DWORD *)(v2 + 8 * v4 + 44))),
        ((void (__fastcall *)(__int64, __int64, __int64))(v1
                                                        + *(_QWORD *)(v2
                                                                    + 8 * v4
                                                                    + HIWORD(*(_DWORD *)(v2
                                                                                       + 8LL
                                                                                       * *(unsigned int *)(v2 + 8 * v4 + 20)
                                                                                       + 4 * v5
                                                                                       + 12))
                                                                    + 8)))(
          a1,
          a2: v5,
          a3: v2 + 8 * v3),
        (_DWORD)(v7 = *(unsigned int *)(v2 + 376612524)) == 0) )
  {
    for ( i = sub_276E420(); ; i = sub_28C1D00(a1: v12, a2: v13, a3: i) )
      ;
  }
  v8 = *(_DWORD *)(v2 + 8 * v7) >> 3;
  v9 = *(_DWORD *)(v2 + 8 * v8 + 44) & (0x1EEu >> HIBYTE(*(_DWORD *)(v2 + 8 * v8 + 44)));
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))(v1
                                                            + *(_QWORD *)(v2
                                                                        + 8 * v8
                                                                        + HIWORD(*(_DWORD *)(v2
                                                                                           + 8LL
                                                                                           * *(unsigned int *)(v2 + 8 * v8 + 20)
                                                                                           + 4 * v9
                                                                                           + 12))
                                                                        + 8)))(
           a1: v6,
           a2: v9,
           a3: v2 + 8 * v7);
}
