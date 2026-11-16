// sub_1E8A8E0
// rva 0x01e8a8e0  size 267  section .text  group text
// window base 0x181e8a8e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1E8A8E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  char v16; // [rsp+0h] [rbp-8h] BYREF

  v9 = v7 + 376654936;
  v10 = v7 + 376655624;
  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0(a1, a2, a3: v9, a4, a5: v10, a6, a7: v16);
LABEL_12:
    sub_2771080();
    goto LABEL_13;
  }
  v11 = *(unsigned int *)(v7 + 376654972);
  if ( (_DWORD)v11 != 0 && *(_DWORD *)(v7 + 8 * v11) >> 3 == 5057809
    || (unsigned int)sub_1E8B260(a1, a2, a3: v9, a4, a5: v10, a6: 1) == 0 )
  {
    goto LABEL_4;
  }
  v12 = *(unsigned int *)(v7 + 376654972);
  if ( (_DWORD)v12 == 0 )
    goto LABEL_12;
  v13 = *(_DWORD *)(v7 + 8 * v12) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v7
                                   + 8LL * *(unsigned int *)(v7 + 8 * v13 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v7 + 8 * v13 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v13 + 44))))
                                   + 12) != 519 )
  {
LABEL_13:
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_1E8AA00();
    return;
  }
  v14 = *(_DWORD *)(v7 + 8 * v12) >> 3;
  v15 = *(_DWORD *)(v7 + 8 * v14 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v14 + 44)));
  ((void (__fastcall *)(__int64, __int64, __int64))(v6
                                                  + *(_QWORD *)(v7
                                                              + 8 * v14
                                                              + HIWORD(*(_DWORD *)(v7
                                                                                 + 8LL
                                                                                 * *(unsigned int *)(v7 + 8 * v14 + 20)
                                                                                 + 4 * v15
                                                                                 + 12))
                                                              + 160)))(
    a1,
    a2: v15,
    a3: v7 + 8 * v12);
LABEL_4:
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1, a2, a3: v9, a4, a5: v10);
}
