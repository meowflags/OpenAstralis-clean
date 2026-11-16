// sub_1932C8750
// rva 0x132c8750  size 113  section .text  group text
// window base 0x1932c8750: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C8750(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 i; // rdx

  v8 = MEMORY[0x3377B8];
  v9 = 0;
  a7 = 0;
  a8 = 0;
  if ( (unsigned __int64)MEMORY[0x3377B8] > 0x40 )
    return v8;
  v10 = MEMORY[0x79778](a1);
  if ( (unsigned int)MEMORY[0x79540](a1: v11, a2: v12, a3: &a7, a4: v10, a5: &a8) == 0 )
    return (unsigned int)MEMORY[0x3377B8];
  for ( i = a7; i != 0; i &= i - 1 )
    ++v9;
  return v9;
}
