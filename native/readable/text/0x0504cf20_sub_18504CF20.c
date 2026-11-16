// sub_504CF20
// rva 0x0504cf20  size 220  section .text  group text
// window base 0x18504cf20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504CF20(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 result; // rax
  __int64 v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+8h] [rbp-10h]
  _DWORD *v19; // [rsp+10h] [rbp-8h]

  v19 = a3;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    v18 = a5;
    sub_1EB84E0();
    goto LABEL_6;
  }
  v18 = a5;
  v8 = sub_5FE0680(a1, a2, a3: a5);
  v11 = v19;
  v12 = (unsigned __int16)*(_DWORD *)(v6
                                    + 8LL * *(unsigned int *)(v6 + 8LL * (*v19 >> 3) + 20)
                                    + 4LL
                                    * (*(_DWORD *)(v6 + 8LL * (*v19 >> 3) + 44)
                                     & (0x1E99u >> HIBYTE(*(_DWORD *)(v6 + 8LL * (*v19 >> 3) + 44))))
                                    + 12);
  if ( (_DWORD)v12 != 7833 )
  {
LABEL_6:
    sub_2770780(a1: v9, a2: v10, a3: v11, a4: v12, a5: v18);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_504D000();
  }
  v13 = *v19 >> 3;
  v14 = *(_DWORD *)(v6 + 8 * v13 + 44) & (0x1E99u >> HIBYTE(*(_DWORD *)(v6 + 8 * v13 + 44)));
  v15 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v5
                                                                            + *(_QWORD *)(v6
                                                                                        + 8 * v13
                                                                                        + HIWORD(*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v13 + 20) + 4 * v14 + 12))
                                                                                        + 88));
  result = v15(a1: v9, a2: v14, a3: v19, a4: v15, a5: v8);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
