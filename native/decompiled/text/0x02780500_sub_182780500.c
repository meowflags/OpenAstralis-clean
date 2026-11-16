// sub_182780500
// rva 0x02780500  size 358  section .text  group text
// window base 0x182780500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182780500(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  unsigned int *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  char v27; // [rsp+0h] [rbp-28h]
  __int64 v28; // [rsp+18h] [rbp-10h]
  __int64 v29; // [rsp+20h] [rbp-8h]

  v8 = v7[94167253];
  if ( (_DWORD)v8 == 0 )
  {
    LODWORD(v28) = a6;
    LODWORD(v29) = a5;
    sub_18276EFE0(a1, a2, a3, a4: 0, a5, a6, a7: v27);
    goto LABEL_6;
  }
  v9 = v7[2 * v8] >> 3;
  v10 = v7[2 * v9 + 11] & (0x252u >> HIBYTE(v7[2 * v9 + 11]));
  v28 = a6;
  v29 = a5;
  ((void (__fastcall *)(__int64, __int64, unsigned int *))(v6
                                                         + *(_QWORD *)((char *)&v7[2 * v9 + 4]
                                                                     + HIWORD(v7[2 * v7[2 * v9 + 5] + 3 + v10]))))(
    a1,
    a2: v10,
    a3: &v7[2 * v8]);
  v16 = v7[94167254];
  if ( (_DWORD)v16 == 0 )
  {
LABEL_6:
    sub_18276EFE0(a1: v12, a2: v13, a3: v11, a4: v16, a5: v14, a6: v15, a7: v27);
    goto LABEL_7;
  }
  v17 = v7[2 * v16] >> 3;
  ((void (__fastcall *)(__int64, __int64, unsigned int *, _QWORD, __int64, __int64))(v6
                                                                                   + *(_QWORD *)((char *)&v7[2 * v17 + 4]
                                                                                               + HIWORD(v7[2 * v7[2 * v17 + 5] + 3 + (v7[2 * v17 + 11] & (0x252u >> HIBYTE(v7[2 * v17 + 11])))]))))(
    a1: v12,
    a2: v13,
    a3: &v7[2 * v16],
    a4: HIBYTE(v7[2 * v17 + 11]),
    a5: v29,
    a6: v28);
  v21 = v7[94167255];
  if ( (_DWORD)v21 != 0 )
  {
    v22 = v7[2 * v21] >> 3;
    return ((__int64 (__fastcall *)(__int64, __int64, unsigned int *, _QWORD, __int64, __int64))(v6
                                                                                               + *(_QWORD *)((char *)&v7[2 * v22 + 4] + HIWORD(v7[2 * v7[2 * v22 + 5] + 3 + (v7[2 * v22 + 11] & (0x252u >> HIBYTE(v7[2 * v22 + 11])))]))))(
             a1: v19,
             a2: v20,
             a3: &v7[2 * v21],
             a4: HIBYTE(v7[2 * v22 + 11]),
             a5: v29,
             a6: v28);
  }
LABEL_7:
  sub_18276EFE0(a1: v19, a2: v20, a3: v18, a4: v21, a5: v29, a6: v28, a7: v27);
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
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_182780680(a1: v25, a2: v26, a3: v24);
}
