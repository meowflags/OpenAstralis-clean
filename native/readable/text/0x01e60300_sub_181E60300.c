// sub_1E60300
// rva 0x01e60300  size 141  section .text  group text
// window base 0x181e60300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E60300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  _DWORD *v8; // rax
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v13; // [rsp+8h] [rbp-20h]
  __int64 v14; // [rsp+10h] [rbp-18h]
  _DWORD *v15; // [rsp+18h] [rbp-10h]
  unsigned int v16; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
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
    return sub_1E603A0();
  }
  if ( a5 != v5 && *a5 >> 3 != 4260808 )
  {
    v15 = a5;
    v14 = a3;
    sub_276FC00(a1, a2, a3: a5, a4, a5: v5 + 8521616);
    return sub_277F280(a1: v10, a2: v11, a3: v13, a4: v16);
  }
  v15 = a5;
  v7 = *(unsigned int *)(a3 + 8);
  v8 = &v5[2 * *(unsigned int *)(a3 + 4)];
  v14 = a3;
  v16 = v7;
  v13 = v8;
  result = sub_1E63720(a1, a2, a3: v8, a4: v7, a5: (unsigned int)v7);
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280(a1: v10, a2: v11, a3: v13, a4: v16);
  return result;
}
