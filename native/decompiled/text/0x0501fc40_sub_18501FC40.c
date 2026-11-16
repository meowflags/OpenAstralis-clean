// sub_18501FC40
// rva 0x0501fc40  size 267  section .text  group text
// window base 0x18501fc40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501FC40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // r9d
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rsi
  _DWORD v16[6]; // [rsp+0h] [rbp-18h] BYREF

  result = a3;
  if ( (unsigned __int64)v16 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_17:
    MEMORY[0x182771080]();
    goto LABEL_18;
  }
  v11 = (unsigned int)(2 * a5);
  v12 = 2 * a6;
  if ( v12 <= (int)v11 )
  {
LABEL_3:
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  LODWORD(v6) = a2 + 1;
  if ( a3 == v8 )
    goto LABEL_17;
  v7 = *(_DWORD *)(a3 + 8);
  if ( v7 <= (unsigned int)v11 )
  {
LABEL_18:
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)v11, a4: v11, a5: v7);
  }
  else if ( a1 != v8 )
  {
    v13 = *(_DWORD *)(a1 + 8);
    if ( v13 > (unsigned int)a2 )
    {
      *(_BYTE *)(a1 + (unsigned int)a2 + 12) = *(_BYTE *)(a3 + v11 + 12);
      v16[5] = v11 + 2;
      v14 = (unsigned int)v6;
      v6 = (unsigned int)(v11 + 2);
      while ( v12 > (int)v6 )
      {
        v15 = (unsigned int)(v14 + 1);
        if ( v7 <= (unsigned int)v6 )
          goto LABEL_21;
        if ( v13 <= (unsigned int)v14 )
          goto LABEL_22;
        *(_BYTE *)(a1 + v14 + 12) = *(_BYTE *)(result + v6 + 12);
        v6 = (unsigned int)(v6 + 2);
        v14 = (unsigned int)v15;
      }
      goto LABEL_3;
    }
LABEL_20:
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)a2);
LABEL_21:
    MEMORY[0x182771220](a1, a2: v15, a3: (unsigned int)v6, a4: v11, a5: v7);
LABEL_22:
    MEMORY[0x182771220](a1, a2: v15);
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
    return sub_18501FD60();
  }
  MEMORY[0x182771080]();
  goto LABEL_20;
}
