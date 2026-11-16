// sub_132BA018
// rva 0x132ba018  size 98  section .text  group text
// window base 0x1932ba018: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_WORD *__fastcall sub_132BA018(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _WORD *a4,
        __int16 a5,
        _WORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int64 a11)
{
  _WORD *v11; // r10

  v11 = a4;
  if ( a5 != 0 )
  {
    if ( (unsigned __int64)a4 >= a3 )
    {
LABEL_5:
      *(_DWORD *)__imp_api-ms-win-crt-runtime-l1-1-0.dll!_errno(a1, a2, a3, a4) = 38;
      return nullptr;
    }
    *a4 = a5;
    v11 = a4 + 1;
  }
  a3 = (a3 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFFELL;
  if ( (__int64)((a11 - (_QWORD)a6) & 0xFFFFFFFFFFFFFFFELL) > (__int64)a3 )
    goto LABEL_5;
  while ( (unsigned __int64)a6 < a11 )
    *v11++ = *a6++;
  return v11;
}
