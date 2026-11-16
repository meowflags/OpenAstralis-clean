// sub_185057440
// rva 0x05057440  size 262  section .text  group text
// window base 0x185057440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185057440(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  void (__fastcall *v12)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+8h] [rbp-20h]
  _DWORD *v18; // [rsp+10h] [rbp-18h]
  __int64 v19; // [rsp+18h] [rbp-10h]
  unsigned int v20; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v5 + 8) )
  {
    v18 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v4
                                        + 8LL * *(unsigned int *)(v4 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v4 + 8LL * (*a3 >> 3) + 44)
                                         & (0x1E9Du >> HIBYTE(*(_DWORD *)(v4 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 7837 )
  {
    v6 = *a3 >> 3;
    v7 = v4 + 8LL * *(unsigned int *)(v4 + 8 * v6 + 20);
    v8 = *(_DWORD *)(v4 + 8 * v6 + 44) & (0x1E9Du >> HIBYTE(*(_DWORD *)(v4 + 8 * v6 + 44)));
    v9 = v4 + 8 * v6;
    v10 = *(_QWORD *)(v9 + HIWORD(*(_DWORD *)(v7 + 4 * v8 + 12)) + 1536);
    v19 = v9;
    v18 = a3;
    v17 = v7;
    v20 = v8;
    v11 = ((__int64 (*)(void))(v3 + v10))();
    v12 = (void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v3
                                                                           + *(_QWORD *)(v19
                                                                                       + HIWORD(*(_DWORD *)(v17 + 4LL * v20 + 12))
                                                                                       + 1216));
    v19 = v11;
    v12(a1: v13, a2: v14, a3: v18, a4: v12, a5: v11);
    if ( *(int *)(v5 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v19;
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
  return sub_185057560();
}
