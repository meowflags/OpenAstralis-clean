// sub_182749EE0
// rva 0x02749ee0  size 158  section .text  group text
// window base 0x182749ee0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182749EE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_11;
  if ( a5 == v6
    || a5[2] != 2
    || (_DWORD)(v9 = (unsigned int)a5[3]) != 0 && v6[2 * v9] >> 3 != 5062368
    || (_DWORD)(v10 = (unsigned int)a5[4]) != 0 && v6[2 * v10] >> 3 != 5062368 )
  {
    sub_182756FC0();
LABEL_11:
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182749F80();
  }
  result = a6(a1, a2, a3, a4: &v6[2 * v10], a5: &v6[2 * v9], a6: &v6[2 * v10]);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1: v13, a2: v14, a3: v12);
  return result;
}
