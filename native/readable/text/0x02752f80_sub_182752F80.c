// sub_2752F80
// rva 0x02752f80  size 173  section .text  group text
// window base 0x182752f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2752F80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
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
    return sub_2753040();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 2 )
    {
      v8 = (unsigned int)a5[3];
      if ( (_DWORD)v8 == 0 )
        goto LABEL_7;
      v9 = v6[2 * v8] >> 3;
      if ( SHIWORD(v6[2 * v9 + 15]) >= 4 && v6[2 * v6[2 * v9 + 4] + 6] == 88574 )
        goto LABEL_7;
    }
    do
    {
      v8 = sub_2757000(a1, a2, a3: a5);
LABEL_7:
      v10 = (unsigned int)a5[4];
      if ( (_DWORD)v10 == 0 )
        break;
      v11 = v6[2 * v10] >> 3;
    }
    while ( SHIWORD(v6[2 * v11 + 15]) < 5 || v6[2 * v6[2 * v11 + 4] + 7] != 93565 );
    a6(a1, a2, a3: &v6[2 * v8], a4: &v6[2 * v10], a5: &v6[2 * v10]);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280(a1: v13, a2: v14, a3: v12);
    return (__int64)v6;
  }
}
