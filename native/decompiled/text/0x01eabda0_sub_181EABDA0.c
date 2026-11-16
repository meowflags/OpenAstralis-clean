// sub_181EABDA0
// rva 0x01eabda0  size 316  section .text  group text
// window base 0x181eabda0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_181EABDA0(
        __int64 a1,
        __int64 a2,
        _DWORD a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // [rsp+18h] [rbp-30h]
  __int64 v18; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+38h] [rbp-10h]

  v21 = a6;
  v17 = a2;
  if ( a5 != 0 )
  {
    sub_181EAB740(a1, a2, a3: a5, a4, a5: a2, a6: a8);
    v8 = *(_QWORD *)(a5 + 16);
    if ( v8 != 0 )
      v9 = a5 + v8;
    else
      v9 = 0;
    while ( 1 )
    {
      a2 = v17;
      if ( v9 == 0 )
        break;
      v18 = v9;
      sub_181EAB740(a1, a2: v17, a3: v9, a4: v9, a5: v17, a6: a8);
      v10 = *(_QWORD *)(v18 + 16);
      if ( v10 != 0 )
        v9 = v18 + v10;
      else
        v9 = 0;
    }
    a6 = v21;
  }
  if ( a6 != 0 )
  {
    sub_181EAC520(a1, a2, a3: a6, a4, a5: a4, a6: a8);
    v12 = a1;
    if ( a1 != v21 )
    {
      v13 = *(_QWORD *)(v21 + 16);
      if ( v13 != 0 )
        v14 = v21 + v13;
      else
        v14 = 0;
      while ( v14 != 0 )
      {
        v19 = v14;
        sub_181EAC520(a1: v12, a2: v11, a3: v14, a4, a5: a4, a6: a8);
        if ( v19 == a1 )
          break;
        v15 = *(_QWORD *)(v19 + 16);
        if ( v15 != 0 )
          v14 = v19 + v15;
        else
          v14 = 0;
      }
    }
  }
}
