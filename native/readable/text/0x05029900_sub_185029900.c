// sub_5029900
// rva 0x05029900  size 102  section .text  group text
// window base 0x185029900: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5029900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r15
  _QWORD v8[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+10h] [rbp-18h]
  __int64 v10; // [rsp+18h] [rbp-10h]
  int v11; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v11 = a6;
  v8[1] = a3;
  v10 = a5;
  v9 = a5 + 1;
  sub_500F540(a1, a2, a3: a5 + 1);
  if ( *(int *)(v6 + 16) <= 0 )
    sub_277F280();
  if ( v11 >= 256 )
    JUMPOUT(0x30A04494ELL);
  return v9;
}
