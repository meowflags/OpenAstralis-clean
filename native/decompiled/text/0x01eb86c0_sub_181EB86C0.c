// sub_181EB86C0
// rva 0x01eb86c0  size 148  section .text  group text
// window base 0x181eb86c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB86C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  _BOOL8 v11; // r8
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  char v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]
  __int64 v18; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v15);
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
    return ((__int64 (*)(void))sub_181EB8760)();
  }
  else
  {
    v8 = *(unsigned int *)(v7 + 72);
    if ( (_DWORD)v8 != 0 )
    {
      v9 = *(unsigned int *)(v6 + 8 * v8 + 72);
      if ( (_DWORD)v9 != 0 )
        v10 = v6 + 8 * v9;
      else
        v10 = v6 + 8 * v8;
    }
    else
    {
      v10 = v6;
    }
    v17 = a3;
    v11 = *(_BYTE *)(v7 + 248) != 0;
    v16 = v10;
    result = MEMORY[0x18277B0C0](a1, a2, a3: v10, a4, a5: v11);
    if ( result != 0 )
    {
      v18 = result;
      result = sub_181EB8760(a1: v13, a2: v14, a3: result);
    }
    else
    {
      v18 = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
