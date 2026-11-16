// sub_1E99540
// rva 0x01e99540  size 182  section .text  group text
// window base 0x181e99540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1E99540(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // [rsp+18h] [rbp-10h]

  if ( a3 != 0 )
  {
    v4 = *(_QWORD *)(a3 + 16);
    if ( v4 != 0 )
      v9 = a3 + v4;
    else
      v9 = 0;
    sub_1E7F020(a1, a2, a3: v3 + 376612536, a4: a3, a5: a3, a6: 0x80000);
    while ( 1 )
    {
      v8 = v9;
      if ( v9 == 0 )
        break;
      v7 = *(_QWORD *)(v9 + 16);
      if ( v7 != 0 )
        v9 += v7;
      else
        v9 = 0;
      sub_1E7F020(a1: v5, a2: v6, a3: v3 + 376612536, a4: v3 + 376612536, a5: v8, a6: 0x80000);
    }
  }
}
