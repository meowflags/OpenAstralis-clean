// sub_181EB2BC0
// rva 0x01eb2bc0  size 220  section .text  group text
// window base 0x181eb2bc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB2BC0(int a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, (_DWORD)a3, a4, (_DWORD)a5, a6, a7: v11);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181EB2CA0();
  }
  else if ( a5 == a3 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 1;
  }
  else if ( a5 == v6 || *a5 >> 3 != 5058234 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 0;
  }
  else
  {
    if ( a3[3] == a5[3] )
    {
      v9 = (unsigned int)a3[1];
      v10 = (unsigned int)a5[1];
      if ( (_DWORD)v10 == (_DWORD)v9 )
      {
        result = 1;
      }
      else if ( (_DWORD)v9 != 0 )
      {
        result = (_DWORD)v10 != 0 && v6[2 * v10 + 3] == v6[2 * v9 + 3];
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
      return MEMORY[0x18277F280]();
  }
  return result;
}
