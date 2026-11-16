// sub_182749440
// rva 0x02749440  size 156  section .text  group text
// window base 0x182749440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182749440(
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
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v15; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1827494E0();
  }
  else
  {
    if ( a5 == v6
      || a5[2] != 2
      || (_DWORD)(v8 = (unsigned int)a5[3]) != 0 && v6[2 * v8] >> 3 != 4284894
      || (_DWORD)(v9 = (unsigned int)a5[4]) != 0
      && ((v10 = v6[2 * v9] >> 3, SHIWORD(v6[2 * v10 + 15]) < 2) || v6[2 * v6[2 * v10 + 4] + 4] != 8796) )
    {
      v8 = sub_182757000(a1, a2, a3: a5);
    }
    a6(a1, a2, a3: &v6[2 * v8], a4: &v6[2 * v9], a5: &v6[2 * v9]);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_18277F280(a1: v12, a2: v13, a3: v11);
    return (__int64)v6;
  }
}
