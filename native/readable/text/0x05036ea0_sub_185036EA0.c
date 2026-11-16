// sub_5036EA0
// rva 0x05036ea0  size 203  section .text  group text
// window base 0x185036ea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5036EA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  __int64 v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v5 + 8) )
  {
    v13 = a3;
    sub_1EB84E0();
    goto LABEL_7;
  }
  v6 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v6 == 0 )
  {
LABEL_7:
    v13 = a3;
    sub_2771080();
    goto LABEL_8;
  }
  v7 = *(_DWORD *)(v4 + 8 * v6) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v4
                                   + 8LL * *(unsigned int *)(v4 + 8 * v7 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v4 + 8 * v7 + 44) & (0x654u >> HIBYTE(*(_DWORD *)(v4 + 8 * v7 + 44))))
                                   + 12) != 1620 )
  {
LABEL_8:
    sub_2770780();
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
    return sub_5036F80();
  }
  v13 = a3;
  v8 = *(_DWORD *)(v4 + 8 * v6) >> 3;
  v9 = v4 + 8LL * *(unsigned int *)(v4 + 8 * v8 + 20);
  v10 = *(_DWORD *)(v4 + 8 * v8 + 44) & (0x654u >> HIBYTE(*(_DWORD *)(v4 + 8 * v8 + 44)));
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v3
                                                              + *(_QWORD *)(v4
                                                                          + 8 * v8
                                                                          + HIWORD(*(_DWORD *)(v9 + 4 * v10 + 12)))))(
             a1: v10,
             a2: v9,
             a3: v4 + 8 * v6);
  if ( *(int *)(v5 + 16) <= 0 )
    return sub_277F280();
  return result;
}
