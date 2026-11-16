// sub_18501E020
// rva 0x0501e020  size 146  section .text  group text
// window base 0x18501e020: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501E020(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    v11 = a5;
    v12 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v5 )
  {
    if ( a5 == v5 )
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
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_18501E0C0();
    }
    if ( a3 == v5 )
      JUMPOUT(0x30A039053LL);
    if ( a5 == v5 )
      JUMPOUT(0x30A03905DLL);
    v7 = *(_DWORD *)(a5 + 8);
    v8 = *(unsigned int *)(a3 + 8);
    v12 = a3;
    v11 = a5;
    result = MEMORY[0x182830C40](a1: (unsigned int)v8, a2, a3: a5 + 12, a4: v8, a5: v7, a6: a3 + 12);
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_10;
}
