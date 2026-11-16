// sub_275ED20
// rva 0x0275ed20  size 102  section .text  group text
// window base 0x18275ed20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_275ED20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  char *v9; // rax
  __int64 v10; // rcx
  char v11; // al
  int v12; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
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
    return sub_275EDA0(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7);
  }
  else
  {
    v9 = *(char **)(a3 + 8);
    v10 = *(unsigned int *)(a3 + 20);
    if ( (_DWORD)v10 != 0 )
      v11 = v9[8 * v10 + v7];
    else
      v11 = *v9;
    v12 = v11 != 0;
    if ( *(int *)(v8 + 16) <= 0 )
      v12 = sub_277F280(a1, a2, a3);
    if ( v12 != 0 )
      JUMPOUT(0x304EA7D60LL);
    return v7 + 35127280;
  }
}
