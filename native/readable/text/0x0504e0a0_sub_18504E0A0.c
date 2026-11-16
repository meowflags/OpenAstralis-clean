// sub_504E0A0
// rva 0x0504e0a0  size 189  section .text  group text
// window base 0x18504e0a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504E0A0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 (*v9)(void); // rax
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-18h] BYREF
  __int64 v12; // [rsp+8h] [rbp-10h]
  _DWORD *v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    v12 = a5;
    v13 = a3;
    sub_1EB84E0();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v6
                                        + 8LL * *(unsigned int *)(v6 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v6 + 8LL * (*a3 >> 3) + 44)
                                         & (0x16BCu >> HIBYTE(*(_DWORD *)(v6 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 5820 )
  {
    v8 = *a3 >> 3;
    v9 = (__int64 (*)(void))(v5
                           + *(_QWORD *)(v6
                                       + 8 * v8
                                       + HIWORD(*(_DWORD *)(v6
                                                          + 8LL * *(unsigned int *)(v6 + 8 * v8 + 20)
                                                          + 4LL
                                                          * (*(_DWORD *)(v6 + 8 * v8 + 44)
                                                           & (0x16BCu >> HIBYTE(*(_DWORD *)(v6 + 8 * v8 + 44))))
                                                          + 12))
                                       + 32));
    v13 = a3;
    v12 = a5;
    result = v9();
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2770780();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_504E160();
}
