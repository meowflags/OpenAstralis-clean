// sub_185043080
// rva 0x05043080  size 235  section .text  group text
// window base 0x185043080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185043080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  __int64 result; // rax
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+8h] [rbp-20h]
  __int64 v19; // [rsp+10h] [rbp-18h]
  __int64 v20; // [rsp+18h] [rbp-10h]
  __int64 v21; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    v18 = a6;
    v20 = a5;
    v19 = a3;
    MEMORY[0x181EB84E0]();
LABEL_13:
    MEMORY[0x182771080]();
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
    return sub_185043180();
  }
  v9 = *(unsigned int *)(v8 + 72);
  if ( (_DWORD)v9 != 0 )
    goto LABEL_4;
  do
  {
    MEMORY[0x182771080]();
LABEL_4:
    v10 = *(unsigned int *)(v7 + 8 * v9 + 72);
    if ( (_DWORD)v10 != 0 )
      v11 = v7 + 8 * v10;
    else
      v11 = v7 + 8 * v9;
  }
  while ( v11 == v7 );
  v12 = *(_QWORD *)(v11 + 80);
  v13 = *(unsigned int *)(v7 + 377212764);
  if ( (_DWORD)v13 == 0 )
    goto LABEL_13;
  v21 = v12;
  v14 = *(_DWORD *)(v7 + 8 * v13) >> 3;
  v15 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))(v6
                                                                                     + *(_QWORD *)(v7
                                                                                                 + 8 * v14
                                                                                                 + HIWORD(*(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v14 + 20) + 4LL * (*(_DWORD *)(v7 + 8 * v14 + 44) & (0x1F00u >> HIBYTE(*(_DWORD *)(v7 + 8 * v14 + 44)))) + 12))));
  v19 = a3;
  v20 = a5;
  v18 = a6;
  result = v15(a1: v18, a2: v18, a3: v7 + 8 * v13, a4: v19, a5: v19, a6: a5);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
