// sub_27504E0
// rva 0x027504e0  size 151  section .text  group text
// window base 0x1827504e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27504E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
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
    return sub_2750580();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 2 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 578 )
        goto LABEL_7;
    }
    do
    {
      a6 = (__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))sub_2756FC0();
LABEL_7:
      v11 = (unsigned int)a5[4];
    }
    while ( (_DWORD)v11 != 0 && v6[2 * v11] >> 3 != 4260335 );
    result = a6(a1, a2, a3, a4: &v6[2 * v9], a5: &v6[2 * v9], a6: &v6[2 * v11]);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v14, a2: v15, a3: v13);
  }
  return result;
}
