// sub_182750BE0
// rva 0x02750be0  size 157  section .text  group text
// window base 0x182750be0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182750BE0(
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
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v14; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_10;
  if ( a5 == v6
    || *(_DWORD *)(a5 + 8) != 1
    || (_DWORD)(v8 = *(unsigned int *)(a5 + 12)) != 0
    && (v9 = *(_DWORD *)(v6 + 8 * v8) >> 3,
        a2 = *(_DWORD *)(v6 + 8 * v9 + 44) & (0x18A2u >> HIBYTE(*(_DWORD *)(v6 + 8 * v9 + 44))),
        (_DWORD)(a4 = (unsigned __int16)*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v9 + 20) + 4 * a2 + 12)) != 6306) )
  {
    sub_182756FC0();
LABEL_10:
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182750C80();
  }
  a6(a1, a2, a3, a4, a5: v6 + 8 * v8);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_18277F280(a1: v11, a2: v12, a3: v10);
  return v6;
}
