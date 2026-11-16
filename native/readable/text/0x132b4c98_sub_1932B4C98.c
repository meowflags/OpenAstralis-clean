// sub_132B4C98
// rva 0x132b4c98  size 102  section .text  group text
// window base 0x1932b4c98: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_132B4C98(
        __int64 a1,
        __int64 a2,
        _DWORD a3,
        __int64 a4,
        _DWORD a5,
        _DWORD a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF

  if ( (unsigned int)__imp_KERNEL32.dll!GetProcessTimes(a1, a2, a3: &a8, a4, a5: &v11, a6: &a10) != 0 )
    return ((unsigned __int64)((unsigned __int128)((__int64)((unsigned int)a8
                                                           | (unsigned __int64)((__int64)SHIDWORD(a8) << 32))
                                                 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
         + ((__int64)((unsigned __int128)((__int64)((unsigned int)a8 | (unsigned __int64)((__int64)SHIDWORD(a8) << 32))
                                        * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
         - 11644473600000LL;
  else
    return 0;
}
