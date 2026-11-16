// sub_15C9B20
// rva 0x015c9b20  size 281  section .text  group text
// window base 0x1815c9b20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C9B20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  __int64 v16; // [rsp+8h] [rbp-30h]
  __int64 v17; // [rsp+10h] [rbp-28h]
  __int64 v18; // [rsp+18h] [rbp-20h]
  __int64 v19; // [rsp+20h] [rbp-18h]
  __int64 v20; // [rsp+28h] [rbp-10h]
  __int64 v21; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v12 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v13 = *(_QWORD *)(v12 + 40);
  if ( (unsigned __int64)(v13 + 64) > *(_QWORD *)(v12 + 32) )
    return sub_1815C9BE8(a1, a2, a3, a4: v13, a5, a6, a7, a8, a9, a10, a11, a12);
  *(_QWORD *)(v12 + 40) = v13 + 64;
  *(_DWORD *)v13 = 35857120;
  *(_DWORD *)(v13 + 4) = 0;
  *(_QWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = 0;
  *(_QWORD *)(v13 + 32) = 0;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 56) = 0;
  v16 = v13;
  v17 = a3;
  v18 = a5;
  v19 = a6;
  v20 = a1;
  v21 = a2;
  sub_7184260(a1: a6, a2: a1, a3: v13, a4: a2, a5: a3, a6: a5);
  if ( *(int *)(v12 + 16) <= 0 )
    sub_277F280();
  return v16;
}
