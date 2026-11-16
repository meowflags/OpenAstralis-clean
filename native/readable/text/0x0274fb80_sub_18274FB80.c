// sub_274FB80
// rva 0x0274fb80  size 240  section .text  group text
// window base 0x18274fb80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274FB80(
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
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
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
    return sub_274FC80();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 3 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0
        || (v10 = v6[2 * v9] >> 3,
            a2 = v6[2 * v10 + 11] & (0xF44u >> HIBYTE(v6[2 * v10 + 11])),
            (unsigned __int16)v6[2 * (unsigned int)v6[2 * v10 + 5] + 3 + a2] == 3908) )
      {
        v11 = (unsigned int)a5[4];
        if ( (_DWORD)v11 == 0 )
          goto LABEL_9;
        v12 = v6[2 * v11] >> 3;
        if ( SHIWORD(v6[2 * v12 + 15]) >= 2 && v6[2 * v6[2 * v12 + 4] + 4] == 8532 )
          goto LABEL_9;
      }
    }
    do
    {
      a6 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))sub_2757000(
                                                                                               a1,
                                                                                               a2,
                                                                                               a3: a5);
LABEL_9:
      v13 = (unsigned int)a5[5];
    }
    while ( (_DWORD)v13 != 0 && v6[2 * v13] >> 3 != 4416044 );
    result = a6(a1, a2, a3: &v6[2 * v9], a4: &v6[2 * v11], a5: &v6[2 * v11], a6: &v6[2 * v13]);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v16, a2: v17, a3: v15);
  }
  return result;
}
