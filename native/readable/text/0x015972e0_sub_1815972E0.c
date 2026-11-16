// sub_15972E0
// rva 0x015972e0  size 205  section .text  group text
// window base 0x1815972e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15972E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // ecx
  int v12; // edi
  __int64 v13; // rsi
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-28h] BYREF
  __int64 v23; // [rsp+18h] [rbp-10h]
  __int64 v24; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v9 + 8) )
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
    return sub_15973C0(a1: v20, a2: v21, a3: v19);
  }
  else
  {
    v24 = a3;
    v23 = v8 + 376612936;
    v10 = sub_1582820();
    v15 = *(_QWORD *)(v9 + 40);
    v16 = v15 + 56;
    if ( (unsigned __int64)(v15 + 56) > *(_QWORD *)(v9 + 32) )
    {
      return sub_181597385(a1: v12, a2: v13, a3: v15, a4: v11, a5: v16, a6: v14, a7, a8);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v16;
      *(_DWORD *)v15 = 35795224;
      *(_DWORD *)(v15 + 4) = 0;
      *(_QWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 16) = 0;
      *(_QWORD *)(v15 + 24) = 0;
      *(_QWORD *)(v15 + 32) = 0;
      *(_QWORD *)(v15 + 40) = 0;
      *(_QWORD *)(v15 + 48) = 0;
      v17 = v23;
      v23 = v15;
      sub_1587F60(a1: 1, a2: v13, a3: v15, a4: v15, a5: v17, a6: v10);
      if ( *(int *)(v9 + 16) <= 0 )
        sub_277F280();
      return v23;
    }
  }
}
