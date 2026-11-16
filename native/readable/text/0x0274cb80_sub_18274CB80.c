// sub_274CB80
// rva 0x0274cb80  size 203  section .text  group text
// window base 0x18274cb80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274CB80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  __int64 v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
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
    return sub_274CC60();
  }
  else
  {
    if ( a5 == v7
      || a5[2] != 2
      || (_DWORD)(v6 = (unsigned int)a5[3]) != 0
      && (v10 = v7[2 * v6] >> 3,
          a2 = (unsigned int)v7[2 * v10 + 11],
          a1 = (unsigned int)a2 & (0x16F9u >> HIBYTE(v7[2 * v10 + 11])),
          (unsigned __int16)v7[2 * (unsigned int)v7[2 * v10 + 5] + 3 + a1] != 5881)
      || (_DWORD)(v11 = (unsigned int)a5[4]) != 0
      && ((v12 = v7[2 * v11] >> 3, SHIWORD(v7[2 * v12 + 15]) < 4) || v7[2 * v7[2 * v12 + 4] + 6] != 81613) )
    {
      a6 = (__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))sub_2756FC0();
    }
    result = a6(a1, a2, a3, a4: &v7[2 * v11], a5: &v7[2 * v6], a6: &v7[2 * v11]);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v15, a2: v16, a3: v14);
  }
  return result;
}
