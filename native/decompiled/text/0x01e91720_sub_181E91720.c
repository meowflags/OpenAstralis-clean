// sub_181E91720
// rva 0x01e91720  size 208  section .text  group text
// window base 0x181e91720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E91720(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
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
  char v23; // [rsp+0h] [rbp-18h] BYREF
  unsigned int *v24; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v8 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v23);
    goto LABEL_8;
  }
  v9 = v7[94164135];
  v10 = &v7[2 * v9];
  if ( (_DWORD)v9 == 0 )
  {
LABEL_8:
    MEMORY[0x18276EFE0](a1, a2, a3: v9, a4: v10);
    goto LABEL_9;
  }
  v11 = (void (__fastcall *)(__int64, __int64, unsigned int *))(v6 + *(_QWORD *)&v7[2 * (v7[2 * v9] >> 3) + 38]);
  v24 = &v7[2 * v9];
  v11(a1, a2, a3: v24);
  v14 = v7[94164136];
  v15 = &v7[2 * v14];
  if ( (_DWORD)v14 == 0 )
  {
LABEL_9:
    MEMORY[0x18276EFE0](a1: v12, a2: v13, a3: v14, a4: v15);
    goto LABEL_10;
  }
  v16 = (void (__fastcall *)(__int64, __int64, unsigned int *))(v6 + *(_QWORD *)&v7[2 * (v7[2 * v14] >> 3) + 38]);
  v24 = &v7[2 * v14];
  v16(a1: v12, a2: v13, a3: v24);
  v19 = v7[94164137];
  v20 = &v7[2 * v19];
  if ( (_DWORD)v19 == 0 )
  {
LABEL_10:
    MEMORY[0x18276EFE0](a1: v17, a2: v18, a3: v19, a4: v20);
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
    return sub_181E91800();
  }
  v21 = (__int64 (__fastcall *)(__int64, __int64, unsigned int *))(v6 + *(_QWORD *)&v7[2 * (v7[2 * v19] >> 3) + 38]);
  v24 = &v7[2 * v19];
  result = v21(a1: v17, a2: v18, a3: v24);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
