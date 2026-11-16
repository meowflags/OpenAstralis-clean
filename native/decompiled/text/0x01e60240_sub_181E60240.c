// sub_181E60240
// rva 0x01e60240  size 182  section .text  group text
// window base 0x181e60240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E60240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  unsigned int v7; // eax
  __int64 v8; // rcx
  _DWORD *v9; // r9
  _DWORD *v10; // rdi
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v15; // [rsp+10h] [rbp-28h]
  _DWORD *v16; // [rsp+18h] [rbp-20h]
  __int64 v17; // [rsp+20h] [rbp-18h]
  _DWORD *v18; // [rsp+28h] [rbp-10h]
  unsigned int v19; // [rsp+30h] [rbp-8h]
  unsigned int v20; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_181E60300();
  }
  if ( a5 != v5 && *a5 >> 3 != 4260808 )
  {
    v18 = a5;
    v17 = a3;
    MEMORY[0x18276FC00](a1, a2, a3: a5, a4, a5: v5 + 8521616);
    return MEMORY[0x18277F280](a1: v15, a2: v12, a3: v19, a4: v20, a5: v13, a6: v16);
  }
  v18 = a5;
  v7 = *(unsigned __int8 *)(a3 + 16);
  v8 = *(unsigned int *)(a3 + 12);
  v9 = &v5[2 * *(unsigned int *)(a3 + 4)];
  v10 = &v5[2 * *(unsigned int *)(a3 + 8)];
  v17 = a3;
  v16 = v9;
  v15 = v10;
  v20 = v7;
  v19 = v8;
  result = sub_181E62BC0(a1: 1, a2: (unsigned int)v8, a3: v9, a4: v8, a5: v10, a6: v7);
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v15, a2: v12, a3: v19, a4: v20, a5: v13, a6: v16);
  return result;
}
