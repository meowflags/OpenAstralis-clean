// sub_5057C20
// rva 0x05057c20  size 239  section .text  group text
// window base 0x185057c20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5057C20(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *, _DWORD *, __int64, __int64); // rax
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13; // [rsp+8h] [rbp-20h]
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  _DWORD *v16; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v8 + 8) )
  {
    v13 = a1;
    v14 = a6;
    v15 = a5;
    v16 = a3;
    sub_1EB84E0();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v7
                                        + 8LL * *(unsigned int *)(v7 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v7 + 8LL * (*a3 >> 3) + 44)
                                         & (0x1E9Du >> HIBYTE(*(_DWORD *)(v7 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 7837 )
  {
    v9 = *a3 >> 3;
    v10 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64, __int64))(v6
                                                                                         + *(_QWORD *)(v7 + 8 * v9 + HIWORD(*(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v9 + 20) + 4LL * (*(_DWORD *)(v7 + 8 * v9 + 44) & (0x1E9Du >> HIBYTE(*(_DWORD *)(v7 + 8 * v9 + 44)))) + 12)) + 528));
    v16 = a3;
    v15 = a5;
    v14 = a6;
    v13 = a1;
    result = v10(a1: a6, a2: a1, a3, a4: a3, a5: v7 + 377215248, a6: a5);
    if ( *(int *)(v8 + 16) <= 0 )
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
  return sub_5057D20();
}
