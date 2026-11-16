// sub_1E64E60
// rva 0x01e64e60  size 121  section .text  group text
// window base 0x181e64e60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E64E60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( *(_DWORD *)(a3 + 4) != 0 )
  {
    v9 = a3;
    if ( (unsigned int)sub_1E653E0(a1, a2, a3: v3 + 376651480) != 0 )
    {
      result = v3 + 8LL * *(unsigned int *)(v9 + 8);
      if ( *(int *)(v4 + 16) <= 0 )
        return sub_277F280();
    }
    else
    {
      if ( *(int *)(v4 + 16) <= 0 )
        sub_277F280(a1: v5, a2: v6, a3: v9);
      return v3;
    }
    return result;
  }
  sub_2771080();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_1E64EE0();
}
