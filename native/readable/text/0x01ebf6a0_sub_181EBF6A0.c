// sub_1EBF6A0
// rva 0x01ebf6a0  size 109  section .text  group text
// window base 0x181ebf6a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBF6A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 result; // rax
  char v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  unsigned int v16; // [rsp+20h] [rbp-8h]
  int v17; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    v17 = a6;
    v15 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v13);
    goto LABEL_6;
  }
  v8 = a6 - *(_DWORD *)(a3 + 12);
  if ( a5 == v6 )
  {
LABEL_6:
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EBF720();
  }
  v17 = a6;
  v15 = a3;
  v14 = a5;
  v16 = v8;
  sub_4F36640(a1, a2, a3: a5, a4, a5: v8);
  result = sub_4F36F80(a1: v10, a2: v11, a3: v14, a4: v9, a5: v6 + 372643648);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
