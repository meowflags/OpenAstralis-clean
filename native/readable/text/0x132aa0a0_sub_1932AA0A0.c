// sub_132AA0A0
// rva 0x132aa0a0  size 111  section .text  group text
// window base 0x1932aa0a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AA0A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rsi

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 760LL))(
             a1: a4,
             a2,
             a3,
             a4,
             a5: MEMORY[0x337f38]/* 0x337f38 */);
  if ( result != 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v5 + 800LL))(
           a1: v5,
           a2: result,
           a3: result,
           a4: v5,
           a5: MEMORY[0x337f28]/* 0x337f28 */);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 184LL))(a1: v6, a2: v8, a3: v8, a4: v6);
    return v7;
  }
  return result;
}
