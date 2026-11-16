// sub_274A300
// rva 0x0274a300  size 144  section .text  group text
// window base 0x18274a300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274A300(
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
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v15; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
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
    return sub_274A3A0();
  }
  else
  {
    if ( a5 == v6
      || *(_DWORD *)(a5 + 8) != 1
      || (_DWORD)(v8 = *(unsigned int *)(a5 + 12)) != 0
      && ((v9 = *(_DWORD *)(v6 + 8 * v8) >> 3, *(__int16 *)(v6 + 8 * v9 + 62) < 2)
       || (a4 = *(unsigned int *)(v6 + 8 * v9 + 16), *(_DWORD *)(v6 + 8 * a4 + 16) != 18334)) )
    {
      v8 = sub_2756FC0();
    }
    v10 = a6(a1, a2, a3, a4, a5: v6 + 8 * v8);
    if ( *(int *)(v7 + 16) <= 0 )
      v10 = sub_277F280(a1: v12, a2: v13, a3: v11);
    if ( v10 != 0 )
      JUMPOUT(0x304E93360LL);
    return v6 + 35127280;
  }
}
