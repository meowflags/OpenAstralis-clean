// sub_132B3ED4
// rva 0x132b3ed4  size 70  section .text  group text
// window base 0x1932b3ed4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B3ED4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  _DWORD v8[14]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h]

  if ( (_DWORD)a3 != -1 && (a3 & 0x400) != 0 )
  {
    if ( (unsigned int)sub_132B3D7C(a1, a2, a3: (__int64)v8, a4) == 0 )
      JUMPOUT(0x32650DF06LL);
    a3 = v8[0];
  }
  return sub_132C8DE0(a1, a2, a3, a4: (unsigned __int64)&v7 ^ v9, a5, a6);
}
