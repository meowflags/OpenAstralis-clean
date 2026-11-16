// sub_502ABE0
// rva 0x0502abe0  size 235  section .text  group text
// window base 0x18502abe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502ABE0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64, _DWORD *, _DWORD *, __int64, __int64); // rax
  __int64 result; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // esi
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+8h] [rbp-20h]
  __int64 v21; // [rsp+10h] [rbp-18h]
  __int64 v22; // [rsp+18h] [rbp-10h]
  _DWORD *v23; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v9 + 8) )
  {
    v20 = a1;
    v21 = a6;
    v22 = a5;
    v23 = a3;
    sub_1EB84E0();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v8
                                        + 8LL * *(unsigned int *)(v8 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v8 + 8LL * (*a3 >> 3) + 44)
                                         & (0x572u >> HIBYTE(*(_DWORD *)(v8 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 1394 )
  {
    v10 = *a3 >> 3;
    v11 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64, __int64))(v7
                                                                                         + *(_QWORD *)(v8 + 8 * v10 + HIWORD(*(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v10 + 20) + 4LL * (*(_DWORD *)(v8 + 8 * v10 + 44) & (0x572u >> HIBYTE(*(_DWORD *)(v8 + 8 * v10 + 44)))) + 12)) + 64));
    v23 = a3;
    v22 = a5;
    v21 = a6;
    v20 = a1;
    result = v11(a1: a6, a2: a1, a3, a4: a3, a5, a6: v8);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2770780();
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
  return sub_502ACE0(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18, a7);
}
