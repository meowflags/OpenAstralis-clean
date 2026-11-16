// sub_184F4FA00
// rva 0x04f4fa00  size 334  section .text  group text
// window base 0x184f4fa00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F4FA00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  __int64 v13; // [rsp+8h] [rbp-10h]
  int v14; // [rsp+10h] [rbp-8h]
  int v15; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v6 + 8) )
  {
    LODWORD(v8) = a5;
    v13 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_18;
  }
  v7 = *(unsigned __int16 *)(v5 + 2LL * ((unsigned __int16)a5 >> 5) + 377151500);
  v8 = (unsigned int)v7 | ((unsigned __int16)a5 >> 1) & 0xF;
  if ( (unsigned int)v8 >= 0x17B0 )
  {
LABEL_18:
    v13 = a3;
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)v8, a4: v7, a5: 6064);
    goto LABEL_19;
  }
  v9 = *(unsigned __int16 *)(v5 + 2 * v8 + 377155612) | (unsigned int)(a5 & 1);
  if ( (unsigned int)v9 >= 0x420 )
  {
LABEL_19:
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)v9, a4: v9, a5: 1056);
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
    return sub_184F4FB60();
  }
  v10 = *(_DWORD *)(v5 + 4 * v9 + 377167756);
  if ( (v10 & 0x8000) != 0 )
  {
    if ( (v10 & 0x10000) != 0 )
    {
      if ( (v10 & 0x20000) != 0 )
      {
        v15 = *(_DWORD *)(v5 + 4 * v9 + 377167756);
        v13 = a3;
      }
      else
      {
        v15 = *(_DWORD *)(v5 + 4 * v9 + 377167756);
        v13 = a3;
        if ( (unsigned int)(a5 - 4304) >= 0x30 )
          a5 = (unsigned int)(a5 - 1);
      }
    }
    else
    {
      v15 = *(_DWORD *)(v5 + 4 * v9 + 377167756);
      v14 = a5;
      v13 = a3;
      a5 = (unsigned int)(a5 + 1);
    }
  }
  else
  {
    v15 = *(_DWORD *)(v5 + 4 * v9 + 377167756);
    v13 = a3;
    if ( (v10 & 0x10000) != 0 )
    {
      v14 = a5;
      a5 = (unsigned int)sub_184F4FB60();
    }
  }
  if ( *(int *)(v6 + 16) <= 0 )
    MEMORY[0x18277F280](a1, a2, a3, a4: v9, a5);
  return (unsigned int)a5;
}
