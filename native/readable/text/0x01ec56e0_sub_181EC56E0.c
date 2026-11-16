// sub_1EC56E0
// rva 0x01ec56e0  size 112  section .text  group text
// window base 0x181ec56e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC56E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  char v20; // [rsp+0h] [rbp-18h] BYREF
  __int64 v21; // [rsp+8h] [rbp-10h]
  __int64 v22; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v20);
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
    return sub_1EC5760(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7);
  }
  else
  {
    v9 = *(unsigned int *)(a3 + 4);
    v10 = v7 + 8 * v9;
    if ( (_DWORD)v9 != 0 )
    {
      v21 = a3;
      v22 = v7 + 8 * v9;
      v11 = sub_1EBF580(a1, a2, a3: v22, a4: v10, a5, a6);
    }
    else
    {
      v11 = 0;
      v22 = v10;
      v21 = a3;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      v11 = sub_277F280(a1, a2, a3: v21, a4: v22);
    else
      v12 = v21;
    return (unsigned int)(*(_DWORD *)(v12 + 8) + 31 * v11);
  }
}
