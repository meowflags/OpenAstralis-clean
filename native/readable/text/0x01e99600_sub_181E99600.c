// sub_1E99600
// rva 0x01e99600  size 187  section .text  group text
// window base 0x181e99600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1E99600(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // [rsp+28h] [rbp-10h]

  if ( a3 != nullptr )
  {
    v4 = a3[2];
    if ( v4 != 0 )
      v9 = (_QWORD *)((char *)a3 + v4);
    else
      v9 = nullptr;
    sub_1E7F020(a1, a2, a3: v3 + 376612536, a4: v3 + 376612536, a5: a3, a6: *a3);
    while ( 1 )
    {
      v8 = v9;
      if ( v9 == nullptr )
        break;
      v7 = v9[2];
      if ( v7 != 0 )
        v9 = (_QWORD *)((char *)v9 + v7);
      else
        v9 = nullptr;
      sub_1E7F020(a1: v5, a2: v6, a3: v3 + 376612536, a4: v3 + 376612536, a5: v8, a6: *v8);
    }
  }
}
