// sub_1E91640
// rva 0x01e91640  size 208  section .text  group text
// window base 0x181e91640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E91640(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // r13
  unsigned int *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  unsigned int *v10; // rcx
  void (__fastcall *v11)(__int64, __int64, unsigned int *); // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned int *v15; // rcx
  void (__fastcall *v16)(__int64, __int64, unsigned int *); // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned int *v20; // rcx
  __int64 (__fastcall *v21)(__int64, __int64, unsigned int *); // rax
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  char v26; // [rsp+0h] [rbp-18h] BYREF
  unsigned int *v27; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v26);
    goto LABEL_8;
  }
  v9 = v7[94164135];
  v10 = &v7[2 * v9];
  if ( (_DWORD)v9 == 0 )
  {
LABEL_8:
    sub_276EFE0(a1, a2, a3: v9, a4: v10);
    goto LABEL_9;
  }
  v11 = (void (__fastcall *)(__int64, __int64, unsigned int *))(v6 + *(_QWORD *)&v7[2 * (v7[2 * v9] >> 3) + 36]);
  v27 = &v7[2 * v9];
  v11(a1, a2, a3: v27);
  v14 = v7[94164136];
  v15 = &v7[2 * v14];
  if ( (_DWORD)v14 == 0 )
  {
LABEL_9:
    sub_276EFE0(a1: v12, a2: v13, a3: v14, a4: v15);
    goto LABEL_10;
  }
  v16 = (void (__fastcall *)(__int64, __int64, unsigned int *))(v6 + *(_QWORD *)&v7[2 * (v7[2 * v14] >> 3) + 36]);
  v27 = &v7[2 * v14];
  v16(a1: v12, a2: v13, a3: v27);
  v19 = v7[94164137];
  v20 = &v7[2 * v19];
  if ( (_DWORD)v19 == 0 )
  {
LABEL_10:
    sub_276EFE0(a1: v17, a2: v18, a3: v19, a4: v20);
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
    return sub_1E91720(a1: v24, a2: v25, a3: v23);
  }
  v21 = (__int64 (__fastcall *)(__int64, __int64, unsigned int *))(v6 + *(_QWORD *)&v7[2 * (v7[2 * v19] >> 3) + 36]);
  v27 = &v7[2 * v19];
  result = v21(a1: v17, a2: v18, a3: v27);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
