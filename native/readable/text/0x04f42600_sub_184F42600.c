// sub_4F42600
// rva 0x04f42600  size 139  section .text  group text
// window base 0x184f42600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F42600(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v4 + 8) )
  {
    v10 = a3;
    sub_1EB84E0();
    goto LABEL_7;
  }
  v5 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v5 == 0 )
  {
LABEL_7:
    v10 = a3;
    sub_2771080();
    goto LABEL_8;
  }
  v6 = *(_DWORD *)(v3 + 8 * v5) >> 3;
  v7 = *(_DWORD *)(v3 + 8 * v6 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v3 + 8 * v6 + 44)));
  if ( (unsigned __int16)*(_DWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 8 * v6 + 20) + 4 * v7 + 12) != 1384 )
  {
LABEL_8:
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
    return sub_4F426A0();
  }
  v10 = a3;
  result = sub_4F44780(a1, a2: v7, a3: v3 + 8 * v5);
  if ( *(int *)(v4 + 16) <= 0 )
    return sub_277F280();
  return result;
}
