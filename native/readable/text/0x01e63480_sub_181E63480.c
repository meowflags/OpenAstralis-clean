// sub_1E63480
// rva 0x01e63480  size 230  section .text  group text
// window base 0x181e63480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E63480(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 (*v9)(void); // rax
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  _QWORD v23[4]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v24; // [rsp+20h] [rbp-8h]
  int v25; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v23 <= *(_QWORD *)(v7 + 8) )
  {
    v25 = a5;
    sub_1EB84E0();
  }
  else if ( a3 != (_DWORD *)v6 )
  {
    v25 = a5;
    v8 = *a3 >> 3;
    v9 = (__int64 (*)(void))(v5
                           + *(_QWORD *)(v6
                                       + 8 * v8
                                       + HIWORD(*(_DWORD *)(v6
                                                          + 8LL * *(unsigned int *)(v6 + 8 * v8 + 20)
                                                          + 4LL
                                                          * (*(_DWORD *)(v6 + 8 * v8 + 44)
                                                           & (0x749u >> HIBYTE(*(_DWORD *)(v6 + 8 * v8 + 44))))
                                                          + 12))
                                       + 40));
    v23[1] = a3;
    v10 = v9();
    if ( v10 == -1 )
    {
      if ( *(int *)(v7 + 16) <= 0 )
        sub_277F280();
      return v6;
    }
    else
    {
      v13 = *(_QWORD *)(v6 + 376650856);
      v24 = v10;
      v23[3] = v13;
      v23[2] = v6 + 376650688;
      v14 = *(unsigned int *)sub_15A85E0(a1: v11, a2: v12, a3: v13, a4: v10, a5: v10);
      if ( *(int *)(v7 + 16) <= 0 )
        sub_277F280(a1: v15, a2: v16, a3: v24, a4: v14);
      return v6 + 8 * v14;
    }
  }
  sub_2771080();
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
  return sub_1E63580(a1: v20, a2: v21, a3: v18, a4: v19, a5: v22);
}
