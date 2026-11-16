// sub_274AC80
// rva 0x0274ac80  size 188  section .text  group text
// window base 0x18274ac80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274AC80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_274AD40();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 3 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 3 && v6[2 * v6[2 * v10 + 4] + 5] == 88589 )
        goto LABEL_7;
    }
    while ( 1 )
    {
      a6 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _QWORD))sub_2757000(a1, a2, a3: a5);
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 == 0 || v6[2 * v11] >> 3 == 4261863 )
      {
        v12 = (unsigned int)a5[5];
        if ( (_DWORD)v12 != 0 && v6[2 * v12] >> 3 == 4261917 )
          break;
      }
    }
    result = a6(a1, a2, a3: &v6[2 * v9], a4: &v6[2 * v9], a5: &v6[2 * v11], a6: LOBYTE(v6[2 * v12 + 1]));
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v15, a2: v16, a3: v14);
  }
  return result;
}
