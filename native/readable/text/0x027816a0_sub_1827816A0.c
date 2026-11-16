// sub_27816A0
// rva 0x027816a0  size 80  section .text  group text
// window base 0x1827816a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27816A0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // [rsp+0h] [rbp-8h]

  result = v6 + 366625984;
  if ( v7 == *(_QWORD *)(v6 + 376351704) )
    goto LABEL_3;
  while ( 1 )
  {
    result = sub_28C1C40(a1, a2, a3: result);
LABEL_3:
    v9 = *(unsigned int *)(v6 + 376351692);
    if ( (_DWORD)v9 == 0 )
      break;
    v10 = *(unsigned int *)(v6 + 8 * v9 + 4);
    if ( (_DWORD)v10 == 0 )
      goto LABEL_8;
    if ( *(_DWORD *)(v6 + 8 * v10 + 8) == 47076659 )
      return result;
  }
  sub_276EFE0(a1, a2, a3, a4: 0, a5, a6, a7: v11);
LABEL_8:
  sub_276EFE0(a1, a2, a3: v10, a4: v6 + 8 * v9, a5, a6, a7: v11);
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
  return sub_2781700();
}
