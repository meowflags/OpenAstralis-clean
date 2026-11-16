// sub_18278D3A0
// rva 0x0278d3a0  size 326  section .text  group text
// window base 0x18278d3a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18278D3A0(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _DWORD *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 result; // rax
  int v14; // eax
  int v15; // ebx
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v17; // [rsp+20h] [rbp-18h]
  _DWORD *v18; // [rsp+28h] [rbp-10h]
  _DWORD *v19; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v11 + 8) )
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
    return sub_18278D500();
  }
  else
  {
    if ( a5 == a3 )
    {
      v12 = (__int64)(v10 + 94167566);
      result = 1;
      v19 = a5;
      v18 = a3;
    }
    else
    {
      v12 = (__int64)(v10 + 94167576);
      if ( a5 == v10 )
      {
        v17 = v10 + 94167576;
        v19 = a5;
        v18 = a3;
        result = 0;
      }
      else if ( *a5 >> 3 == 5068042 )
      {
        if ( a3[2] == a5[2] )
        {
          v14 = a3[1];
          v15 = a5[1];
          if ( v15 == v14 )
          {
            v17 = v10 + 94167576;
            v19 = a5;
            v18 = a3;
            result = 1;
          }
          else
          {
            if ( v14 != 0 )
            {
              v19 = a5;
              v18 = a3;
              return sub_18278D464(a1, a2, a3: (int)v10 + 8 * v14, a4: v12, a5: (int)v10 + 8 * v15, a6, a7, a8, a9, a10);
            }
            v19 = a5;
            v18 = a3;
            result = 0;
          }
        }
        else
        {
          result = 0;
          v19 = a5;
          v18 = a3;
        }
      }
      else
      {
        result = 0;
        v19 = a5;
        v18 = a3;
      }
    }
    if ( *(int *)(v11 + 16) <= 0 )
      return sub_18277F280(a1, a2, a3: v19 == v18, a4: v12);
  }
  return result;
}
