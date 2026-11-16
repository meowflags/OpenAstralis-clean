// sub_1815C92A0
// rva 0x015c92a0  size 326  section .text  group text
// window base 0x1815c92a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C92A0(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r13
  char *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rsi
  char *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  void (__fastcall *v27)(__int64, __int64, char *, _QWORD, __int64); // rcx
  __int64 v29; // [rsp+0h] [rbp-28h] BYREF
  __int64 v30; // [rsp+18h] [rbp-10h]
  char *v31; // [rsp+20h] [rbp-8h]

  v31 = a3;
  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v10 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_9:
    MEMORY[0x182771080]();
    goto LABEL_10;
  }
  v30 = MEMORY[0x185837940](a1, a2, a3: v9 + 35855512);
  v14 = MEMORY[0x185837EE0](a1: v12, a2: v13, a3: v9 + 376314560, a4: v11, a5: v9 + 376314608);
  v19 = *(_QWORD *)(v10 + 40);
  v20 = v19 + 24;
  if ( (unsigned __int64)(v19 + 24) > *(_QWORD *)(v10 + 32) )
    return sub_1815C93A7(a1: v16, a2: v17, a3: v19, a4: v15, a5: v20, a6: v18, a7, a8);
  *(_QWORD *)(v10 + 40) = v20;
  *(_DWORD *)v19 = 35855656;
  *(_DWORD *)(v19 + 4) = 0;
  *(_QWORD *)(v19 + 8) = 0;
  *(_QWORD *)(v19 + 16) = 0;
  v21 = v30;
  *(_DWORD *)(v19 + 8) = (unsigned __int64)(v31 - v9) >> 3;
  *(_DWORD *)(v19 + 4) = (unsigned __int64)(v21 - (_QWORD)v9) >> 3;
  v30 = v19;
  MEMORY[0x1894C25E0](a1: v16, a2: v17, a3: v19, a4: v19, a5: v14);
  if ( v31 == v9 )
    goto LABEL_9;
  v24 = (char *)((__int64 (__fastcall *)(__int64, __int64, char *, char *))(v8
                                                                          + *(_QWORD *)&v9[8 * (*(_DWORD *)v31 >> 3)
                                                                                         + 6864]))(
                  a1: v22,
                  a2: v23,
                  a3: v31,
                  a4: v31);
  if ( v24 == v9 )
  {
LABEL_10:
    MEMORY[0x182771080](a1: v25, a2: v26, a3: v31, a4: v30);
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
    return sub_1815C9400();
  }
  v27 = (void (__fastcall *)(__int64, __int64, char *, _QWORD, __int64))(v8
                                                                       + *(_QWORD *)&v9[8 * (*(_DWORD *)v24 >> 3) + 368]);
  v27(a1: v25, a2: v26, a3: v24, a4: v27, a5: 1);
  if ( *(int *)(v10 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v30;
}
