// sub_1932B41CC
// rva 0x132b41cc  size 297  section .text  group text
// window base 0x1932b41cc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B41CC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  _WORD v15[4]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]

  v14 = 0;
  if ( (unsigned int)MEMORY[0x79318](a1, a2, a3: 9, a4, a5: v15, a6: &v14) - 7 <= 1
    && v15[0] == 92
    && v15[1] == 92
    && v15[2] == 46
    && v15[3] == 92 )
  {
    v9 = MEMORY[0x79C90](a1: v5, a2: v6, a3: v4, a4: v16);
    if ( (unsigned int)MEMORY[0x79C68](a1: v10, a2: v11, a3: 543720, a4: v9) != 0
      && (unsigned int)MEMORY[0x79C68](a1: v5, a2: v6, a3: 543728, a4: v9) != 0
      && (unsigned int)MEMORY[0x79C68](a1: v5, a2: v6, a3: 543736, a4: v9) != 0
      && (unsigned int)MEMORY[0x79C68](a1: v5, a2: v6, a3: 543744, a4: v9) != 0
      && (unsigned int)MEMORY[0x79C70](a1: v5, a2: v6, a3: 543752, a4: v9, a5: 3) != 0 )
    {
      MEMORY[0x79C70](a1: v5, a2: v6, a3: 543760, a4: v9, a5: 3);
    }
  }
  return sub_1932C8DE0(a1: v5, a2: v6, a3: v4, a4: (unsigned __int64)&v13 ^ v17, a5: v7, a6: v8);
}
