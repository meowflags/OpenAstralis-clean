// sub_505AA40
// rva 0x0505aa40  size 190  section .text  group text
// window base 0x18505aa40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_505AA40(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 (*v7)(void); // rax
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v5 + 8) )
  {
    v14 = a3;
    sub_1EB84E0();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v4
                                        + 8LL * *(unsigned int *)(v4 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v4 + 8LL * (*a3 >> 3) + 44)
                                         & (0x1EB5u >> HIBYTE(*(_DWORD *)(v4 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 7861 )
  {
    v6 = *a3 >> 3;
    v7 = (__int64 (*)(void))(v3
                           + *(_QWORD *)(v4
                                       + 8 * v6
                                       + HIWORD(*(_DWORD *)(v4
                                                          + 8LL * *(unsigned int *)(v4 + 8 * v6 + 20)
                                                          + 4LL
                                                          * (*(_DWORD *)(v4 + 8 * v6 + 44)
                                                           & (0x1EB5u >> HIBYTE(*(_DWORD *)(v4 + 8 * v6 + 44))))
                                                          + 12))
                                       + 24));
    v14 = a3;
    v8 = v7();
    result = sub_53F42E0(a1: v10, a2: v11, a3: v8, a4: v9, a5: v4 + 377215984);
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2770780();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_505AB00();
}
