// sub_1850308A0
// rva 0x050308a0  size 107  section .text  group text
// window base 0x1850308a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850308A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_10;
  }
  v7 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v7 == 0 )
  {
LABEL_10:
    MEMORY[0x182771080]();
    goto LABEL_11;
  }
  result = *(unsigned int *)(v5 + 8 * v7 + 4);
  v9 = v5 + 8 * result;
  if ( (_DWORD)result == 0 )
    goto LABEL_7;
  result = *(unsigned int *)(v5 + 8 * result + 20);
  v10 = *(unsigned int *)(a3 + 12);
  if ( (int)result < a5 )
    JUMPOUT(0x30A04B8D5LL);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_11:
    MEMORY[0x182771080](a1, a2, a3, a4: v9);
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
    return sub_185030920();
  }
  *(_DWORD *)(v5 + 8 * v10 + 24) = a5;
  __faststorefence();
LABEL_7:
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280](a1, a2, a3, a4: v9);
  return result;
}
