// sub_27677A0
// rva 0x027677a0  size 93  section .text  group text
// window base 0x1827677a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27677A0(int a1, int a2, _DWORD *a3, int a4, int a5, int a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 (*v10)(void); // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // edx
  int v19; // ecx
  int v20; // edi
  int v21; // esi
  int v22; // r8d
  int v23; // r9d
  char v24; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v25; // [rsp+8h] [rbp-10h]
  unsigned int v26; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 != v8 )
  {
    v10 = (__int64 (*)(void))(v7 + *(_QWORD *)&v8[2 * (*a3 >> 3) + 102]);
    v25 = a3;
    v26 = v10();
    result = sub_2767200(a1: v12, a2: v13, a3: v26, a4: v11, a5: (__int64)v25);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280(a1: v16, a2: v17, a3: v15);
    return result;
  }
  sub_2771080(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v24);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_2767800(a1: v20, a2: v21, a3: v18, a4: v19, a5: v22, a6: v23, a7);
}
