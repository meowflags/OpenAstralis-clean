// sub_18504A720
// rva 0x0504a720  size 175  section .text  group text
// window base 0x18504a720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504A720(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  char v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-18h]
  __int64 v11; // [rsp+18h] [rbp-10h]
  __int64 v12; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v5 + 8) )
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
    return sub_18504A7E0();
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( v6 + 24 > *(_QWORD *)(v5 + 32) )
    {
      v12 = a5;
      v11 = a3;
      v6 = MEMORY[0x181EAA920](a1, a2, a3: 43309440);
      a5 = v12;
      v7 = v11;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v6 + 24;
      *(_DWORD *)v6 = 43309440;
      *(_DWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 16) = 0;
      v7 = a3;
    }
    v10 = v6;
    v11 = v7;
    v12 = a5;
    sub_185049AA0(a1, a2, a3: v6, a4: v12, a5: v7, a6: v12, a7: v9);
    if ( *(int *)(v5 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v10;
  }
}
