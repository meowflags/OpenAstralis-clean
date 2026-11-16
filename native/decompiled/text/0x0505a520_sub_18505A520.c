// sub_18505A520
// rva 0x0505a520  size 218  section .text  group text
// window base 0x18505a520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18505A520(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 (*v7)(void); // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v5 + 8) )
  {
    v14 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v4
                                        + 8LL * *(unsigned int *)(v4 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v4 + 8LL * (*a3 >> 3) + 44)
                                         & (0x1EAEu >> HIBYTE(*(_DWORD *)(v4 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 7854 )
  {
    v6 = *a3 >> 3;
    v7 = (__int64 (*)(void))(v3
                           + *(_QWORD *)(v4
                                       + 8 * v6
                                       + HIWORD(*(_DWORD *)(v4
                                                          + 8LL * *(unsigned int *)(v4 + 8 * v6 + 20)
                                                          + 4LL
                                                          * (*(_DWORD *)(v4 + 8 * v6 + 44)
                                                           & (0x1EAEu >> HIBYTE(*(_DWORD *)(v4 + 8 * v6 + 44))))
                                                          + 12))
                                       + 8));
    v14 = a3;
    v8 = v7();
    if ( v8 == v4 )
    {
LABEL_8:
      MEMORY[0x182771080](a1: v10, a2: v11, a3: v14);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_18505A600();
    }
    result = MEMORY[0x1858EA3A0](a1: v10, a2: v11, a3: v8, a4: v9, a5: v4 + 377215880);
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v14 = a3;
  MEMORY[0x182770780]();
  goto LABEL_8;
}
