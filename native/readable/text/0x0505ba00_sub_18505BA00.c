// sub_505BA00
// rva 0x0505ba00  size 217  section .text  group text
// window base 0x18505ba00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_505BA00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // ebp
  __int64 (__fastcall *v12)(__int64, __int64, __int64); // rcx
  int v13; // eax
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  int v17; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v5 + 8) )
  {
    v16 = a3;
    sub_1EB84E0();
    goto LABEL_8;
  }
  v6 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v6 == 0 )
  {
LABEL_8:
    v16 = a3;
    sub_2771080();
    goto LABEL_9;
  }
  v7 = *(_DWORD *)(v4 + 8 * v6) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v4
                                   + 8LL * *(unsigned int *)(v4 + 8 * v7 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v4 + 8 * v7 + 44) & (0x16D4u >> HIBYTE(*(_DWORD *)(v4 + 8 * v7 + 44))))
                                   + 12) != 5844 )
  {
LABEL_9:
    sub_2770780();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_505BAE0();
  }
  v8 = *(_DWORD *)(v4 + 8 * v6) >> 3;
  v9 = v4 + 8LL * *(unsigned int *)(v4 + 8 * v8 + 20);
  v10 = *(_DWORD *)(v4 + 8 * v8 + 44) & (0x16D4u >> HIBYTE(*(_DWORD *)(v4 + 8 * v8 + 44)));
  v11 = *(_DWORD *)(a3 + 8);
  v12 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v3
                                                          + *(_QWORD *)(v4
                                                                      + 8 * v8
                                                                      + HIWORD(*(_DWORD *)(v9 + 4 * v10 + 12))
                                                                      + 40));
  v16 = a3;
  v17 = v11;
  v13 = v12(a1: v10, a2: v9, a3: v4 + 8 * v6);
  if ( *(int *)(v5 + 16) <= 0 )
    v13 = sub_277F280();
  return v13 > v17;
}
