// sub_15953E0
// rva 0x015953e0  size 151  section .text  group text
// window base 0x1815953e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15953E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_7;
  }
  v7 = *(unsigned int *)(v5 + 374343872);
  if ( (_DWORD)v7 == 0 )
  {
LABEL_7:
    sub_2771080();
    goto LABEL_8;
  }
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v4
                                                                    + *(_QWORD *)(v5
                                                                                + 8LL * (*(_DWORD *)(v5 + 8 * v7) >> 3)
                                                                                + 448)))(
    a1,
    a2,
    a3: v5 + 8 * v7,
    a4,
    a5: v5 + 57669056);
  v11 = *(unsigned int *)(v5 + 374343872);
  if ( (_DWORD)v11 == 0 )
  {
LABEL_8:
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
    return sub_1595480();
  }
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v4
                                                                                + *(_QWORD *)(v5
                                                                                            + 8LL
                                                                                            * (*(_DWORD *)(v5 + 8 * v11) >> 3)
                                                                                            + 448)))(
             a1: v9,
             a2: v10,
             a3: v5 + 8 * v11,
             a4: v8,
             a5: v5 + 57669080);
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280();
  return result;
}
