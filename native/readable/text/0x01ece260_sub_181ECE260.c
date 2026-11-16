// sub_1ECE260
// rva 0x01ece260  size 230  section .text  group text
// window base 0x181ece260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ECE260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // r8d
  int v16; // r9d
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  char v23; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v24; // [rsp+8h] [rbp-10h]
  __int64 v25; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v23);
LABEL_10:
    sub_2771080(a1: v13, a2: v14, a3: v25);
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
    return sub_1ECE360(a1: v20, a2: v21, a3: v18, a4: v19, a5: v22);
  }
  v8 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v8 + 40) > *(_QWORD *)(v7 + 32) )
  {
    v8 = sub_1EAA920(a1, a2, a3: 34091264);
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v8 + 40;
    *(_DWORD *)v8 = 34091264;
    *(_DWORD *)(v8 + 4) = 0;
    *(_QWORD *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 24) = 0;
    *(_QWORD *)(v8 + 32) = 0;
  }
  *(_DWORD *)(v8 + 20) = 46923644;
  *(_DWORD *)(v8 + 16) = v6[93585974];
  *(_DWORD *)(v8 + 12) = (unsigned __int64)(v8 - (_QWORD)v6) >> 3;
  v25 = v8;
  sub_503B9A0(a1, a2, a3: v8, a4, a5: 0);
  v11 = (_DWORD *)sub_503C560(a1: v9, a2: v10, a3: v25);
  if ( v11 == v6 )
    goto LABEL_10;
  v24 = v11;
  result = sub_1EB5100(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15, a6: v16, a7: v23);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
