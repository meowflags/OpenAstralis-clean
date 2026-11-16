// sub_132AF004
// rva 0x132af004  size 105  section .text  group text
// window base 0x1932af004: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AF004(
        __int64 a1,
        int a2,
        _DWORD a3,
        int a4,
        _DWORD a5,
        _BYTE a6,
        __int64 a7,
        int a8,
        int a9)
{
  __int64 result; // rax
  int v11; // edi
  int v12; // esi
  __int64 v13; // [rsp+0h] [rbp-38h]
  __int64 v14; // [rsp+0h] [rbp-38h]
  __int64 v15; // [rsp+8h] [rbp-30h]
  int v16; // [rsp+8h] [rbp-30h]
  __int64 v17; // [rsp+10h] [rbp-28h]
  int v18; // [rsp+10h] [rbp-28h]
  __int64 v19; // [rsp+18h] [rbp-20h]
  __int64 v20; // [rsp+18h] [rbp-20h]

  a8 = 0;
  a9 = 4;
  result = NET_GetSockOpt(a1, a2, a3: 0xFFFF, a4, a5: 4, a6: &a8, a7: v13, a8: v15, a9: v17, a10: v19, a11: &a9);
  if ( (_DWORD)result == 0 && a8 == 0 )
  {
    a8 = 1;
    return NET_SetSockOpt(
             a1: v11,
             a2: v12,
             a3: 0xFFFFu,
             a4,
             a5: 0xFFFFFFFB,
             a6: &a8,
             a7: v14,
             a8: v16,
             a9: v18,
             a10: v20);
  }
  return result;
}
