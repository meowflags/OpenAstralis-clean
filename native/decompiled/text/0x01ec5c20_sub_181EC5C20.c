// sub_181EC5C20
// rva 0x01ec5c20  size 230  section .text  group text
// window base 0x181ec5c20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC5C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rsi
  char v12; // [rsp+0h] [rbp-18h] BYREF
  __int64 v13; // [rsp+8h] [rbp-10h]
  _DWORD *v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, (__int64)a5, a6, a7: v12);
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
    return sub_181EC5D20();
  }
  else if ( a5 == v6 || *a5 >> 3 != 5058503 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v14 = a5;
      v13 = a3;
      MEMORY[0x18277F280]();
    }
    return 0;
  }
  else
  {
    v9 = *(unsigned int *)(a3 + 4);
    v10 = (unsigned int)a5[1];
    if ( (_DWORD)v10 == (_DWORD)v9 )
    {
      result = 1;
    }
    else if ( (_DWORD)v9 != 0 )
    {
      if ( (_DWORD)v10 != 0 )
      {
        v11 = (unsigned int)v6[2 * v9 + 2];
        if ( (_DWORD)v11 == v6[2 * v10 + 2] )
        {
          v14 = a5;
          v13 = a3;
          result = MEMORY[0x18282F960](a1: 12, a2: v11, a3: &v6[2 * v9], a4, a5: 12, a6: &v6[2 * v10]);
          a5 = v14;
          a3 = v13;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      result = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v14 = a5;
      v13 = a3;
      return MEMORY[0x18277F280]();
    }
  }
  return result;
}
