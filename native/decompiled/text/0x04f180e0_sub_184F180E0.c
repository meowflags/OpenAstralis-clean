// sub_184F180E0
// rva 0x04f180e0  size 117  section .text  group text
// window base 0x184f180e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F180E0(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  char v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+8h] [rbp-20h]
  __int64 v17; // [rsp+10h] [rbp-18h]
  unsigned int v18; // [rsp+1Ch] [rbp-Ch]
  unsigned int v19; // [rsp+20h] [rbp-8h]
  unsigned int v20; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    v19 = a1;
    v20 = a6;
    v17 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v6 )
  {
    v17 = a3;
    v8 = *(_DWORD *)(a5 + 8);
    v16 = a5;
    v20 = a6;
    v19 = a1;
    v18 = v8;
    MEMORY[0x186329C40](a1: v6, a2, a3: a6, a4, a5: a1, a6: v8);
    result = sub_184F17FC0(a1: v10, a2: v11, a3: v17, a4: v9, a5: v12, a6: v13, a7: v15);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
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
  return sub_184F18160();
}
