// sub_132AA190
// rva 0x132aa190  size 128  section .text  group text
// window base 0x1932aa190: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AA190(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rsi

  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 760LL))(
         a1: a4,
         a2,
         a3,
         a4,
         a5: MEMORY[0x337ed8]/* 0x337ed8 */);
  if ( v5 != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v4 + 800LL))(
           a1: v4,
           a2: v5,
           a3: v5,
           a4: v4,
           a5: MEMORY[0x337ef8]/* 0x337ef8 */);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v7 + 184LL))(a1: v7, a2: v9, a3: v9, a4: v7);
    return v8;
  }
  else
  {
    JNU_ThrowNullPointerException(a1: v4, a2: 0, a3: 537232, a4: v4);
    return 0xFFFFFFFFLL;
  }
}
