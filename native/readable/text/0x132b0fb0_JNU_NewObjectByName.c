// JNU_NewObjectByName
// rva 0x132b0fb0  size 169  section .text  group text
// window base 0x1932b0fb0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_NewObjectByName(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdi

  a10 = a6;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)a4 + 208LL))(a1: 0, a2: 0, a3: 2) >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 48LL))(
            a1: v12,
            a2: v13,
            a3,
            a4);
    if ( v13 != 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 264LL))(
              a1: v12,
              a2: v13,
              a3: v13,
              a4,
              a5: 535156,
              a6: a5);
      if ( v14 != 0 )
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)a4 + 232LL))(
                a1: v12,
                a2: v13,
                a3: v13,
                a4,
                a5: v14,
                a6: &a10);
    }
  }
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(a1: v12, a2: v13, a3: v13, a4);
  return v15;
}
