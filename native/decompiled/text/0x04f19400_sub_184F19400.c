// sub_184F19400
// rva 0x04f19400  size 107  section .text  group text
// window base 0x184f19400: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F19400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+10h] [rbp-18h]
  __int64 v12; // [rsp+18h] [rbp-10h]
  int v13; // [rsp+20h] [rbp-8h]
  int v14; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    v13 = a1;
    v14 = a6;
    v11 = a5;
    v12 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_6;
  }
  v8 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_6:
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
    return sub_184F19480();
  }
  v12 = a3;
  v11 = a5;
  v14 = a6;
  v13 = a1;
  result = MEMORY[0x18C8BBAC0](a1, a2, a3: v6 + 8 * v8);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
