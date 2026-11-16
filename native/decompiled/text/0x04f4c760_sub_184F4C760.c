// sub_184F4C760
// rva 0x04f4c760  size 464  section .text  group text
// window base 0x184f4c760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F4C760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  int v9; // r8d
  unsigned int v10; // edx
  __int64 v11; // rsi
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v19; // [rsp+0h] [rbp-8h] BYREF

  v8 = (unsigned int)a5;
  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0](a1, a2, a3, a4: (unsigned int)a5);
LABEL_29:
    MEMORY[0x182771220](a1, a2: v11, a3: (unsigned int)v5, a4: v8, a5: 103);
    goto LABEL_30;
  }
  if ( a5 < 8099 )
  {
    v9 = 0;
    v10 = 51;
  }
  else
  {
    v9 = 51;
    v10 = 103;
  }
  v5 = (v9 + v10) >> 1;
  v11 = v10;
  v12 = v9;
  while ( (int)v11 - v12 >= 2 )
  {
    if ( (unsigned int)v5 >= 0x67 )
      goto LABEL_34;
    v13 = *(unsigned int *)(v6 + 4 * v5 + 377171996);
    if ( (_DWORD)v13 == 0 )
      goto LABEL_35;
    if ( *(_DWORD *)(v6 + 8 * v13 + 8) == 0 )
      goto LABEL_36;
    v14 = *(unsigned int *)(v6 + 8 * v13 + 12);
    if ( (_DWORD)v14 == 0 )
      goto LABEL_37;
    if ( *(_DWORD *)(v6 + 8 * v14 + 8) == 0 )
      goto LABEL_38;
    if ( *(unsigned __int16 *)(v6 + 8 * v14 + 12) > (int)v8 )
      v11 = (unsigned int)v5;
    else
      v12 = v5;
    v15 = (unsigned int)((v12 + (int)v11) / 2);
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280](a1, a2: v11, a3: (unsigned int)(v12 + v11), a4: v8, a5: v15);
    v5 = (unsigned int)v15;
  }
  if ( (unsigned int)v5 >= 0x67 )
    goto LABEL_29;
  v16 = *(unsigned int *)(v6 + 4 * v5 + 377171996);
  if ( (_DWORD)v16 == 0 )
  {
LABEL_30:
    MEMORY[0x182771080]();
  }
  else if ( *(_DWORD *)(v6 + 8 * v16 + 8) != 0 )
  {
    v17 = *(unsigned int *)(v6 + 8 * v16 + 12);
    if ( (_DWORD)v17 == 0 )
    {
LABEL_32:
      MEMORY[0x182771080]();
      goto LABEL_33;
    }
    if ( *(_DWORD *)(v6 + 8 * v17 + 8) != 0 )
    {
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280]();
      if ( *(unsigned __int16 *)(v6 + 8 * v17 + 12) == (_DWORD)v8 )
        return (unsigned int)v5;
      else
        return 0xFFFFFFFFLL;
    }
LABEL_33:
    MEMORY[0x182771220](a1, a2: v11, a3: 0, a4: v8, a5: 0);
LABEL_34:
    MEMORY[0x182771220](a1, a2: v11, a3: (unsigned int)v5, a4: v8, a5: 103);
LABEL_35:
    MEMORY[0x182771080]();
LABEL_36:
    MEMORY[0x182771220](a1, a2: v11, a3: 0, a4: v8, a5: 0);
LABEL_37:
    MEMORY[0x182771080]();
LABEL_38:
    MEMORY[0x182771220](a1, a2: v11, a3: 0, a4: v8, a5: 0);
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
    return sub_184F4C940();
  }
  MEMORY[0x182771220](a1, a2: v11, a3: 0, a4: v8, a5: 0);
  goto LABEL_32;
}
