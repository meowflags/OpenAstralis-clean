// sub_2782340
// rva 0x02782340  size 134  section .text  group text
// window base 0x182782340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2782340(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  char v10; // [rsp+0h] [rbp-8h]

  *(_BYTE *)(a6 + 20) = 0;
  *(_QWORD *)(a6 + 8) = v7;
  v8 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v8 == 0 )
  {
    sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v10);
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v6 + 8 * v8 + 8) != 47076659 )
  {
    result = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)result != 0 )
    {
      if ( *(_QWORD *)(v6 + 8 * result + 8) != 0 )
        **(_QWORD **)(v6 + 8 * result + 16) = a6;
      else
        *(_QWORD *)(v6 + 8 * result + 8) = a6;
      *(_QWORD *)(v6 + 8 * result + 16) = a6;
      return result;
    }
LABEL_15:
    sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v10);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_27823E0();
  }
  result = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)result == 0 )
  {
LABEL_14:
    sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v10);
    goto LABEL_15;
  }
  if ( *(_QWORD *)(v6 + 8 * result + 8) != 0 )
    **(_QWORD **)(v6 + 8 * result + 16) = a6;
  else
    *(_QWORD *)(v6 + 8 * result + 8) = a6;
  *(_QWORD *)(v6 + 8 * result + 16) = a6;
  return result;
}
