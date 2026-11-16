// sub_181594EA0
// rva 0x01594ea0  size 117  section .text  group text
// window base 0x181594ea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
signed __int64 __fastcall sub_181594EA0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rdx
  signed __int64 result; // rax
  __int64 v7; // rtt
  __int64 v8; // rtt

  if ( a3 != 0 )
  {
    *(_QWORD *)(v3 + 376181296) = 0;
  }
  else
  {
    v4 = 301996088;
    v5 = MEMORY[0x12001838];
    v7 = MEMORY[0x12001838];
    result = __sync_val_compare_and_swap(
               (volatile signed __int64 *)0x12001838,
               MEMORY[0x12001838],
               MEMORY[0x12001838] + 1LL);
    if ( v7 != result )
      goto LABEL_7;
    while ( 1 )
    {
      *(_QWORD *)(v3 + 376181296) = v5;
      if ( v5 >= 1 )
        break;
      MEMORY[0x1828C1C40](a1, a2, a3: v3 + 361300432);
      do
      {
LABEL_7:
        v5 = *(_QWORD *)v4;
        v8 = *(_QWORD *)v4;
        result = __sync_val_compare_and_swap((volatile signed __int64 *)v4, *(_QWORD *)v4, *(_QWORD *)v4 + 1LL);
      }
      while ( v8 != result );
    }
  }
  return result;
}
