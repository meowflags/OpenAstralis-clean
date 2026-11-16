// sub_1815A45A0
// rva 0x015a45a0  size 204  section .text  group text
// window base 0x1815a45a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A45A0(int a1, int a2, unsigned int *a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  char v16; // [rsp+0h] [rbp-28h] BYREF
  unsigned int *v17; // [rsp+8h] [rbp-20h]
  unsigned int v18; // [rsp+14h] [rbp-14h]
  __int64 v19; // [rsp+18h] [rbp-10h]
  int v20; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    LODWORD(result) = MEMORY[0x181EB84E0]();
LABEL_13:
    v19 = v6;
    v20 = result;
    MEMORY[0x182771080]();
LABEL_14:
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
    return sub_1815A4680(a1: v14, a2: v15, a3: v13);
  }
  result = a3[4];
  if ( (int)result >= 0 )
    goto LABEL_3;
  v10 = a3[1];
  v6 = v7 + 8 * v10;
  if ( (_DWORD)v10 == 0 )
    goto LABEL_13;
  if ( *(_DWORD *)(v7 + 8 * v10 + 36) != 0 )
  {
    v18 = a3[1];
    v20 = result;
    v17 = a3;
    v19 = v7 + 8 * v10;
    sub_1815A4C20(a1, a2, a3: v7 + 8 * v10, a4: v10, a5, a6, a7: v16);
    v10 = v18;
    v11 = *(_DWORD *)(v7 + 8LL * v18 + 36);
    a3 = v17;
  }
  else
  {
    v19 = v7 + 8 * v10;
    v20 = result;
    v11 = 0;
  }
  a3[5] = v11;
  a3[6] = *(_DWORD *)(v7 + 8 * v10 + 44);
  v12 = *(unsigned int *)(v7 + 8 * v10 + 12);
  if ( (_DWORD)v12 == 0 )
    goto LABEL_14;
  result = *(unsigned int *)(v7 + 8 * v12 + 8);
  a3[4] = result;
LABEL_3:
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
