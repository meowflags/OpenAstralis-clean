// sub_185058D80
// rva 0x05058d80  size 218  section .text  group text
// window base 0x185058d80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185058D80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, __int64); // rcx
  __int64 result; // rax
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  __int64 v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    v17 = a5;
    v16 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_7;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_7:
    v17 = a5;
    v16 = a3;
    MEMORY[0x182771080]();
    goto LABEL_8;
  }
  v9 = *(_DWORD *)(v6 + 8 * v8) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v6
                                   + 8LL * *(unsigned int *)(v6 + 8 * v9 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v6 + 8 * v9 + 44) & (0x2331u >> HIBYTE(*(_DWORD *)(v6 + 8 * v9 + 44))))
                                   + 12) != 9009 )
  {
LABEL_8:
    MEMORY[0x182770780]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_185058E60();
  }
  v16 = a3;
  v10 = *(_DWORD *)(v6 + 8 * v8) >> 3;
  v11 = v6 + 8LL * *(unsigned int *)(v6 + 8 * v10 + 20);
  v12 = *(_DWORD *)(v6 + 8 * v10 + 44) & (0x2331u >> HIBYTE(*(_DWORD *)(v6 + 8 * v10 + 44)));
  v13 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v5
                                                          + *(_QWORD *)(v6
                                                                      + 8 * v10
                                                                      + HIWORD(*(_DWORD *)(v11 + 4 * v12 + 12))));
  v17 = a5;
  result = v13(a1: v12, a2: v11, a3: v6 + 8 * v8);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
