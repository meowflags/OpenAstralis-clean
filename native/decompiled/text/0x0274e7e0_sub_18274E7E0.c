// sub_18274E7E0
// rva 0x0274e7e0  size 134  section .text  group text
// window base 0x18274e7e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274E7E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, __int64, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
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
    return sub_18274E880();
  }
  else
  {
    if ( a5 == v6
      || a5[2] != 2
      || (_DWORD)(v8 = (unsigned int)a5[3]) != 0
      && ((v9 = v6[2 * v8] >> 3, SHIWORD(v6[2 * v9 + 15]) < 2) || v6[2 * v6[2 * v9 + 4] + 4] != 8928) )
    {
      v8 = sub_182757000(a1, a2, a3: a5);
    }
    result = a6(a1, a2, a3: &v6[2 * v8], a4, a5: &v6[2 * a5[4]]);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_18277F280(a1: v12, a2: v13, a3: v11);
  }
  return result;
}
