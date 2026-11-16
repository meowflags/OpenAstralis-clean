// sub_132B4D00
// rva 0x132b4d00  size 292  section .text  group text
// window base 0x1932b4d00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B4D00(
        _DWORD a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h]
  _BYTE v21[16]; // [rsp+40h] [rbp-10h] BYREF

  v20 = 0;
  v19 = 0;
  a10 = 0;
  result = __imp_KERNEL32.dll!GetProcessTimes(a1: a5, a2, a3: &a10, a4: a3, a5: v21, a6: &v19);
  if ( (_DWORD)result != 0 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64, __int64, _QWORD, unsigned __int64))(*(_QWORD *)a4 + 880LL))(
      a1: v12,
      a2: ((unsigned __int64)((unsigned __int128)((__int64)((unsigned int)a10
                                                      | (unsigned __int64)((__int64)SHIDWORD(a10) << 32))
                                            * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
    + ((__int64)((unsigned __int128)((__int64)((unsigned int)a10 | (unsigned __int64)((__int64)SHIDWORD(a10) << 32))
                                   * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
    - 11644473600000LL,
      a3: v12,
      a4,
      a5: MEMORY[0x337650]/* 0x337650 */,
      a6: 100
    * (((unsigned int)v20 | (unsigned __int64)((__int64)SHIDWORD(v20) << 32))
     + ((unsigned int)v19 | (unsigned __int64)((__int64)SHIDWORD(v19) << 32))));
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
               a1: v13,
               a2: v14,
               a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
               a4);
    if ( (_BYTE)result == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 880LL))(
        a1: v15,
        a2: v16,
        a3: v15,
        a4,
        a5: MEMORY[0x337658]/* 0x337658 */,
        a6: v16);
      return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
               a1: v17,
               a2: v18,
               a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
               a4);
    }
  }
  return result;
}
