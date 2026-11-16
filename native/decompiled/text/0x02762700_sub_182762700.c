// sub_182762700
// rva 0x02762700  size 96  section .text  group text
// window base 0x182762700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182762700(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+8h] [rbp-10h]
  __int64 v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    return sub_182762760();
  }
  else
  {
    v6 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v6 != 0 )
    {
      v11 = a3;
      v7 = *(unsigned int *)(v4 + 8 * v6 + 8);
      v10 = v4 + 8 * v6;
      result = MEMORY[0x18631FE80](a1: 1, a2, a3: v10, a4, a5: 0, a6: v7);
    }
    else
    {
      result = 0;
      v11 = a3;
    }
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_18277F280(a1, a2, a3);
  }
  return result;
}
