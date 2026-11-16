// sub_1ED7D80
// rva 0x01ed7d80  size 107  section .text  group text
// window base 0x181ed7d80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED7D80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned int v8; // [rsp+14h] [rbp-14h]

  v6 = *(unsigned int *)(a5 + 28);
  if ( (_DWORD)v6 != 0 )
  {
    if ( *(_DWORD *)(v5 + 8 * v6 + 52) != 0 && *(_DWORD *)(v5 + 8 * v6 + 4) == 0 )
    {
      v8 = *(_DWORD *)(a5 + 28);
      sub_15AF580(a1, a2, a3: v5 + 8 * v6);
      v6 = v8;
    }
    if ( (*(_DWORD *)(v5 + 8 * v6 + 24) & 0x2000) != 0 )
      JUMPOUT(0x303D61DBCLL);
  }
  return 0;
}
