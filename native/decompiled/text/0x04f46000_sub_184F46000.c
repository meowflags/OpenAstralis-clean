// sub_184F46000
// rva 0x04f46000  size 119  section .text  group text
// window base 0x184f46000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F46000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]
  unsigned int v15; // [rsp+1Ch] [rbp-Ch]
  unsigned int v16; // [rsp+20h] [rbp-8h]
  unsigned int v17; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    v16 = a6;
    v17 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v6 )
  {
    v8 = *(_DWORD *)(a3 + 8);
    v14 = a3;
    v17 = a5;
    v16 = a6;
    v15 = v8;
    MEMORY[0x186329C40](a1: v6, a2, a3: a5, a4, a5: a6, a6: v8);
    result = sub_184F46440(a1: v10, a2: v11, a3: v14, a4: v9, a5: v17, a6: v16);
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
  return sub_184F46080();
}
