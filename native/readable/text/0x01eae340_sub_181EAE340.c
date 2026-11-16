// sub_1EAE340
// rva 0x01eae340  size 756  section .text  group text
// window base 0x181eae340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EAE340(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  char v17; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+18h] [rbp-30h]
  int v19; // [rsp+34h] [rbp-14h]
  int v20; // [rsp+38h] [rbp-10h]
  int v21; // [rsp+3Ch] [rbp-Ch]
  __int64 v22; // [rsp+40h] [rbp-8h]

  v22 = a6;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v15 + 8) )
  {
    v21 = a4;
    v20 = a2;
    v19 = a1;
    v18 = a3;
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v17);
  }
  else if ( a5 != v14 )
  {
    return sub_181EAE386(
             a1,
             a2,
             a3: (int)v14 + 376612120,
             a4,
             a5: (int)v14 + 371554696,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14);
  }
  sub_276EFE0();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_1EAE640();
}
