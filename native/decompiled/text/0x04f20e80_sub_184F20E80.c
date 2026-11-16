// sub_184F20E80
// rva 0x04f20e80  size 178  section .text  group text
// window base 0x184f20e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F20E80(int a1, int a2, unsigned int *a3, int a4, int a5, int a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // esi
  int v24; // r8d
  int v25; // r9d
  char v26; // [rsp+0h] [rbp-18h] BYREF
  unsigned int *v27; // [rsp+8h] [rbp-10h]
  unsigned int v28; // [rsp+14h] [rbp-4h]

  v27 = a3;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_11;
  }
  sub_184F21320(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v26);
  v12 = v27[2];
  if ( (_DWORD)v12 == 0 )
  {
LABEL_11:
    v14 = MEMORY[0x182771080]();
    goto LABEL_12;
  }
  v13 = v27[1];
  v14 = *(_DWORD *)(v8 + 8 * v12 + 8) - v27[3];
  if ( (_DWORD)v13 == 0 )
  {
LABEL_12:
    MEMORY[0x182771080](a1: v10, a2: v11, a3: v14);
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
    return sub_184F20F40(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24, a6: v25, a7);
  }
  v28 = v14;
  v15 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                           + *(_QWORD *)(v8
                                                                       + 8LL * (*(_DWORD *)(v8 + 8 * v13) >> 3)
                                                                       + 112)))(
          a1: v10,
          a2: v11,
          a3: v8 + 8 * v13);
  if ( (int)v28 > 0x7FFFFFFF - v15 )
    v18 = 0x7FFFFFFF;
  else
    v18 = v15 + v28;
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v16, a2: v17, a3: v28, a4: v18);
  return (unsigned int)v18;
}
