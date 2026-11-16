// sub_1ED3A80
// rva 0x01ed3a80  size 151  section .text  group text
// window base 0x181ed3a80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED3A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 result; // rax
  char v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  __int64 v22; // [rsp+20h] [rbp-8h]

  v22 = a5;
  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    v21 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v19);
    goto LABEL_6;
  }
  v21 = a3;
  v20 = v6 + 376612880;
  sub_2084840(a1, a2, a3: v6 + 376612880, a4: v6 + 366057408, a5: v6 + 366057408);
  v10 = *(unsigned int *)(v22 + 4);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_6:
    sub_2771080(a1: v8, a2: v9, a3: v21);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1ED3B20();
  }
  v11 = sub_278EA80(
          a1: v8,
          a2: v9,
          a3: v6 + 8 * v10,
          a4: v6 + 8LL * *(unsigned int *)(v22 + 8),
          a5: v6 + 8LL * *(unsigned int *)(v22 + 8));
  v15 = sub_2084840(a1: v13, a2: v14, a3: v20, a4: v12, a5: v11);
  result = sub_20841E0(a1: v16, a2: v17, a3: v15);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
