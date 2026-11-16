// sub_1932B4034
// rva 0x132b4034  size 405  section .text  group text
// window base 0x1932b4034: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_WORD *__fastcall sub_1932B4034(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  _WORD *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi

  v7 = MEMORY[0x797B0](a1, a2, a3: 128, a4: a3, a5: 7, a6: 0);
  if ( v7 == -1 )
    return nullptr;
  v9 = MEMORY[0x79AD0](a1: v6, a2: v7, a3: v5, a4: 520);
  v12 = (_WORD *)v9;
  if ( v9 == 0 )
  {
    sub_1932B15D0(a1: v10, a2: v11, a3: 533920, a4);
    goto LABEL_22;
  }
  v13 = MEMORY[0x79310](a1: v10, a2: v11, a3: v9, a4: v11, a5: 260, a6: 0);
  v16 = v13;
  if ( v13 >= 0x104 )
  {
    v17 = MEMORY[0x79AE8](a1: v13, a2: v15, a3: 2LL * (v13 + 1), a4: v12);
    if ( v17 == 0 )
    {
      sub_1932B15D0(a1: v18, a2: v19, a3: 533920, a4);
LABEL_20:
      MEMORY[0x79AE0](a1: v16, a2: v15, a3: v14, a4: v12);
      v12 = nullptr;
      goto LABEL_22;
    }
    v12 = (_WORD *)v17;
    v16 = (unsigned int)MEMORY[0x79310](a1: v18, a2: v19, a3: v17, a4: v19, a5: (unsigned int)v18, a6: 0);
  }
  if ( (_DWORD)v16 != 0 )
  {
    if ( *v12 == 92 && v12[1] == 92 && v12[2] == 63 && v12[3] == 92 )
    {
      if ( v12[4] == 85 && v12[5] == 78 && v12[6] == 67 )
      {
        v20 = 1;
        v21 = 1;
      }
      else
      {
        v21 = 0;
        v20 = 0;
      }
      v22 = v20 != 0 ? 7 : 4;
      sub_1932CA179(
        a1: (unsigned int)(v16 - v22 + 1),
        a2: v15,
        a3: &v12[v22],
        a4: &v12[v21],
        a5: 2LL * ((int)v16 - (int)v22 + 1));
    }
    goto LABEL_22;
  }
  if ( v12 != nullptr )
    goto LABEL_20;
LABEL_22:
  v23 = MEMORY[0x79758](a1: v16);
  if ( (unsigned int)MEMORY[0x797C8](a1: v23, a2: v25, a3: v24, a4: v25) != 0 )
    MEMORY[0x793D8](a1: v27, a2: v28, a3: v26, a4: (unsigned int)v27);
  return v12;
}
