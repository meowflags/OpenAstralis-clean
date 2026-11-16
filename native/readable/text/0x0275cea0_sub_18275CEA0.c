// sub_275CEA0
// rva 0x0275cea0  size 134  section .text  group text
// window base 0x18275cea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_275CEA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  char *v11; // rax
  char v12; // al
  int v13; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // [rsp+0h] [rbp-18h] BYREF
  __int64 v22; // [rsp+8h] [rbp-10h]
  _DWORD *v23; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
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
    return sub_275CF40(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20, a7);
  }
  else
  {
    v23 = a5;
    v22 = a3;
    sub_275A260(a1, a2, a3, a4: (int)a5, a5);
    v11 = *(char **)(v22 + 8);
    if ( v23 == v7 )
      v12 = *v11;
    else
      v12 = v11[(_QWORD)v23];
    v13 = v12 != 0;
    if ( *(int *)(v8 + 16) <= 0 )
      v13 = sub_277F280(a1: v9, a2: v10, a3: v22);
    if ( v13 != 0 )
      JUMPOUT(0x304EA5F00LL);
    return (__int64)(v7 + 8781820);
  }
}
