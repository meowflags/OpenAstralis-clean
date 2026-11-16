// sub_185023860
// rva 0x05023860  size 303  section .text  group text
// window base 0x185023860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185023860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  __int64 result; // rax
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // bx
  int v9; // ecx
  __int64 i; // rcx
  __int64 v11; // rbx
  unsigned __int16 v12; // bp
  unsigned int v13; // ebx
  unsigned __int16 v14; // r9
  __int64 v15; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v5 + 8) )
  {
    result = MEMORY[0x181EB84E0]();
LABEL_25:
    v9 = 0;
    goto LABEL_8;
  }
  result = (unsigned int)(a5 - 1);
  if ( (int)result < 1 )
  {
    i = 0;
    goto LABEL_18;
  }
  v7 = *(_WORD *)(a3 + 12);
  if ( v7 < 0xDC00u )
  {
    v9 = 0;
    goto LABEL_8;
  }
  if ( v7 >= 0xE000u )
    goto LABEL_25;
  v8 = *(_WORD *)(a3 + 14);
  if ( v8 < 0xD800u )
  {
    v9 = 0;
  }
  else if ( v8 >= 0xDC00u )
  {
    v9 = 0;
  }
  else
  {
    *(_WORD *)(a3 + 12) = v8;
    *(_WORD *)(a3 + 14) = v7;
    v9 = 1;
  }
LABEL_8:
  for ( i = (unsigned int)(v9 + 1); (int)result > (int)i; i = v13 )
  {
    v11 = 2 * (int)i;
    v12 = *(_WORD *)(a3 + v11 + 12);
    if ( v12 >= 0xDC00u && v12 < 0xE000u )
    {
      a2 = (unsigned int)(i + 1);
      a1 = 2 * ((int)i + 1);
      v14 = *(_WORD *)(a3 + a1 + 12);
      if ( v14 >= 0xD800u && v14 < 0xDC00u )
      {
        *(_WORD *)(a3 + v11 + 12) = v14;
        *(_WORD *)(a3 + a1 + 12) = v12;
        LODWORD(i) = i + 1;
      }
    }
    v13 = i + 1;
    if ( *(int *)(v5 + 16) <= 0 )
      result = MEMORY[0x18277F280]();
  }
LABEL_18:
  if ( *(int *)(v5 + 16) <= 0 )
    return MEMORY[0x18277F280](a1, a2, a3, a4: i);
  return result;
}
