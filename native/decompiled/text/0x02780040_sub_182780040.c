// sub_182780040
// rva 0x02780040  size 230  section .text  group text
// window base 0x182780040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182780040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]
  __int64 v22; // [rsp+38h] [rbp-10h]
  int v23; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_182780140(a1: v17, a2: v18, a3: v16);
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int64)(v7 + 24) > *(_QWORD *)(v6 + 32) )
    {
      v23 = a6;
      v22 = a5;
      v21 = a3;
      v7 = MEMORY[0x181EAA920](a1, a2, a3: 40542168);
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v7 + 24;
      *(_DWORD *)v7 = 40542168;
      *(_DWORD *)(v7 + 4) = 0;
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0;
      v23 = a6;
      v22 = a5;
      v21 = a3;
    }
    v20 = v7;
    sub_182787120(a1, a2, a3: v7);
    if ( (unsigned int)sub_182780200(a1: v9, a2: v10, a3: v21, a4: v8, a5: v22, a6: v20) != 0 )
    {
      result = v20;
    }
    else
    {
      MEMORY[0x10E44F48](a1: v13, a2: v14, a3: v11, a4: *(_QWORD *)(v20 + 8));
      result = v20;
      *(_QWORD *)(v20 + 8) = -1;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_18277F280(a1: v13, a2: v14, a3: v11, a4: v12);
  }
  return result;
}
