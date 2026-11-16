// sub_4F24780
// rva 0x04f24780  size 134  section .text  group text
// window base 0x184f24780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F24780(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  char v20; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v21; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_8;
  }
  v9 = v7 + 8LL * (unsigned int)a3[4];
  v21 = a3;
  sub_4F24380(a1: 2, a2, a3, a4, a5: v9, a6: 0, a7: v20);
  v12 = (unsigned int)v21[4];
  if ( (_DWORD)v12 == 0 )
  {
LABEL_8:
    sub_2771080();
  }
  else if ( *(_DWORD *)(v7 + 8 * v12 + 8) >= 2u )
  {
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return (*(unsigned __int8 *)(v7 + 8 * v12 + 12) << 8) + (unsigned int)*(unsigned __int8 *)(v7 + 8 * v12 + 13);
  }
  sub_2771220(a1: v10, a2: v11, a3: 1);
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
  return sub_4F24820(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7);
}
