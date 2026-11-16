// sub_1815A4820
// rva 0x015a4820  size 301  section .text  group text
// window base 0x1815a4820: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A4820(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  char v22; // [rsp+0h] [rbp-18h] BYREF
  __int64 v23; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else
  {
    v23 = a3;
    sub_1815A4C20(a1, a2, a3, a4, a5, a6, a7: v22);
    v11 = *(unsigned int *)(v23 + 12);
    v12 = v7 + 8 * v11;
    if ( (_DWORD)v11 != 0 )
    {
      v13 = *(_DWORD *)(v7 + 8 * v11 + 8);
      v14 = v13;
      while ( 1 )
      {
        v6 = (unsigned int)(v14 - 1);
        if ( (int)v14 < 1 )
        {
          if ( *(int *)(v8 + 16) <= 0 )
            MEMORY[0x18277F280](a1: v9, a2: v10, a3: v14, a4: v12);
          return 0;
        }
        if ( v13 <= (unsigned int)v6 )
          goto LABEL_29;
        v15 = *(unsigned int *)(v12 + 4 * v6 + 12);
        if ( (_DWORD)v15 != 0 )
        {
          if ( *(_DWORD *)(v7 + 8 * v15 + 20) == 0 )
          {
LABEL_23:
            if ( *(int *)(v8 + 16) <= 0 )
              MEMORY[0x18277F280]();
            return 1;
          }
          v16 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v15 + 24);
          while ( v16 != v7 )
          {
            if ( *(_DWORD *)(v16 + 20) == 0 )
              goto LABEL_23;
            v17 = v7 + 8LL * *(unsigned int *)(v16 + 24);
            if ( *(int *)(v8 + 16) <= 0 )
            {
              MEMORY[0x18277F280]();
              v16 = v17;
            }
            else
            {
              v16 = v7 + 8LL * *(unsigned int *)(v16 + 24);
            }
          }
          if ( *(int *)(v8 + 16) <= 0 )
          {
LABEL_18:
            MEMORY[0x18277F280]();
            v14 = (unsigned int)v6;
          }
          else
          {
            v14 = (unsigned int)v6;
          }
        }
        else
        {
          if ( *(int *)(v8 + 16) <= 0 )
            goto LABEL_18;
          v14 = (unsigned int)v6;
        }
      }
    }
  }
  MEMORY[0x182771080](a1: v9, a2: v10, a3: v11, a4: v12);
LABEL_29:
  MEMORY[0x182771220](a1: v9, a2: v10, a3: (unsigned int)v6, a4: v12);
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
  return sub_1815A4960(a1: v20, a2: v21, a3: v19);
}
