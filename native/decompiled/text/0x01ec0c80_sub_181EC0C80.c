// sub_181EC0C80
// rva 0x01ec0c80  size 242  section .text  group text
// window base 0x181ec0c80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC0C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  _BOOL8 v8; // rcx
  int v10; // ecx
  int v11; // ebx
  int v12; // ecx
  int v13; // ebx
  char v14; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v14);
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
    return sub_181EC0D80();
  }
  if ( a5 == a3 )
  {
    v8 = true;
  }
  else if ( a5 == v6 )
  {
    v8 = false;
  }
  else if ( *(_DWORD *)a5 >> 3 == 5058423 )
  {
    if ( *(_WORD *)(a3 + 16) == *(_WORD *)(a5 + 16) )
    {
      if ( *(_DWORD *)(a3 + 12) == *(_DWORD *)(a5 + 12) )
      {
        v10 = *(_DWORD *)(a3 + 8);
        v11 = *(_DWORD *)(a5 + 8);
        if ( v11 == v10 )
          goto LABEL_15;
        if ( v10 == 0 )
        {
          v8 = false;
          goto LABEL_6;
        }
        if ( v11 == v10 )
        {
LABEL_15:
          v12 = *(_DWORD *)(a3 + 4);
          v13 = *(_DWORD *)(a5 + 4);
          if ( v13 == v12 )
            v8 = true;
          else
            v8 = v12 != 0 && v13 == v12;
        }
        else
        {
          v8 = false;
        }
      }
      else
      {
        v8 = false;
      }
    }
    else
    {
      v8 = false;
    }
  }
  else
  {
    v8 = false;
  }
LABEL_6:
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280](a1, a2, a3, a4: v8);
  return v8;
}
