// sub_1932A99CC
// rva 0x132a99cc  size 95  section .text  group text
// window base 0x1932a99cc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
volatile signed __int32 *__fastcall sub_1932A99CC(_DWORD a1, _DWORD a2, __int64 a3, volatile signed __int32 *a4)
{
  volatile signed __int32 *i; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi

  i = a4;
  MEMORY[0x79408](a1: a3, a2: a4 + 2, a3, a4: a4 + 2);
LABEL_2:
  for ( i = *(volatile signed __int32 **)i; i != nullptr; i = *((volatile signed __int32 **)i + 1) )
  {
    if ( v6 < *((_QWORD *)i + 3) )
      goto LABEL_2;
    if ( v6 <= *((_QWORD *)i + 3) )
    {
      __sync_add_and_fetch(i + 10, 1);
      break;
    }
  }
  MEMORY[0x793F8](a1: v6, a2: v7, a3: v5, a4: v7);
  return i;
}
