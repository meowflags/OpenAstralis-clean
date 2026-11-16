// sub_1815A12A0
// rva 0x015a12a0  size 119  section .text  group text
// window base 0x1815a12a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A12A0(int a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  char v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+14h] [rbp-14h]
  __int64 v12; // [rsp+18h] [rbp-10h]
  __int64 v13; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    v13 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_10;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_10:
    MEMORY[0x182771080]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815A1320();
  }
  if ( *(_DWORD *)(v6 + 8 * v8 + 36) != 0 )
  {
    v13 = a3;
    v12 = v6 + 8 * v8;
    v11 = v8;
    sub_1815A4C20(a1, a2, a3: v6 + 8 * v8, a4: v6 + 8 * v8, a5, a6, a7: v10);
    result = *(unsigned int *)(v6 + 8LL * v11 + 36);
  }
  else
  {
    result = 0;
    v13 = a3;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
