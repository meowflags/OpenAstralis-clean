// sub_4F20B00
// rva 0x04f20b00  size 203  section .text  group text
// window base 0x184f20b00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F20B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 result; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // [rsp+0h] [rbp-18h] BYREF
  __int64 v23; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v9 + 8) )
  {
    v23 = a3;
    sub_1EB84E0();
    goto LABEL_7;
  }
  v10 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_7:
    v23 = a3;
    sub_2771080();
    goto LABEL_8;
  }
  v11 = *(_DWORD *)(v8 + 8 * v10) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v8
                                   + 8LL * *(unsigned int *)(v8 + 8 * v11 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v8 + 8 * v11 + 44) & (0x7F0u >> HIBYTE(*(_DWORD *)(v8 + 8 * v11 + 44))))
                                   + 12) != 2032 )
  {
LABEL_8:
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
    return sub_4F20BE0(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21, a7);
  }
  v23 = a3;
  v12 = *(_DWORD *)(v8 + 8 * v10) >> 3;
  v13 = v8 + 8LL * *(unsigned int *)(v8 + 8 * v12 + 20);
  v14 = *(_DWORD *)(v8 + 8 * v12 + 44) & (0x7F0u >> HIBYTE(*(_DWORD *)(v8 + 8 * v12 + 44)));
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                              + *(_QWORD *)(v8
                                                                          + 8 * v12
                                                                          + HIWORD(*(_DWORD *)(v13 + 4 * v14 + 12))
                                                                          + 8)))(
             a1: v14,
             a2: v13,
             a3: v8 + 8 * v10);
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
