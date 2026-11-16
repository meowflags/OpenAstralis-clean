// sub_2752DE0
// rva 0x02752de0  size 112  section .text  group text
// window base 0x182752de0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2752DE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void (__fastcall *a6)(__int64, __int64, __int64, __int64, __int64))
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v13; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_10;
  if ( a5 == v6
    || *(_DWORD *)(a5 + 8) != 1
    || (_DWORD)(v8 = *(unsigned int *)(a5 + 12)) != 0 && (_DWORD)(a4 = *(_DWORD *)(v6 + 8 * v8) >> 3) != 4561422 )
  {
    sub_2756FC0();
LABEL_10:
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
    return sub_2752E60();
  }
  a6(a1, a2, a3, a4, a5: v6 + 8 * v8);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1: v10, a2: v11, a3: v9);
  return v6;
}
