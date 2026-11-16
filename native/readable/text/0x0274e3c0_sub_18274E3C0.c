// sub_274E3C0
// rva 0x0274e3c0  size 198  section .text  group text
// window base 0x18274e3c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274E3C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v16; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_12;
  if ( a5 == v6
    || a5[2] != 2
    || (_DWORD)(v9 = (unsigned int)a5[3]) != 0
    && (v10 = v6[2 * v9] >> 3,
        a2 = v6[2 * v10 + 11] & (0x18D8u >> HIBYTE(v6[2 * v10 + 11])),
        (unsigned __int16)v6[2 * (unsigned int)v6[2 * v10 + 5] + 3 + a2] != 6360)
    || (_DWORD)(v11 = (unsigned int)a5[4]) != 0 && v6[2 * v11] >> 3 != 4325767 )
  {
    sub_2756FC0();
LABEL_12:
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
    return sub_274E4A0();
  }
  a6(a1, a2, a3, a4: &v6[2 * v11], a5: &v6[2 * v9], a6: &v6[2 * v11]);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1: v13, a2: v14, a3: v12);
  return (__int64)v6;
}
