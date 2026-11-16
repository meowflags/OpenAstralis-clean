// sub_1827542E0
// rva 0x027542e0  size 123  section .text  group text
// window base 0x1827542e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827542E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64))
{
  __int64 v6; // r14
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
    return sub_182754360();
  }
  else
  {
    if ( a5 == v6
      || *(_DWORD *)(a5 + 8) != 1
      || (_DWORD)(v8 = *(unsigned int *)(a5 + 12)) != 0
      && ((v9 = *(_DWORD *)(v6 + 8 * v8) >> 3, *(__int16 *)(v6 + 8 * v9 + 62) < 5)
       || *(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v9 + 16) + 28) != 87008) )
    {
      v8 = sub_182757000(a1, a2, a3: a5);
    }
    result = a6(a1, a2, a3: v6 + 8 * v8);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_18277F280(a1: v12, a2: v13, a3: v11);
  }
  return result;
}
