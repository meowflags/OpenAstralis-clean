// sub_1815B40A0
// rva 0x015b40a0  size 205  section .text  group text
// window base 0x1815b40a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815B40A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // esi
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+8h] [rbp-20h]
  unsigned __int64 v21; // [rsp+10h] [rbp-18h]
  __int64 v22; // [rsp+18h] [rbp-10h]
  __int64 v23; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
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
    return sub_1815B4180(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18, a7);
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 40);
    v10 = v9 + 16;
    if ( (unsigned __int64)(v9 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v23 = a5;
      v22 = a3;
      v9 = MEMORY[0x181EAA920](a1: v10, a2, a3: 35804184);
      a5 = v23;
      a3 = v22;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v10;
      *(_DWORD *)v9 = 35804184;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
    }
    v11 = a5 - *(_QWORD *)(a3 + 80) + *(_QWORD *)(a3 + 192);
    v23 = a5;
    v21 = v11;
    v22 = a3;
    v20 = v9;
    sub_1815B0140(a1: v7 + 376614808, a2, a3, a4: a3, a5: v11, a6: (_DWORD *)v9);
    if ( *(int *)(v8 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v20;
  }
}
