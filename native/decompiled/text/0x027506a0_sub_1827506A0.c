// sub_1827506A0
// rva 0x027506a0  size 390  section .text  group text
// window base 0x1827506a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827506A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_DWORD *, _DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v22; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v9 + 8) )
  {
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
    return sub_182750840();
  }
  else
  {
    if ( a5 == v8 )
      goto LABEL_14;
    if ( a5[2] != 5 )
      goto LABEL_14;
    v6 = (unsigned int)a5[3];
    if ( (_DWORD)v6 != 0 )
    {
      v11 = v8[2 * v6] >> 3;
      v7 = (unsigned __int64)&v8[2 * v8[2 * v11 + 5]];
      if ( (unsigned __int16)*(_DWORD *)(v7 + 4LL * (v8[2 * v11 + 11] & (0x2331u >> HIBYTE(v8[2 * v11 + 11]))) + 12) != 9009 )
        goto LABEL_14;
    }
    if ( (_DWORD)(v7 = (unsigned int)a5[4]) != 0
      && (v12 = v8[2 * v7] >> 3,
          (unsigned __int16)v8[2 * v8[2 * v12 + 5] + 3 + (v8[2 * v12 + 11] & (0xDC9u >> HIBYTE(v8[2 * v12 + 11])))] != 3529)
      || (_DWORD)(v13 = (unsigned int)a5[5]) != 0
      && (v14 = v8[2 * v13] >> 3,
          (unsigned __int16)v8[2 * v8[2 * v14 + 5] + 3 + (v8[2 * v14 + 11] & (0x1DCu >> HIBYTE(v8[2 * v14 + 11])))] != 476)
      || (_DWORD)(v15 = (unsigned int)a5[6]) != 0 && v8[2 * v15] >> 3 != 5053776
      || (_DWORD)(v16 = (unsigned int)a5[7]) != 0
      && ((v17 = v8[2 * v16] >> 3, SHIWORD(v8[2 * v17 + 15]) < 2) || v8[2 * v8[2 * v17 + 4] + 4] != 8832) )
    {
LABEL_14:
      a6 = (void (__fastcall *)(_DWORD *, _DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *))sub_182756FC0();
    }
    a6(a1: &v8[2 * v13], a2: &v8[2 * v15], a3, a4: &v8[2 * v16], a5: &v8[2 * v6], a6: &v8[2 * v7]);
    if ( *(int *)(v9 + 16) <= 0 )
      sub_18277F280(a1: v19, a2: v20, a3: v18);
    return (__int64)v8;
  }
}
