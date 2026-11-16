// sub_2789100
// rva 0x02789100  size 117  section .text  group text
// window base 0x182789100: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_2789100(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rsi
  char v8; // [rsp+0h] [rbp-228h] BYREF
  __int64 v9; // [rsp+8h] [rbp-220h]
  _BYTE v10[528]; // [rsp+10h] [rbp-218h] BYREF
  _BYTE *v11; // [rsp+220h] [rbp-8h]

  v9 = a3;
  if ( (unsigned __int64)&v8 > *(_QWORD *)(v5 + 8) )
  {
    v11 = v10;
    sub_278ABA0(a1, a2, a3: 261, a4, a5: v10);
    JUMPOUT(0x18278912CLL);
  }
  sub_1EB84E0();
  sub_28C1C40(a1: v6, a2: v7, a3: v4 + 371340664);
  JUMPOUT(0x182789175LL);
}
