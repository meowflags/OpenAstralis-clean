// sub_132C04B8
// rva 0x132c04b8  size 106  section .text  group text
// window base 0x1932c04b8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C04B8(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int v14; // [rsp+0h] [rbp-28h]

  v7 = a3;
  v8 = a4;
  while ( a5 > 0 )
  {
    if ( a5 >= 0x7FFFFFFF )
      JUMPOUT(0x32651A4E8LL);
    v9 = handleRead(a1: v7, a2: v8, a3: v7, a4: v8, (unsigned int)a5, a6, a7: v14);
    if ( v9 <= 0 )
    {
      if ( v9 != -1 || *(_DWORD *)__imp_api-ms-win-crt-runtime-l1-1-0.dll!_errno(a1: v12, a2: v8, a3: v10, a4: v11) != 4 )
        return 0xFFFFFFFFLL;
    }
    else
    {
      v7 = v9 + v12;
      a5 -= v9;
    }
  }
  return 0;
}
