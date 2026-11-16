// sub_27499E0
// rva 0x027499e0  size 336  section .text  group text
// window base 0x1827499e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27499E0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_DWORD *, unsigned __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))
{
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
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
    return sub_2749B40();
  }
  else
  {
    if ( a5 != v7 && a5[2] == 4 )
    {
      v10 = (unsigned int)a5[3];
      if ( (_DWORD)v10 == 0
        || (v11 = v7[2 * v10] >> 3,
            v6 = (unsigned __int64)&v7[2 * v7[2 * v11 + 5]],
            a2 = v7[2 * v11 + 11] & (0xDE0u >> HIBYTE(v7[2 * v11 + 11])),
            (unsigned __int16)*(_DWORD *)(v6 + 4 * a2 + 12) == 3552) )
      {
        v6 = (unsigned int)a5[4];
        if ( (_DWORD)v6 == 0 )
          goto LABEL_9;
        v12 = v7[2 * v6] >> 3;
        if ( SHIWORD(v7[2 * v12 + 15]) >= 2 && v7[2 * v7[2 * v12 + 4] + 4] == 8163 )
          goto LABEL_9;
      }
    }
    while ( 1 )
    {
      a6 = (void (__fastcall *)(_DWORD *, unsigned __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))sub_2757000(a1, a2, a3: a5);
LABEL_9:
      v13 = (unsigned int)a5[5];
      if ( (_DWORD)v13 != 0 )
      {
        v14 = v7[2 * v13] >> 3;
        a1 = (unsigned int)v7[2 * v14 + 11];
        a2 = (unsigned __int64)&v7[2 * v7[2 * v14 + 5]];
        if ( (unsigned __int16)*(_DWORD *)(a2 + 4LL * ((unsigned int)a1 & (0xDADu >> HIBYTE(v7[2 * v14 + 11]))) + 12) != 3501 )
          continue;
      }
      v15 = (unsigned int)a5[6];
      if ( (_DWORD)v15 == 0 )
        break;
      a2 = v7[2 * v15] >> 3;
      if ( SHIWORD(v7[2 * a2 + 15]) >= 3 )
      {
        a2 = (unsigned int)v7[2 * a2 + 4];
        if ( v7[2 * a2 + 5] == 78079 )
          break;
      }
    }
    a6(a1: &v7[2 * v15], a2, a3: &v7[2 * v10], a4: &v7[2 * v15], a5: &v7[2 * v6], a6: &v7[2 * v13]);
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280(a1: v17, a2: v18, a3: v16);
    return (__int64)v7;
  }
}
