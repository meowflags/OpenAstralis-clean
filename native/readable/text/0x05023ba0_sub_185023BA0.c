// sub_5023BA0
// rva 0x05023ba0  size 116  section .text  group text
// window base 0x185023ba0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5023BA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v3 + 8) )
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
    return sub_5023C20(a1: v8, a2: v9, a3: v6, a4: v7, a5: v10, a6: v11);
  }
  else
  {
    result = *(_QWORD *)(v3 + 40);
    v5 = 34082368;
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v3 + 32) )
    {
      v13 = a3;
      result = sub_1EAA840(a1, a2, a3: 34082368, a4: 34082368, a5: 2);
      a3 = v13;
    }
    else
    {
      *(_QWORD *)(v3 + 40) = result + 16;
      *(_QWORD *)result = 34082368;
      *(_DWORD *)(result + 8) = 2;
      *(_DWORD *)(result + 12) = 0;
    }
    *(_WORD *)(result + 12) = a3;
    if ( *(int *)(v3 + 16) <= 0 )
    {
      v13 = a3;
      return sub_277F280(a1, a2, a3, a4: v5);
    }
  }
  return result;
}
