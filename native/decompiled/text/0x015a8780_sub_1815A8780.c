// sub_1815A8780
// rva 0x015a8780  size 147  section .text  group text
// window base 0x1815a8780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A8780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi

  result = MEMORY[0x181EB6680]();
  if ( (_DWORD)result == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)0x14, 3, 1) != 3 )
      MEMORY[0x18277F4A0](a1: v9, a2: v10, a3: 1, a4: v8, a5: 0);
    result = MEMORY[0x181EB6D40](a1: v9, a2: v10, a3);
  }
  if ( (_DWORD)result == 0 )
  {
    if ( a5 != nullptr )
      *a5 = v6;
    if ( a6 != nullptr )
      *a6 = 0;
    MEMORY[0x14] = 3;
    __faststorefence();
    return 0;
  }
  return result;
}
