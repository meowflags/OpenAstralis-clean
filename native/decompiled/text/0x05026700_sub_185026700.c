// sub_185026700
// rva 0x05026700  size 160  section .text  group text
// window base 0x185026700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185026700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v6 )
  {
    v8 = *(unsigned int *)(a5 + 28);
    if ( (_DWORD)v8 == 0 )
    {
LABEL_12:
      MEMORY[0x182771080]();
      return sub_1850267A0();
    }
    result = (unsigned int)((unsigned __int64)(a6 - v6) >> 3) == __sync_val_compare_and_swap(
                                                                   (volatile signed __int32 *)(v6 + 8 * v8 + 80),
                                                                   (unsigned __int64)(a6 - v6) >> 3,
                                                                   (unsigned __int64)(a1 - v6) >> 3);
    v10 = v6 + 8 * v8;
    if ( (*(_DWORD *)v10 & 2) != 0 )
    {
      v11 = v10 & 0xFFFFFFFFFFF80000LL;
      v12 = (v10 - ((v10 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
      if ( *(_BYTE *)(v11 + v12 + 56) != 0 )
        *(_BYTE *)(v11 + v12 + 56) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_12;
}
