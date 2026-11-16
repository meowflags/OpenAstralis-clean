// sub_15973C0
// rva 0x015973c0  size 166  section .text  group text
// window base 0x1815973c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15973C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+8h] [rbp-10h]
  __int64 v15; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v9 + 8) )
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
    return sub_1597480();
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 40);
    v11 = v10 + 24;
    if ( (unsigned __int64)(v10 + 24) > *(_QWORD *)(v9 + 32) )
    {
      return sub_18159743E(a1, a2, a3, a4: v11, a5, a6, a7, a8);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v11;
      *(_DWORD *)v10 = 35797560;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_DWORD *)(v10 + 8) = 2;
      *(_DWORD *)(v10 + 4) = (unsigned __int64)(a3 - v8) >> 3;
      v15 = a3;
      v14 = v10;
      sub_5F04780(a1, a2, a3: v10);
      if ( *(int *)(v9 + 16) <= 0 )
        sub_277F280();
      return v14;
    }
  }
}
