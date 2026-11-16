// sub_184F2A940
// rva 0x04f2a940  size 176  section .text  group text
// window base 0x184f2a940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2A940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // [rsp+0h] [rbp-8h] BYREF

  result = a3;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_19:
    MEMORY[0x182771080](a1, a2, a3: v10, a4: v11);
    goto LABEL_20;
  }
  v10 = *(unsigned int *)(a3 + 16);
  if ( a5 < 0 )
    JUMPOUT(0x309E40960LL);
  v11 = (unsigned int)a5;
  if ( (_DWORD)v10 == 0 )
    goto LABEL_19;
  v6 = *(_DWORD *)(v7 + 8 * v10 + 8);
  if ( (int)v6 > a6 )
    v12 = a6;
  else
    v12 = v6 - 1;
  if ( a5 > v12 )
  {
LABEL_13:
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280](a1, a2, a3: v10, a4: v11);
    return result;
  }
  a2 = (unsigned int)(a5 + 1);
  if ( v6 > a5 )
  {
    v10 = v7 + 8 * v10;
    *(_BYTE *)(v10 + (unsigned int)a5 + 12) = 1;
    while ( (int)a2 <= v12 )
    {
      v13 = (unsigned int)(a2 + 1);
      if ( v6 <= (unsigned int)a2 )
        goto LABEL_21;
      *(_BYTE *)(v10 + a2 + 12) = 1;
      a2 = (unsigned int)v13;
    }
    v11 = (unsigned int)a2;
    goto LABEL_13;
  }
LABEL_20:
  MEMORY[0x182771220](a1, a2, a3: (unsigned int)v11, a4: v11, a5: v6);
LABEL_21:
  MEMORY[0x182771220](a1, a2, a3: (unsigned int)a2, a4: v13, a5: v6);
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
  return sub_184F2AA00();
}
