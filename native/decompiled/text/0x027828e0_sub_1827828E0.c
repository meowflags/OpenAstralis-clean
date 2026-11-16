// sub_1827828E0
// rva 0x027828e0  size 185  section .text  group text
// window base 0x1827828e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827828E0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // r8d
  int v21; // r9d
  char v22; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB83C0]();
  }
  else if ( a3 != v7 )
  {
    v9 = *(_QWORD *)(a3 + 8);
    if ( v9 != 0 )
    {
      v10 = *(unsigned int *)(v9 + 16);
      if ( (_DWORD)v10 != 0 )
      {
        v11 = *(unsigned int *)(v7 + 8 * v10 + 4);
        if ( (_DWORD)v11 != 0 )
        {
          if ( *(int *)(v8 + 16) <= 0 )
            sub_18277F280(a1, a2, a3, a4: v10);
          return v7 + 8LL * *(unsigned int *)(v7 + 8 * v11 + 4);
        }
        goto LABEL_20;
      }
      goto LABEL_18;
    }
    if ( a5 == v7 )
    {
LABEL_17:
      sub_18276EFE0(a1, a2, a3, a4, a5, a6, a7: v22);
LABEL_18:
      sub_18276EFE0(a1, a2, a3, a4: v10, a5, a6, a7: v22);
      goto LABEL_19;
    }
    v13 = *(unsigned int *)(a5 + 4);
    v14 = v7 + 8 * v13;
    if ( (_DWORD)v13 == 0 )
    {
LABEL_19:
      sub_18276EFE0(a1, a2, a3, a4: v14, a5, a6, a7: v22);
LABEL_20:
      sub_18276EFE0(a1, a2, a3, a4: v7 + 8 * v10, a5, a6, a7: v22);
      goto LABEL_21;
    }
    v15 = *(unsigned int *)(v7 + 8 * v13 + 4);
    if ( (_DWORD)v15 == 0 )
    {
LABEL_21:
      sub_18276EFE0(a1, a2, a3, a4: v14, a5, a6, a7: v22);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_1827829A0(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21, a7);
    }
    if ( *(int *)(v8 + 16) <= 0 )
      v15 = sub_18277F280(a1, a2, a3, a4: v14);
    return v7 + 8LL * *(unsigned int *)(v7 + 8 * v15 + 4);
  }
  sub_18276EFE0(a1, a2, a3, a4, a5, a6, a7: v22);
  goto LABEL_17;
}
