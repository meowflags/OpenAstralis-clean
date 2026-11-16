// sub_1932B8D90
// rva 0x132b8d90  size 182  section .text  group text
// window base 0x1932b8d90: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B8D90(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rdi
  unsigned int v18; // edi
  __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // rsi

  result = sub_1932B9470(a1: a11, a2: a6, a3: a5, a4, a5: a11, a6);
  v16 = result;
  if ( result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 760LL))(
               a1: v14,
               a2: v15,
               a3,
               a4,
               a5: v15);
    if ( result != 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 880LL))(
        a1: v17,
        a2: result,
        a3: result,
        a4,
        a5: MEMORY[0x337F90],
        a6: v16);
      v19 = v18 >> 3;
      LOBYTE(v19) = v19 & 1;
      LOBYTE(v20) = v19;
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 840LL))(
               a1: v19,
               a2: v21,
               a3: v21,
               a4,
               a5: MEMORY[0x337F88],
               a6: v20);
    }
  }
  return result;
}
