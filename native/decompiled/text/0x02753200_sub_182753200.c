// sub_182753200
// rva 0x02753200  size 240  section .text  group text
// window base 0x182753200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182753200(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_QWORD, __int64, __int64, __int64, _DWORD *, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_14;
  if ( a5 == v6
    || a5[2] != 3
    || (_DWORD)(v9 = (unsigned int)a5[3]) != 0
    && (v10 = v6[2 * v9] >> 3,
        (unsigned __int16)v6[2 * v6[2 * v10 + 5] + 3 + (v6[2 * v10 + 11] & (0x2331u >> HIBYTE(v6[2 * v10 + 11])))] != 9009)
    || (_DWORD)(v11 = (unsigned int)a5[4]) == 0
    || v6[2 * v11] >> 3 != 4261917
    || (_DWORD)(v12 = (unsigned int)a5[5]) == 0
    || v6[2 * v12] >> 3 != 4261917 )
  {
    sub_182756FC0();
LABEL_14:
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
    return sub_182753300();
  }
  v13 = LOBYTE(v6[2 * v12 + 1]);
  a6(a1: (unsigned int)v13, a2, a3, a4: v13, a5: &v6[2 * v9], a6: LOBYTE(v6[2 * v11 + 1]));
  if ( *(int *)(v7 + 16) <= 0 )
    sub_18277F280(a1: v15, a2: v16, a3: v14);
  return (__int64)v6;
}
