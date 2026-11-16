// sub_274C1C0
// rva 0x0274c1c0  size 268  section .text  group text
// window base 0x18274c1c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274C1C0(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_15;
  if ( a5 == v6
    || a5[2] != 4
    || (_DWORD)(v9 = (unsigned int)a5[3]) != 0 && v6[2 * v9] >> 3 != 4820053
    || (_DWORD)(v10 = (unsigned int)a5[4]) != 0
    && (v11 = v6[2 * v10] >> 3,
        (unsigned __int16)*(_DWORD *)((a1 = (unsigned __int64)&v6[2 * v6[2 * v11 + 5]])
                                    + 4LL * (v6[2 * v11 + 11] & (0xEAEu >> HIBYTE(v6[2 * v11 + 11])))
                                    + 12) != 3758)
    || (_DWORD)(a1 = (unsigned int)a5[5]) != 0 && v6[2 * a1] >> 3 != 4820566
    || (_DWORD)(v12 = (unsigned int)a5[6]) != 0 && v6[2 * v12] >> 3 != 4820190 )
  {
    sub_2757000(a1, a2, a3: a5);
LABEL_15:
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
    return sub_274C2E0();
  }
  result = a6(a1: &v6[2 * v12], a2, a3: &v6[2 * v9], a4: &v6[2 * v12], a5: &v6[2 * v10], a6: &v6[2 * a1]);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v15, a2: v16, a3: v14);
  return result;
}
