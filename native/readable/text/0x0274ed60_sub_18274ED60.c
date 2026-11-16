// sub_274ED60
// rva 0x0274ed60  size 145  section .text  group text
// window base 0x18274ed60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274ED60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, __int64, __int64))
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v14; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_11;
  if ( a5 == v6
    || *(_DWORD *)(a5 + 8) != 1
    || (_DWORD)(v8 = *(unsigned int *)(a5 + 12)) != 0 && (_DWORD)(a4 = *(_DWORD *)(v6 + 8 * v8) >> 3) != 4727430 )
  {
    sub_2756FC0();
LABEL_11:
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
    return sub_274EE00();
  }
  v9 = a6(a1, a2, a3, a4, a5: v6 + 8 * v8);
  if ( *(int *)(v7 + 16) <= 0 )
    v9 = sub_277F280(a1: v11, a2: v12, a3: v10);
  if ( v9 != 0 )
    JUMPOUT(0x304E97DCFLL);
  return v6 + 35127280;
}
