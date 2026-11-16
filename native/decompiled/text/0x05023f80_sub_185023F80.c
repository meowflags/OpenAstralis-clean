// sub_185023F80
// rva 0x05023f80  size 306  section .text  group text
// window base 0x185023f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185023F80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        int a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned int v14; // r9d
  unsigned __int64 v15; // rdi
  unsigned __int64 i; // r8
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+10h] [rbp-18h]
  __int64 v20; // [rsp+18h] [rbp-10h]
  unsigned int v21; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v11 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v10 )
  {
    v12 = *(_QWORD *)(v11 + 40);
    v13 = *(_QWORD *)(v11 + 32);
    v14 = *(_DWORD *)(a3 + 8) >> 1;
    v15 = (2LL * v14 + 19) & 0x1FFFFFFF8LL;
    if ( v15 >= 0x20000 || v12 + v15 > v13 )
      return sub_185024062(a1: v15, a2: 34089376, a3, a4, a5: v13, a6: v14, a7, a8, a9, a10);
    *(_QWORD *)(v11 + 40) = v12 + v15;
    *(_QWORD *)v12 = 34089376;
    *(_DWORD *)(v12 + 8) = v14;
    *(_DWORD *)(v12 + 12) = 0;
    if ( v15 - 16 >= 0x800 )
    {
      v21 = v14;
      v20 = a3;
      memset((void *)(v12 + 16), 0, v15 - 16);
      a4 = 0;
    }
    else
    {
      for ( i = 16; v15 > i; i += 8LL )
        *(_QWORD *)(v12 + i) = 0;
    }
    v20 = a3;
    v19 = v12;
    sub_18501FD60(a1: v12, a2: 0, a3, a4, a5: 0, a6: v14);
    if ( *(int *)(v11 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v19;
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
  return sub_1850240C0();
}
