// sub_181EC5580
// rva 0x01ec5580  size 326  section .text  group text
// window base 0x181ec5580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC5580(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _DWORD *v10; // r14
  __int64 v11; // r15
  _DWORD *v12; // rcx
  __int64 result; // rax
  int v14; // ecx
  int v15; // ebx
  char v16; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v17; // [rsp+20h] [rbp-18h]
  __int64 v18; // [rsp+28h] [rbp-10h]
  _DWORD *v19; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v11 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, (__int64)a5, a6, a7: v16);
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
    return sub_181EC56E0();
  }
  else
  {
    if ( a5 == (_DWORD *)a3 )
    {
      v12 = v10 + 94164836;
      result = 1;
      v19 = a5;
      v18 = a3;
    }
    else if ( a5 == v10 )
    {
      v17 = v10 + 94164846;
      v19 = a5;
      v18 = a3;
      v12 = v10 + 94164846;
      result = 0;
    }
    else if ( *a5 >> 3 == 5058483 )
    {
      if ( *(_DWORD *)(a3 + 8) == a5[2] )
      {
        v14 = *(_DWORD *)(a3 + 4);
        v15 = a5[1];
        if ( v15 == v14 )
        {
          v17 = v10 + 94164846;
          v19 = a5;
          v18 = a3;
          v12 = v10 + 94164846;
          result = 1;
        }
        else
        {
          if ( v14 != 0 )
          {
            v19 = a5;
            v18 = a3;
            return sub_181EC563B(
                     a1,
                     a2,
                     a3: (int)v10 + 8 * v14,
                     a4: (int)v10 + 8 * v14,
                     a5: (int)v10 + 8 * v15,
                     a6,
                     a7,
                     a8,
                     a9,
                     a10);
          }
          v19 = a5;
          v18 = a3;
          v12 = v10 + 94164846;
          result = 0;
        }
      }
      else
      {
        v12 = v10 + 94164846;
        result = 0;
        v19 = a5;
        v18 = a3;
      }
    }
    else
    {
      v12 = v10 + 94164846;
      result = 0;
      v19 = a5;
      v18 = a3;
    }
    if ( *(int *)(v11 + 16) <= 0 )
      return MEMORY[0x18277F280](a1, a2, a3: v19 == (_DWORD *)v18, a4: v12);
  }
  return result;
}
