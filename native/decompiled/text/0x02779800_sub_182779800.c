// sub_182779800
// rva 0x02779800  size 112  section .text  group text
// window base 0x182779800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182779800(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        char a7)
{
  char *v7; // r14
  __int64 v8; // r15
  char *v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // rbx
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  char v18; // [rsp+0h] [rbp-8h]

  if ( a5 == a3 )
    v9 = v7;
  else
    v9 = (char *)a5;
  if ( (char *)a3 == v7 )
  {
    sub_18276EFE0(a1, a2, a3, a4, a5, a6, a7: v18);
  }
  else
  {
    *(_DWORD *)(a3 + 72) = (unsigned __int64)(v9 - v7) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      a4 = a3 & 0xFFF80000;
      v11 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) = 0;
    }
    if ( (char *)a5 != v7 )
    {
      result = *(_QWORD *)(a5 + 80);
      *(_QWORD *)(v8 + 64) = result;
      return result;
    }
  }
  sub_18276EFE0(a1, a2, a3, a4, a5, a6, a7: v18);
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
  return sub_182779880(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7);
}
