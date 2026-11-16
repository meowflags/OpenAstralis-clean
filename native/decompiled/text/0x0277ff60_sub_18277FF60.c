// sub_18277FF60
// rva 0x0277ff60  size 203  section .text  group text
// window base 0x18277ff60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277FF60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14)
{
  __int64 v14; // r14
  int v15; // ecx
  __int64 v16; // rbp
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rbx
  char v25; // [rsp+0h] [rbp-48h]
  __int64 (__fastcall *v27)(__int64, __int64, __int64, _QWORD); // [rsp+40h] [rbp-8h]

  v15 = *(_DWORD *)(a3 + 4);
  if ( v15 == 0 )
    return sub_182780018(a1, a2, a3, a4: 0, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  v16 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v16 == 0 )
  {
    sub_18276EFE0(a1, a2, a3, a4: v15, a5, a6, a7: v25);
    goto LABEL_8;
  }
  v27 = MEMORY[0x10E44F48];
  result = MEMORY[0x10E44F48](a1, a2: v14 + 8 * v16, a3, a4: *(_QWORD *)(v14 + 8 * v16 + 8));
  *(_QWORD *)(v14 + 8LL * (unsigned int)v16 + 8) = -1;
  v22 = a3;
  *(_DWORD *)(a3 + 4) = 0;
  __faststorefence();
  v23 = *(_DWORD *)(a3 + 8);
  if ( v23 == 0 )
    return result;
  v24 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v24 == 0 )
  {
LABEL_8:
    sub_18276EFE0(a1: v18, a2: v19, a3: v22, a4: v23, a5: v20, a6: v21, a7: v25);
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
    return sub_182780040();
  }
  result = v27(a1: v18, a2: v19, a3, a4: *(_QWORD *)(v14 + 8 * v24 + 8));
  *(_QWORD *)(v14 + 8LL * (unsigned int)v24 + 8) = -1;
  *(_DWORD *)(a3 + 8) = 0;
  __faststorefence();
  return result;
}
