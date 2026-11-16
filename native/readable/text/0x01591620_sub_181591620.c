// sub_1591620
// rva 0x01591620  size 219  section .text  group text
// window base 0x181591620: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1591620(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _DWORD *v3; // r14
  __int64 v4; // r15
  _DWORD *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *, _QWORD, _DWORD *); // rcx
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_7;
  }
  v5 = (_DWORD *)sub_580DD20(a1, a2, a3: v3 + 94153010);
  if ( v5 == v3 )
  {
LABEL_7:
    sub_2771080();
  }
  else if ( (unsigned __int16)v3[2 * v3[2 * (*v5 >> 3) + 5]
                               + 3
                               + (v3[2 * (*v5 >> 3) + 11] & (0x1EFBu >> HIBYTE(v3[2 * (*v5 >> 3) + 11])))] == 7931 )
  {
    v8 = *v5 >> 3;
    v9 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _DWORD *))(v2
                                                                              + *(_QWORD *)((char *)&v3[2 * v8 + 6]
                                                                                          + HIWORD(v3[2 * v3[2 * v8 + 5] + 3 + (v3[2 * v8 + 11] & (0x1EFBu >> HIBYTE(v3[2 * v8 + 11])))])));
    result = v9(a1: v6, a2: v7, a3: v5, a4: v9, a5: v3 + 90433826);
    if ( *(int *)(v4 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2770780();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_1591700();
}
