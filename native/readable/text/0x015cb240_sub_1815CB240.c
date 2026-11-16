// sub_15CB240
// rva 0x015cb240  size 187  section .text  group text
// window base 0x1815cb240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15CB240(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15CB300();
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v6 + 40) > *(_QWORD *)(v5 + 32) )
    {
      v6 = sub_1EAA920(a1, a2, a3: 35863664);
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v6 + 40;
      *(_DWORD *)v6 = 35863664;
      *(_DWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 16) = 0;
      *(_QWORD *)(v6 + 24) = 0;
      *(_QWORD *)(v6 + 32) = 0;
    }
    *(_DWORD *)(v6 + 20) = 46923644;
    *(_DWORD *)(v6 + 16) = *(_DWORD *)(v4 + 374343896);
    *(_DWORD *)(v6 + 12) = (unsigned __int64)(v6 - v4) >> 3;
    v9 = v6;
    sub_503B9A0(a1, a2, a3: v6, a4, a5: 0);
    if ( *(int *)(v5 + 16) <= 0 )
      sub_277F280();
    return v9;
  }
}
