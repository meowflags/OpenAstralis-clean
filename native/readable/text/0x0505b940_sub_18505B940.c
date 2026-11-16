// sub_505B940
// rva 0x0505b940  size 166  section .text  group text
// window base 0x18505b940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_505B940(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v4 + 8) )
  {
    v11 = a3;
    sub_1EB84E0();
    goto LABEL_7;
  }
  v5 = (unsigned __int16)*(_DWORD *)(v3
                                   + 8LL * *(unsigned int *)(v3 + 8LL * (*a3 >> 3) + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v3 + 8LL * (*a3 >> 3) + 44)
                                    & (0x1ECEu >> HIBYTE(*(_DWORD *)(v3 + 8LL * (*a3 >> 3) + 44))))
                                   + 12);
  if ( (_DWORD)v5 != 7886 )
  {
LABEL_7:
    v11 = a3;
    sub_2770780();
  }
  else if ( *a3 >> 3 == 5414848 )
  {
    v11 = a3;
    v6 = sub_505E800();
    result = sub_5FE0B60(a1: v7, a2: v8, a3: v6);
    if ( *(int *)(v4 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_276FC00(a1, a2, a3, a4: v5, a5: v3 + 43319120);
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
  return sub_505BA00();
}
