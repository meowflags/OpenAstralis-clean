// sub_5057F00
// rva 0x05057f00  size 190  section .text  group text
// window base 0x185057f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5057F00(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 (__fastcall *v7)(__int64, __int64, _DWORD *, _DWORD *, __int64); // rax
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v5 + 8) )
  {
    v10 = a3;
    sub_1EB84E0();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v4
                                        + 8LL * *(unsigned int *)(v4 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v4 + 8LL * (*a3 >> 3) + 44)
                                         & (0x1E9Du >> HIBYTE(*(_DWORD *)(v4 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 7837 )
  {
    v6 = *a3 >> 3;
    v7 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64))(v3
                                                                               + *(_QWORD *)(v4
                                                                                           + 8 * v6
                                                                                           + HIWORD(*(_DWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 8 * v6 + 20) + 4LL * (*(_DWORD *)(v4 + 8 * v6 + 44) & (0x1E9Du >> HIBYTE(*(_DWORD *)(v4 + 8 * v6 + 44)))) + 12))
                                                                                           + 1648));
    v10 = a3;
    result = v7(a1, a2, a3, a4: a3, a5: v4 + 377215328);
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2770780();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_5057FC0();
}
