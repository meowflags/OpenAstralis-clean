// sub_5043880
// rva 0x05043880  size 232  section .text  group text
// window base 0x185043880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5043880(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  void (__fastcall *v13)(__int64, __int64, __int64); // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  _DWORD *v16; // rdx
  __int64 v17; // rax
  _DWORD *v18; // rdx
  __int64 result; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // esi
  int v24; // r8d
  int v25; // r9d
  int v26; // [rsp+0h] [rbp-28h] BYREF
  __int64 v27; // [rsp+10h] [rbp-18h]
  _DWORD *v28; // [rsp+18h] [rbp-10h]
  int v29; // [rsp+24h] [rbp-4h]

  v29 = a5;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v10 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_13;
  }
  v28 = a3;
  a3[34] = 99;
  __faststorefence();
  v11 = (unsigned int)a3[30];
  v12 = v9 + 8 * v11;
  if ( (_DWORD)v11 == 0 )
    return sub_18504394A(a1, a2, (_DWORD)a3, a4: v12, a5, a6, a7, a8);
  v13 = (void (__fastcall *)(__int64, __int64, __int64))(v8
                                                       + *(_QWORD *)(v9 + 8LL * (*(_DWORD *)(v9 + 8 * v11) >> 3) + 128));
  v27 = v12;
  v13(a1, a2, a3: v12);
  if ( v29 != 0 )
  {
    v16 = v28;
    v17 = (unsigned int)v28[12];
    if ( (_DWORD)v17 != 0 )
    {
      sub_6362A80(a1: v14, a2: v15, a3: v9 + 8 * v17, a4: v28, a5: v28);
      goto LABEL_6;
    }
LABEL_13:
    sub_2771080(a1: v14, a2: v15, a3: v16, a4: v27);
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
    return sub_5043980(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24, a6: v25, a7);
  }
LABEL_6:
  v18 = v28;
  v28[4] = 0;
  v18[5] = 0;
  if ( v18[11] != 0 )
  {
    v18[11] = 0;
    __faststorefence();
  }
  result = (unsigned int)v18[9];
  if ( (_DWORD)result != 0 )
    v18[9] = 0;
  if ( *(int *)(v10 + 16) <= 0 )
    return sub_277F280();
  return result;
}
