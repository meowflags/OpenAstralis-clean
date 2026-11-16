// sub_182752940
// rva 0x02752940  size 230  section .text  group text
// window base 0x182752940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182752940(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_13;
  if ( a5 == v6
    || a5[2] != 3
    || (_DWORD)(v9 = (unsigned int)a5[3]) != 0
    && (v10 = v6[2 * v9] >> 3,
        (unsigned __int16)v6[2 * v6[2 * v10 + 5] + 3 + (v6[2 * v10 + 11] & (0xDADu >> HIBYTE(v6[2 * v10 + 11])))] != 3501)
    || (_DWORD)(v11 = (unsigned int)a5[4]) != 0 && v6[2 * v11] >> 3 != 4508423
    || (_DWORD)(v12 = (unsigned int)a5[5]) != 0 && v6[2 * v12] >> 3 != 4503114 )
  {
    sub_182757000(a1, a2, a3: a5);
LABEL_13:
    MEMORY[0x181EB84E0]();
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
    return sub_182752A40();
  }
  result = a6(a1, a2, a3: &v6[2 * v9], a4: &v6[2 * v12], a5: &v6[2 * v11], a6: &v6[2 * v12]);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1: v15, a2: v16, a3: v14);
  return result;
}
