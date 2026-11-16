// sub_2753D80
// rva 0x02753d80  size 331  section .text  group text
// window base 0x182753d80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2753D80(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *))
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v9 + 8) )
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
    return sub_2753EE0();
  }
  else
  {
    if ( a5 != v8 && a5[2] == 5 )
    {
      v11 = (unsigned int)a5[3];
      if ( (_DWORD)v11 == 0 || v8[2 * v11] >> 3 == 4260335 )
      {
        v6 = (unsigned int)a5[4];
        if ( (_DWORD)v6 == 0 || v8[2 * v6] >> 3 == 4260335 )
        {
          v7 = (unsigned int)a5[5];
          if ( (_DWORD)v7 == 0 || v8[2 * v7] >> 3 == 5040893 )
          {
            a2 = (unsigned int)a5[6];
            if ( (_DWORD)a2 == 0 )
              goto LABEL_13;
            v12 = v8[2 * a2] >> 3;
            if ( SHIWORD(v8[2 * v12 + 15]) >= 3 && v8[2 * v8[2 * v12 + 4] + 5] == 62301 )
              goto LABEL_13;
          }
        }
      }
    }
    do
    {
      a6 = (__int64 (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *))sub_2757000(
                                                                                                 a1,
                                                                                                 a2,
                                                                                                 a3: a5);
LABEL_13:
      v13 = (unsigned int)a5[7];
      if ( (_DWORD)v13 == 0 )
        break;
      v14 = v8[2 * v13] >> 3;
      a1 = &v8[2 * v8[2 * v14 + 5]];
    }
    while ( (unsigned __int16)a1[(v8[2 * v14 + 11] & (0x654u >> HIBYTE(v8[2 * v14 + 11]))) + 3] != 1620 );
    result = a6(a1: &v8[2 * a2], a2: &v8[2 * v13], a3: &v8[2 * v11], a4: &v8[2 * v13], a5: &v8[2 * v6], a6: &v8[2 * v7]);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280(a1: v17, a2: v18, a3: v16);
  }
  return result;
}
