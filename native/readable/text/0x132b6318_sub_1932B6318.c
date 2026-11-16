// sub_132B6318
// rva 0x132b6318  size 99  section .text  group text
// window base 0x1932b6318: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall sub_132B6318(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi

  if ( MEMORY[0x337680]/* 0x337680 */ != 0 )
  {
    LOBYTE(v5) = 1;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 48LL))(a1, a2, a3: 544696);
    if ( v5 != 0 )
    {
      MEMORY[0x337680]/* 0x337680 */ = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
                           a1: v6,
                           a2: v7,
                           a3: v5,
                           a4,
                           a5: 534444,
                           a6: 534440);
      LOBYTE(v5) = MEMORY[0x337680]/* 0x337680 */ != 0;
    }
  }
  return v5;
}
