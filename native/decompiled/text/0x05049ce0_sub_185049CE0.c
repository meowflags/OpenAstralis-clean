// sub_185049CE0
// rva 0x05049ce0  size 177  section .text  group text
// window base 0x185049ce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185049CE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  unsigned int v8; // eax
  _DWORD *v9; // r9
  __int64 v10; // rcx
  __int64 result; // rax
  _DWORD *v12; // r9
  _DWORD *v13; // rax
  __int64 v14; // [rsp+0h] [rbp-18h] BYREF
  __int64 v15; // [rsp+8h] [rbp-10h]
  _DWORD *v16; // [rsp+10h] [rbp-8h]

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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_185049DA0();
  }
  else
  {
    if ( a5 == v5 )
    {
      result = 0;
      v16 = a5;
      v15 = a3;
    }
    else
    {
      v7 = *a5 >> 3;
      v8 = v5[2 * v7 + 11];
      v9 = &v5[2 * v5[2 * v7 + 5]];
      v10 = HIBYTE(v8);
      if ( (unsigned __int16)v9[(v8 & (0x575u >> SHIBYTE(v8))) + 3] == 1397 )
      {
        v12 = &v5[2 * *(unsigned int *)(a3 + 4)];
        v13 = &v5[2 * *(unsigned int *)(a3 + 8)];
        v15 = a3;
        v16 = a5;
        result = sub_18504A4C0(a1, a2, a3: v12, a4: v10, a5: v13, a6: a5);
      }
      else
      {
        result = 0;
        v16 = a5;
        v15 = a3;
      }
    }
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
