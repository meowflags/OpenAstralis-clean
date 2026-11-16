// sub_182754200
// rva 0x02754200  size 218  section .text  group text
// window base 0x182754200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182754200(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, _DWORD *, _QWORD, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1827542E0();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 3 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 27444 )
        goto LABEL_7;
    }
    while ( 1 )
    {
      a6 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _QWORD, _QWORD))sub_182757000(a1, a2, a3: a5);
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 != 0 && v6[2 * v11] >> 3 == 4288437 )
      {
        v12 = (unsigned int)a5[5];
        if ( (_DWORD)v12 != 0 && v6[2 * v12] >> 3 == 4288437 )
          break;
      }
    }
    v13 = a6(
            a1,
            a2,
            a3: &v6[2 * v9],
            a4: &v6[2 * v9],
            a5: (unsigned int)SLOBYTE(v6[2 * v11 + 1]),
            a6: (unsigned int)SLOBYTE(v6[2 * v12 + 1]));
    if ( *(int *)(v7 + 16) <= 0 )
      v13 = sub_18277F280(a1: v15, a2: v16, a3: v14);
    if ( v13 != 0 )
      JUMPOUT(0x304E9D2A6LL);
    return (__int64)(v6 + 8781820);
  }
}
