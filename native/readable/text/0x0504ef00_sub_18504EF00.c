// sub_504EF00
// rva 0x0504ef00  size 207  section .text  group text
// window base 0x18504ef00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504EF00(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *, _DWORD *, __int64, _QWORD); // rax
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+8h] [rbp-10h]
  unsigned int v13; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    v13 = a5;
    v12 = a3;
    sub_1EB84E0();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v6
                                        + 8LL * *(unsigned int *)(v6 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v6 + 8LL * (*a3 >> 3) + 44)
                                         & (0x1E9Du >> HIBYTE(*(_DWORD *)(v6 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 7837 )
  {
    v8 = *a3 >> 3;
    v9 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64, _QWORD))(v5
                                                                                       + *(_QWORD *)(v6 + 8 * v8 + HIWORD(*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v8 + 20) + 4LL * (*(_DWORD *)(v6 + 8 * v8 + 44) & (0x1E9Du >> HIBYTE(*(_DWORD *)(v6 + 8 * v8 + 44)))) + 12)) + 1376));
    v12 = a3;
    v13 = a5;
    result = v9(a1, a2, a3, a4: a3, a5: v6 + 377212952, a6: a5);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
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
  __builtin_debugtrap();
  return sub_504EFE0();
}
