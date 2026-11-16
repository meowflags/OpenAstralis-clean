// sub_15ABB40
// rva 0x015abb40  size 282  section .text  group text
// window base 0x1815abb40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15ABB40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  unsigned __int64 v7; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+8h] [rbp-10h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15ABC60();
  }
  else
  {
    v12 = a3;
    v6 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v6 + 40) > *(_QWORD *)(v5 + 32) )
    {
      v6 = sub_1EAA920(a1, a2, a3: 34213584);
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v6 + 40;
      *(_DWORD *)v6 = 34213584;
      *(_DWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 16) = 0;
      *(_QWORD *)(v6 + 24) = 0;
      *(_QWORD *)(v6 + 32) = 0;
    }
    *(_DWORD *)(v6 + 20) = 46923644;
    *(_DWORD *)(v6 + 16) = *(_DWORD *)(v4 + 374343896);
    *(_DWORD *)(v6 + 12) = (unsigned __int64)(v6 - v4) >> 3;
    v11 = (_DWORD *)v6;
    sub_503B9A0(a1, a2, a3: v6, a4, a5: 0);
    v7 = (unsigned __int64)v11;
    v11[2] = 0;
    *(_DWORD *)(v7 + 12) = (unsigned __int64)(v12 - v4) >> 3;
    if ( (*(_DWORD *)v7 & 2) != 0 )
    {
      v9 = (v7 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v7 & 0xFFFFFFFFFFF80000LL) + ((v7 - v9) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v7 & 0xFFFFFFFFFFF80000LL) + ((v7 - v9) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v5 + 16) <= 0 )
      sub_277F280();
    return v7;
  }
}
