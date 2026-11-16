// sub_4F43720
// rva 0x04f43720  size 217  section .text  group text
// window base 0x184f43720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F43720(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  int v15; // ebp
  __int64 (__fastcall *v16)(__int64, __int64, __int64); // rcx
  int v17; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // [rsp+0h] [rbp-18h] BYREF
  __int64 v26; // [rsp+8h] [rbp-10h]
  int v27; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v9 + 8) )
  {
    v26 = a3;
    sub_1EB84E0();
    goto LABEL_8;
  }
  v10 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_8:
    v26 = a3;
    sub_2771080();
    goto LABEL_9;
  }
  v11 = *(_DWORD *)(v8 + 8 * v10) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v8
                                   + 8LL * *(unsigned int *)(v8 + 8 * v11 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v8 + 8 * v11 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8 * v11 + 44))))
                                   + 12) != 1384 )
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
    return sub_4F43800(a1: v21, a2: v22, a3: v19, a4: v20, a5: v23, a6: v24, a7);
  }
  v12 = *(_DWORD *)(v8 + 8 * v10) >> 3;
  v13 = v8 + 8LL * *(unsigned int *)(v8 + 8 * v12 + 20);
  v14 = *(_DWORD *)(v8 + 8 * v12 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8 * v12 + 44)));
  v15 = *(_DWORD *)(a3 + 8);
  v16 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                          + *(_QWORD *)(v8
                                                                      + 8 * v12
                                                                      + HIWORD(*(_DWORD *)(v13 + 4 * v14 + 12))
                                                                      + 40));
  v26 = a3;
  v27 = v15;
  v17 = v16(a1: v14, a2: v13, a3: v8 + 8 * v10);
  if ( *(int *)(v9 + 16) <= 0 )
    v17 = sub_277F280();
  return v17 > v27;
}
