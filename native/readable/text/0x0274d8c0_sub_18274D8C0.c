// sub_274D8C0
// rva 0x0274d8c0  size 245  section .text  group text
// window base 0x18274d8c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274D8C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_DWORD *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v9 + 8) )
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
    return sub_274D9C0();
  }
  else
  {
    if ( a5 == v8 )
      goto LABEL_10;
    if ( a5[2] != 3 )
      goto LABEL_10;
    v6 = (unsigned int)a5[3];
    if ( (_DWORD)v6 != 0 )
    {
      v11 = v8[2 * v6] >> 3;
      a2 = (unsigned int)v8[2 * v11 + 11];
      v7 = (unsigned __int64)&v8[2 * v8[2 * v11 + 5]];
      if ( (unsigned __int16)*(_DWORD *)(v7 + 4LL * ((unsigned int)a2 & (0x61Cu >> HIBYTE(v8[2 * v11 + 11]))) + 12) != 1564 )
        goto LABEL_10;
    }
    if ( (_DWORD)(v12 = (unsigned int)a5[4]) != 0 && (_DWORD)(v7 = v8[2 * v12] >> 3) != 4291287
      || (_DWORD)(v7 = (unsigned int)a5[5]) != 0
      && ((v13 = v8[2 * v7] >> 3, SHIWORD(v8[2 * v13 + 15]) < 2)
       || (a2 = (unsigned int)v8[2 * v13 + 4], v8[2 * a2 + 4] != 72266)) )
    {
LABEL_10:
      a6 = (__int64 (__fastcall *)(_DWORD *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))sub_2756FC0();
    }
    result = a6(a1: &v8[2 * v7], a2, a3, a4: &v8[2 * v12], a5: &v8[2 * v6], a6: &v8[2 * v12]);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280(a1: v16, a2: v17, a3: v15);
  }
  return result;
}
