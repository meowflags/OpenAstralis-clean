// sub_4F275C0
// rva 0x04f275c0  size 217  section .text  group text
// window base 0x184f275c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F275C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // esi
  int v24; // r8d
  int v25; // r9d
  int v26; // [rsp+0h] [rbp-18h] BYREF
  __int64 v27; // [rsp+8h] [rbp-10h]
  __int64 v28; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F276A0(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24, a6: v25, a7);
  }
  v28 = a3;
  v10 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v10 == 0 )
    goto LABEL_3;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                              + *(_QWORD *)(v8
                                                                          + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3)
                                                                          + 144)))(
             a1,
             a2,
             a3: v8 + 8 * v10);
  if ( (_DWORD)result == -1 )
  {
    while ( 1 )
    {
      sub_4F27280(a1: v13, a2: v14, a3: v28, a4: v12, a5: v15, a6: v16, a7: v26, a8: v27);
      v19 = *(unsigned int *)(v28 + 8);
      if ( (_DWORD)v19 == 0 )
        break;
      result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                                  + *(_QWORD *)(v8
                                                                              + 8LL * (*(_DWORD *)(v8 + 8 * v19) >> 3)
                                                                              + 144)))(
                 a1: v17,
                 a2: v18,
                 a3: v8 + 8 * v19);
      if ( (_DWORD)result != -1 )
        goto LABEL_7;
    }
LABEL_3:
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return 0xFFFFFFFFLL;
  }
LABEL_7:
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
