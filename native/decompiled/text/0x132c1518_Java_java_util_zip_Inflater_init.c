// Java_java_util_zip_Inflater_init
// rva 0x132c1518  size 191  section .text  group text
// window base 0x1932c1518: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Inflater_init(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8

  v6 = MEMORY[0x79AD8](a1, a2: a4, a3: 88, a4: 1);
  v8 = v6;
  if ( v6 == 0 )
    goto LABEL_10;
  v9 = sub_1932C5B98(a1: v6, a2: v7, a3: a5 != 0 ? -15 : 15, a4: v6, a5: 547740, a6: 88);
  if ( v9 == -4 )
  {
    MEMORY[0x79AE0](a1: v11, a2: v12, a3: v10, a4: v11);
LABEL_10:
    sub_1932B15D0(a1: v8, a2: v7, a3: 0, a4: v7);
    return 0;
  }
  if ( v9 == 0 )
    return v11;
  v13 = *(_QWORD *)(v11 + 32);
  if ( v13 == 0 )
  {
    if ( v9 == -2 )
      JUMPOUT(0x32651B597LL);
    JUMPOUT(0x32651B589LL);
  }
  MEMORY[0x79AE0](a1: v11, a2: v12, a3: v10, a4: v11);
  sub_1932B15B0(a1: v14, a2: v15, a3: v13, a4: v15, a5: v16);
  return 0;
}
