// sub_1329D8E0
// rva 0x1329d8e0  size 130  section .text  group text
// window base 0x19329d8e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1329D8E0(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  __int64 v15; // [rsp+0h] [rbp-138h] BYREF
  __int64 v16; // [rsp+8h] [rbp-130h]
  __int64 v17; // [rsp+10h] [rbp-128h]
  __int64 v18; // [rsp+18h] [rbp-120h]
  _BYTE v19[256]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v20; // [rsp+120h] [rbp-18h]

  v7 = sub_1329DD10(a1: a3, a2, a3, a4: (unsigned int)v19, a5, a6, a7: v15, a8: v16, a9: v17, a10: v18);
  if ( v7 != 0 )
  {
    if ( v7 == 3 )
    {
      sub_1932CA1C1(a1: v9, a2: v10, a3: v8, a4: v19);
    }
    else if ( sub_1329D970(a1: v9, a2: v10, a3: (unsigned int)v19, a4, a5: v9, a6: v12, a7: v15, a8: v16, a9: v17) == 0 )
    {
      sub_132B807C(a1: v9, a2: v10, a3: v8, a4: v13, a5: v11, a6: v12, a7: v15, a8: v16);
    }
  }
  return sub_132C8DE0(a1: v9, a2: v10, a3: v8, a4: (unsigned __int64)&v15 ^ v20, a5: v11, a6: v12);
}
