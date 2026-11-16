// sub_1EAC520
// rva 0x01eac520  size 297  section .text  group text
// window base 0x181eac520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EAC520(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r14
  unsigned __int64 v16; // rdi
  _DWORD *v17; // rdx
  __int64 v18; // rsi
  __int64 result; // rax
  int v20; // esi

  v16 = *(_QWORD *)(a3 + 32) - ((((*(_QWORD *)(a3 + 32) - 56LL) << 9) / 0x201uLL) & 0xFFFFFFFFFFFFFFF8LL);
  v17 = (_DWORD *)(a3 + v16);
  v18 = *v17 >> 3;
  result = (unsigned int)*(char *)(v14 + 8 * v18 + 68);
  if ( (_DWORD)result != 5 )
  {
    v20 = v14 + 8 * v18;
    if ( (_DWORD)result == 3 )
    {
      return sub_181EAC5C6(a1: v16, a2: v20, a3: (_DWORD)v17, a4: a3, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }
    else if ( (_DWORD)result == 6 )
    {
      return sub_1EAC660(a1: a5, a2: a6, a3: v17, a4: v16 - 56, a5: a3 + 48, a6: v16 - 56);
    }
    else
    {
      return sub_181EAC60F(a1: v16, a2: v20, a3: (_DWORD)v17, a4: a3, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }
  }
  return result;
}
