// sub_274E6E0
// rva 0x0274e6e0  size 230  section .text  group text
// window base 0x18274e6e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274E6E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, __int64, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_11;
  if ( a5 == v6
    || a5[2] != 2
    || (_DWORD)(v8 = (unsigned int)a5[3]) != 0
    && (v9 = v6[2 * v8] >> 3,
        (_DWORD)(a4 = (unsigned __int16)v6[2 * v6[2 * v9 + 5]
                                         + 3
                                         + (v6[2 * v9 + 11] & (0x18C7u >> HIBYTE(v6[2 * v9 + 11])))]) != 6343)
    || (_DWORD)(v10 = (unsigned int)a5[4]) != 0
    && (v11 = v6[2 * v10] >> 3,
        a2 = v6[2 * v11 + 11] & (0x18CEu >> HIBYTE(v6[2 * v11 + 11])),
        (_DWORD)(a4 = (unsigned __int16)v6[2 * (unsigned int)v6[2 * v11 + 5] + 3 + a2]) != 6350) )
  {
    sub_2757000(a1, a2, a3: a5);
LABEL_11:
    sub_1EB84E0();
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
    return sub_274E7E0();
  }
  result = a6(a1, a2, a3: &v6[2 * v8], a4, a5: &v6[2 * v10]);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v14, a2: v15, a3: v13);
  return result;
}
