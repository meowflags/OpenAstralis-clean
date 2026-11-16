// sub_5029760
// rva 0x05029760  size 123  section .text  group text
// window base 0x185029760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_5029760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_10;
  }
  v7 = *(unsigned int *)(v6 + 72);
  if ( (_DWORD)v7 == 0 )
  {
LABEL_10:
    sub_2771080();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_50297E0();
  }
  *(_DWORD *)(v5 + 8 * v7 + 68) = (unsigned __int64)(a5 - v5) >> 3;
  result = v5 + 8 * v7;
  if ( (*(_DWORD *)result & 2) != 0 )
  {
    v9 = result & 0xFFFFFFFFFFF80000LL;
    result = (result - ((result & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)(v9 + result + 56) != 0 )
      *(_BYTE *)(v9 + result + 56) = 0;
  }
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280();
  return result;
}
