// sub_181ECAA80
// rva 0x01ecaa80  size 326  section .text  group text
// window base 0x181ecaa80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ECAA80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 i; // rsi
  int v19; // edx
  int v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // r8d
  int v24; // r9d
  char v25; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v9 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v25);
LABEL_31:
    MEMORY[0x182771220](a1, a2: i, a3: (unsigned int)i, a4: v13, a5: v7);
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
    return sub_181ECABE0(a1: v21, a2: v22, a3: v19, a4: v20, a5: v23, a6: v24, a7);
  }
  else
  {
    v11 = *(unsigned int *)(v9 + 72);
    if ( (_DWORD)v11 != 0 )
    {
      v12 = *(unsigned int *)(v8 + 8 * v11 + 72);
      if ( (_DWORD)v12 != 0 )
        v13 = v8 + 8 * v12;
      else
        v13 = v8 + 8 * v11;
    }
    else
    {
      v13 = v8;
    }
    if ( v8 + 8LL * *(unsigned int *)(a3 + 12) == v13 )
    {
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return 1;
    }
    else
    {
      v14 = *(unsigned int *)(a3 + 16);
      v15 = v8 + 8 * v14;
      if ( v15 == v13 )
      {
        if ( *(int *)(v9 + 16) <= 0 )
          MEMORY[0x18277F280]();
        return 1;
      }
      else
      {
        if ( (_DWORD)v14 != 0 )
        {
          v16 = *(_DWORD *)(v8 + 8 * v14) >> 3;
          if ( *(__int16 *)(v8 + 8 * v16 + 62) >= 3
            && *(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v16 + 16) + 20) == 85404 )
          {
            v7 = *(_DWORD *)(v8 + 8 * v14 + 8);
            for ( i = 0; (int)v7 > (int)i; i = (unsigned int)(i + 1) )
            {
              if ( v7 <= (unsigned int)i )
                goto LABEL_31;
              if ( v8 + 8LL * *(unsigned int *)(v15 + 4 * i + 12) == v13 )
              {
                if ( *(int *)(v9 + 16) <= 0 )
                  MEMORY[0x18277F280]();
                return 1;
              }
            }
          }
        }
        if ( *(int *)(v9 + 16) <= 0 )
          MEMORY[0x18277F280]();
        return 0;
      }
    }
  }
}
