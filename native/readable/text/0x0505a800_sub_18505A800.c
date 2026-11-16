// sub_505A800
// rva 0x0505a800  size 166  section .text  group text
// window base 0x18505a800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_505A800(
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
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+18h] [rbp-10h]
  __int64 v22; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v9 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_505A8C0();
  }
  else
  {
    v22 = a3;
    v21 = sub_5FE0680();
    v12 = sub_58ABC60(a1: v10, a2: v11, a3: v21);
    v17 = *(_QWORD *)(v9 + 40);
    v18 = v17 + 24;
    if ( (unsigned __int64)(v17 + 24) > *(_QWORD *)(v9 + 32) )
    {
      return sub_18505A87A(a1: v13, a2: v14, a3: v17, a4: v18, a5: v15, a6: v16, a7, a8);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v18;
      *(_DWORD *)v17 = 43316336;
      *(_DWORD *)(v17 + 4) = 0;
      *(_QWORD *)(v17 + 8) = 0;
      *(_QWORD *)(v17 + 16) = 0;
      *(_DWORD *)(v17 + 8) = (unsigned __int64)(v12 - v8) >> 3;
      *(_DWORD *)(v17 + 4) = 47151987;
      if ( *(int *)(v9 + 16) <= 0 )
        sub_277F280(a1: v13, a2: v14, a3: v17, a4: v21);
      return v17;
    }
  }
}
