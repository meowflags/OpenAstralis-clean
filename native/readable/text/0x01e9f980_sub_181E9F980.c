// sub_1E9F980
// rva 0x01e9f980  size 377  section .text  group text
// window base 0x181e9f980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9F980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // [rsp+8h] [rbp-20h]
  __int64 v29; // [rsp+18h] [rbp-10h]
  __int64 v30; // [rsp+18h] [rbp-10h]
  __int64 v31; // [rsp+18h] [rbp-10h]
  __int64 v32; // [rsp+18h] [rbp-10h]
  __int64 v33; // [rsp+20h] [rbp-8h]
  __int64 v34; // [rsp+20h] [rbp-8h]

  if ( a5 == v5 )
  {
    sub_276EFE0();
    __builtin_debugtrap();
  }
  v27 = a5;
  v6 = *(_QWORD *)(a5 + 16);
  if ( v6 != 0 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    if ( v7 != 0 )
    {
      v7 += v6;
      v33 = v7;
    }
    else
    {
      v33 = 0;
    }
    v29 = *(_QWORD *)(a5 + 16);
    sub_1E9FF80(a1, a2, a3: a5, a4: v7, a5: v6);
    sub_1E9FB20(a1: v9, a2: v10, a3, a4: v8, a5: v29);
    while ( 1 )
    {
      v15 = v33;
      a5 = v27;
      if ( v33 == 0 )
        break;
      v11 = *(_QWORD *)(v33 + 16);
      if ( v11 != 0 )
      {
        v11 += v33;
        v33 = v11;
      }
      else
      {
        v33 = 0;
      }
      v30 = v15;
      sub_1E9FF80(a1, a2, a3: v27, a4: v11, a5: v15);
      sub_1E9FB20(a1: v13, a2: v14, a3, a4: v12, a5: v30);
    }
  }
  result = *(_QWORD *)(a5 + 32);
  if ( result != 0 )
  {
    v17 = *(_QWORD *)(result + 16);
    if ( v17 != 0 )
      v34 = result + v17;
    else
      v34 = 0;
    v31 = *(_QWORD *)(a5 + 32);
    sub_1EA0060(a1, a2, a3: a5, a4, a5: result);
    sub_1E9FBC0(a1: v19, a2: v20, a3, a4: v18, a5: v31);
    while ( 1 )
    {
      result = v34;
      if ( v34 == 0 )
        break;
      v23 = *(_QWORD *)(v34 + 16);
      if ( v23 != 0 )
      {
        v23 += v34;
        v34 = v23;
      }
      else
      {
        v34 = 0;
      }
      v32 = result;
      sub_1EA0060(a1: v21, a2: v22, a3: v27, a4: v23, a5: result);
      sub_1E9FBC0(a1: v25, a2: v26, a3, a4: v24, a5: v32);
    }
  }
  return result;
}
