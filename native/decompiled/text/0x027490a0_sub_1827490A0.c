// sub_1827490A0
// rva 0x027490a0  size 157  section .text  group text
// window base 0x1827490a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827490A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64))
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_9;
  if ( a5 == v6
    || *(_DWORD *)(a5 + 8) != 1
    || (_DWORD)(v8 = *(unsigned int *)(a5 + 12)) != 0
    && (v9 = *(_DWORD *)(v6 + 8 * v8) >> 3,
        (unsigned __int16)*(_DWORD *)(v6
                                    + 8LL * *(unsigned int *)(v6 + 8 * v9 + 20)
                                    + 4LL
                                    * (*(_DWORD *)(v6 + 8 * v9 + 44) & (0x1F7Fu >> HIBYTE(*(_DWORD *)(v6 + 8 * v9 + 44))))
                                    + 12) != 8063) )
  {
    sub_182757000(a1, a2, a3: a5);
LABEL_9:
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182749140();
  }
  result = a6(a1, a2, a3: v6 + 8 * v8);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280();
  return result;
}
