// sub_1827518E0
// rva 0x027518e0  size 189  section .text  group text
// window base 0x1827518e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827518E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, __int64, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v15; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_13;
  if ( a5 == v6
    || a5[2] != 2
    || (_DWORD)(v8 = (unsigned int)a5[3]) != 0 && v6[2 * v8] >> 3 != 4526100
    || (_DWORD)(v9 = (unsigned int)a5[4]) != 0 && (_DWORD)(a4 = v6[2 * v9] >> 3) != 4262015 )
  {
    sub_182757000(a1, a2, a3: a5);
LABEL_13:
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1827519A0();
  }
  v10 = a6(a1, a2, a3: &v6[2 * v8], a4, a5: &v6[2 * v9]);
  if ( *(int *)(v7 + 16) <= 0 )
    v10 = sub_18277F280(a1: v12, a2: v13, a3: v11);
  if ( v10 != 0 )
    JUMPOUT(0x304E9A973LL);
  return (__int64)(v6 + 8781820);
}
