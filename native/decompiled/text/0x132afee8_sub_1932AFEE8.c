// sub_1932AFEE8
// rva 0x132afee8  size 273  section .text  group text
// window base 0x1932afee8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932AFEE8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi

  v8 = sub_1932CA1FD(a1, a2: a6, a3, a4);
  v13 = v8 + sub_1932CA1FD(a1: v10, a2: v11, a3: v9, a4: a3) + 1;
  if ( a5 == 0 )
  {
    if ( v14 != 0 )
    {
      v27 = sub_1932CA1FD(a1: v13, a2: v14, a3: v12, a4: v14);
      v29 = v27 + 4 + v28;
    }
    else
    {
      v29 = v13 + 2;
    }
    v30 = MEMORY[0x79AD0](a1: v29, a2: v14, a3: v12, a4: v29);
    v26 = v30;
    if ( v30 != 0 )
    {
      if ( v32 != 0 )
        sub_19329EDE0(a1: v31, a2: v32, a3: v31, a4: v30, a5: 542184);
      else
        sub_19329EDE0(a1: v31, a2: 0, a3: v31, a4: v30, a5: 542172);
      return v26;
    }
    return 0;
  }
  v15 = sub_1932CA1FD(a1: v13, a2: v14, a3: v12, a4: a5);
  v19 = sub_1932CA1FD(a1: v15 + v16, a2: v18, a3: v17, a4: v18);
  v23 = MEMORY[0x79AD0](a1: v19 + v20, a2: v22, a3: v21, a4: v19 + v20 + 5);
  v26 = v23;
  if ( v23 == 0 )
    return 0;
  sub_19329EDE0(a1: v24, a2: v25, a3: v24 + 5, a4: v23, a5: 542200);
  return v26;
}
