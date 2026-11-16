// sub_2761FE0
// rva 0x02761fe0  size 62  section .text  group text
// window base 0x182761fe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2761FE0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  char v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_7;
  }
  v9 = *(unsigned int *)(a3 + 20);
  if ( (_DWORD)v9 == 0 )
  {
LABEL_7:
    sub_2771080(a1, a2, a3, a4, a5, a6, a7: v18);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2762020(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7);
  }
  v10 = *(unsigned int *)(v7 + 8 * v9 + *(_QWORD *)(a3 + 8));
  if ( *(int *)(v8 + 16) <= 0 )
    v10 = sub_277F280(a1, a2, a3);
  return v7 + 8 * v10;
}
