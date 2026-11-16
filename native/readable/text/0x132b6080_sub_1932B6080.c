// sub_132B6080
// rva 0x132b6080  size 167  section .text  group text
// window base 0x1932b6080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall sub_132B6080(__int64 a1, __int64 a2, _DWORD a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi

  if ( MEMORY[0x337668]/* 0x337668 */ != 0 )
    return 1;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 48LL))(a1, a2, a3: 544448);
  if ( v5 != 0 )
  {
    MEMORY[0x337668]/* 0x337668 */ = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
                         a1: v5,
                         a2: v6,
                         a3: v5,
                         a4,
                         a5: 534444,
                         a6: 534440);
    if ( MEMORY[0x337668]/* 0x337668 */ != 0 )
    {
      MEMORY[0x337670]/* 0x337670 */ = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
                           a1: v7,
                           a2: v8,
                           a3: v7,
                           a4,
                           a5: 544504,
                           a6: 535012);
      if ( MEMORY[0x337670]/* 0x337670 */ != 0 )
      {
        MEMORY[0x337678]/* 0x337678 */ = sub_1932B8BCC();
        return 1;
      }
    }
  }
  return 0;
}
