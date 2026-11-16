// sub_184F29DE0
// rva 0x04f29de0  size 94  section .text  group text
// window base 0x184f29de0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F29DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // [rsp+0h] [rbp-8h] BYREF

  result = a3;
  v8 = a5;
  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0](a1, a2, a3, a4: (unsigned int)a5);
LABEL_11:
    MEMORY[0x182771080]();
    goto LABEL_12;
  }
  if ( a5 >= 0 )
  {
    v9 = *(unsigned int *)(a3 + 16);
    if ( (_DWORD)v9 == 0 )
      goto LABEL_11;
    v10 = *(_DWORD *)(v5 + 8 * v9 + 8);
    if ( (int)v10 <= (int)v8 )
      goto LABEL_5;
    if ( v10 <= v8 )
    {
LABEL_12:
      MEMORY[0x182771220](a1, a2, a3: v8);
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_184F29E40();
    }
    *(_BYTE *)(v5 + 8 * v9 + v8 + 12) = 0;
  }
LABEL_5:
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
