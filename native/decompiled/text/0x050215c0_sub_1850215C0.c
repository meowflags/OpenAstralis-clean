// sub_1850215C0
// rva 0x050215c0  size 178  section .text  group text
// window base 0x1850215c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850215C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 result; // rax
  _QWORD v12[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v12 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v8 )
  {
    v10 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v10 + 24) > *(_QWORD *)(v9 + 32) )
      return sub_185021643(a1, a2, a3, a4, a5: v10, a6, a7, a8);
    *(_QWORD *)(v9 + 40) = v10 + 24;
    *(_DWORD *)v10 = 43304504;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    *(_DWORD *)(v10 + 12) = *(_DWORD *)(a3 + 8) >> 1;
    *(_DWORD *)(v10 + 4) = (unsigned __int64)(a3 - v8) >> 3;
    v12[2] = a3;
    result = MEMORY[0x185BEDAC0](a1, a2, a3: v10, a4, a5: 0);
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
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
  return sub_185021680();
}
