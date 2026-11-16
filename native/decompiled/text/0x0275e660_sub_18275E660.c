// sub_18275E660
// rva 0x0275e660  size 93  section .text  group text
// window base 0x18275e660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_18275E660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // r9d
  int v13; // r8d
  __int64 v14; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // r8d
  int v21; // r9d
  char v22; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v23; // [rsp+8h] [rbp-10h]
  __int64 v24; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_7:
    sub_182771080(a1: v10, a2: v11, a3: v24, a4: v9, a5: v13, a6: v12, a7: v22);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_18275E6C0(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21, a7);
  }
  v24 = a3;
  v23 = a5;
  sub_18275A260(a1, a2, a3, a4: (int)a5, a5);
  v13 = (int)v23;
  if ( v23 == v7 )
    goto LABEL_7;
  v14 = *(unsigned int *)((char *)v23 + *(_QWORD *)(v24 + 8));
  if ( *(int *)(v8 + 16) <= 0 )
    v14 = sub_18277F280(a1: v10, a2: v11, a3: v24);
  return &v7[2 * v14];
}
