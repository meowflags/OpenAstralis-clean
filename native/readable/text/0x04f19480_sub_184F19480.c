// sub_4F19480
// rva 0x04f19480  size 210  section .text  group text
// window base 0x184f19480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F19480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+8h] [rbp-20h]
  __int64 v19; // [rsp+10h] [rbp-18h]
  __int64 v20; // [rsp+18h] [rbp-10h]
  unsigned int v21; // [rsp+20h] [rbp-8h]
  int v22; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v6 + 8) )
  {
    v22 = a5;
    v20 = a3;
    sub_1EB84E0();
    goto LABEL_10;
  }
  v7 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v7 == 0 )
  {
LABEL_10:
    sub_2771080();
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
    return sub_4F19560();
  }
  v8 = *(_QWORD *)(v6 + 40);
  v9 = v8 + 16;
  v10 = 34089376;
  if ( (unsigned __int64)(v8 + 16) > *(_QWORD *)(v6 + 32) )
  {
    v21 = *(_DWORD *)(a3 + 12);
    v22 = a5;
    v20 = a3;
    v8 = sub_1EAA840(a1: v9, a2, a3: 34089376, a4: 34089376, a5: 1);
    v7 = v21;
    a5 = v22;
  }
  else
  {
    *(_QWORD *)(v6 + 40) = v9;
    *(_QWORD *)v8 = 34089376;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 0;
    v20 = a3;
  }
  *(_WORD *)(v8 + 12) = a5;
  v22 = a5;
  v19 = v8;
  v18 = v5 + 8 * v7;
  result = sub_C8BBAC0(a1: 1, a2, a3: v18, a4: v10, a5: v8, a6: 0);
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v19);
  return result;
}
