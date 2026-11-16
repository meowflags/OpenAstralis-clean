// sub_132C4454
// rva 0x132c4454  size 146  section .text  group text
// window base 0x1932c4454: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C4454(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned int a5)
{
  unsigned int v5; // eax
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // ecx
  int v14; // eax

  v5 = *((_DWORD *)a4 + 2);
  if ( v5 <= a5 )
    JUMPOUT(0x32651E47ALL);
  if ( a5 == 0 )
    return 0;
  v9 = *a4;
  *((_DWORD *)a4 + 2) = v5 - a5;
  v10 = a5;
  sub_1932CA15B(a1: a5, a2: a3, a3: v9, a4: a3, a5);
  v13 = *(_DWORD *)(a4[5] + 44);
  if ( v13 == 1 )
  {
    v14 = sub_1932C5FE4(a1: v11, a2: v12, a3: v12, a4: *((unsigned int *)a4 + 19), a5: (unsigned int)v11);
LABEL_8:
    *((_DWORD *)a4 + 19) = v14;
    goto LABEL_9;
  }
  if ( v13 == 2 )
  {
    v14 = sub_1932C62D4(a1: v11, a2: v12, a3: v12, a4: *((unsigned int *)a4 + 19), a5: (unsigned int)v11);
    goto LABEL_8;
  }
LABEL_9:
  *a4 += v10;
  *((_DWORD *)a4 + 3) += v11;
  return (unsigned int)v11;
}
