// sub_1827866C0
// rva 0x027866c0  size 148  section .text  group text
// window base 0x1827866c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827866C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // [rsp+0h] [rbp-18h] BYREF
  __int64 v21; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
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
    return sub_182786760(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7);
  }
  else if ( *(_BYTE *)(a3 + 20) != 0 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
      sub_18277F280(a1, a2, a3, a4);
    return 0;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 8);
    v21 = a3;
    if ( (unsigned int)sub_18278ABE0(a1, a2, a3: v9) != 0 )
    {
      v13 = v21;
      *(_QWORD *)(v21 + 8) = 0;
      if ( *(int *)(v7 + 16) <= 0 )
        sub_18277F280(a1: v11, a2: v12, a3: v13, a4: v10);
      return 1;
    }
    else
    {
      if ( *(int *)(v7 + 16) <= 0 )
        sub_18277F280(a1: v11, a2: v12, a3: v21, a4: v10);
      return 0;
    }
  }
}
