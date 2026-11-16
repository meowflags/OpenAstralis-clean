// sub_1E603A0
// rva 0x01e603a0  size 168  section .text  group text
// window base 0x181e603a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E603A0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rax
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v15; // [rsp+10h] [rbp-28h]
  _DWORD *v16; // [rsp+18h] [rbp-20h]
  unsigned int *v17; // [rsp+20h] [rbp-18h]
  _DWORD *v18; // [rsp+28h] [rbp-10h]
  unsigned int v19; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v6 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1E60460();
  }
  if ( a5 != v5 && *a5 >> 3 != 4260808 )
  {
    v18 = a5;
    v17 = a3;
    sub_276FC00(a1, a2, a3: a5, a4, a5: v5 + 8521616);
    return sub_277F280(a1: v11, a2: v12, a3: v15, a4: v19, a5: v13, a6: v16);
  }
  v18 = a5;
  v7 = a3[3];
  v8 = &v5[2 * a3[1]];
  v9 = &v5[2 * a3[2]];
  v17 = a3;
  v16 = v8;
  v19 = v7;
  v15 = v9;
  result = sub_1E63640(a1, a2, a3: v8, a4: v7, a5: v9, a6: (unsigned int)v7);
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280(a1: v11, a2: v12, a3: v15, a4: v19, a5: v13, a6: v16);
  return result;
}
