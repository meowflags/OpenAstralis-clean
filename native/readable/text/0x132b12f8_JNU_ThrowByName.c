// JNU_ThrowByName
// rva 0x132b12f8  size 61  section .text  group text
// window base 0x1932b12f8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_ThrowByName(_DWORD a1, _DWORD a2, _DWORD a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 48LL))(a1: a5);
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 112LL))(
             a1: v7,
             a2: v8,
             a3: result,
             a4,
             a5: v7);
  return result;
}
