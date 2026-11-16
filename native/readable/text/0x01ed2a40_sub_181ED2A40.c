// sub_1ED2A40
// rva 0x01ed2a40  size 112  section .text  group text
// window base 0x181ed2a40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED2A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  _DWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  char v20; // [rsp+0h] [rbp-18h] BYREF
  __int64 v21; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v9 + 8) )
  {
    v21 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v20);
    goto LABEL_7;
  }
  v21 = a3;
  v10 = (_DWORD *)sub_27D1940();
  if ( v10 == v8 )
  {
LABEL_7:
    sub_2771080(a1: v11, a2: v12, a3: v21);
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
    return sub_1ED2AC0(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7);
  }
  ((void (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v10 >> 3) + 48]))(
    a1: v11,
    a2: v12,
    a3: v10);
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280();
  return (__int64)v8;
}
