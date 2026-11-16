// sub_50591A0
// rva 0x050591a0  size 199  section .text  group text
// window base 0x1850591a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50591A0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 (*v11)(void); // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v23; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v9 + 8) )
  {
    v23 = a3;
    sub_1EB84E0();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v8
                                        + 8LL * *(unsigned int *)(v8 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v8 + 8LL * (*a3 >> 3) + 44)
                                         & (0x589u >> HIBYTE(*(_DWORD *)(v8 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 1417 )
  {
    v10 = *a3 >> 3;
    v11 = (__int64 (*)(void))(v7
                            + *(_QWORD *)(v8
                                        + 8 * v10
                                        + HIWORD(*(_DWORD *)(v8
                                                           + 8LL * *(unsigned int *)(v8 + 8 * v10 + 20)
                                                           + 4LL
                                                           * (*(_DWORD *)(v8 + 8 * v10 + 44)
                                                            & (0x589u >> HIBYTE(*(_DWORD *)(v8 + 8 * v10 + 44))))
                                                           + 12))
                                        + 8));
    v23 = a3;
    v12 = v11();
    if ( v12 == v8 )
    {
LABEL_9:
      sub_2771080(a1: v13, a2: v14, a3: v23);
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
      return sub_5059280(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21, a7);
    }
    if ( *(int *)(v9 + 16) <= 0 )
      v12 = sub_277F280();
    return *(unsigned int *)(v12 + 20);
  }
  v23 = a3;
  sub_2770780();
  goto LABEL_9;
}
