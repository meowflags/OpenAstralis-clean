// sub_184F446C0
// rva 0x04f446c0  size 184  section .text  group text
// window base 0x184f446c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F446C0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 (*v7)(void); // rax
  int v8; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
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
                                         & (0x568u >> HIBYTE(*(_DWORD *)(v4 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 1384 )
  {
    v6 = *a3 >> 3;
    v7 = (__int64 (*)(void))(v3
                           + *(_QWORD *)(v4
                                       + 8 * v6
                                       + HIWORD(*(_DWORD *)(v4
                                                          + 8LL * *(unsigned int *)(v4 + 8 * v6 + 20)
                                                          + 4LL
                                                          * (*(_DWORD *)(v4 + 8 * v6 + 44)
                                                           & (0x568u >> HIBYTE(*(_DWORD *)(v4 + 8 * v6 + 44))))
                                                          + 12))
                                       + 40));
    v14 = a3;
    v8 = v7();
    if ( *(int *)(v5 + 16) <= 0 )
      v8 = MEMORY[0x18277F280]();
    return v8 == 0;
  }
  MEMORY[0x182770780]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_184F44780(a1: v11, a2: v12, a3: v10);
}
