// sub_2778800
// rva 0x02778800  size 179  section .text  group text
// window base 0x182778800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2778800(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64, __int64, _QWORD); // [rsp+28h] [rbp-20h]
  unsigned int v11; // [rsp+34h] [rbp-14h]
  unsigned int v12; // [rsp+40h] [rbp-8h]

  v12 = MEMORY[0x10e44aa0]/* 0x10e44aa0 */;
  v11 = MEMORY[0x10e44510]/* 0x10e44510 */;
  result = MEMORY[0x10e44040]/* 0x10e44040 */(a1, a2, a3: MEMORY[0x10e44aa0]/* 0x10e44aa0 */, a4: MEMORY[0x10e44510]/* 0x10e44510 */);
  if ( result == *(_QWORD *)(v2 + 376181296) )
  {
    v10 = MEMORY[0x10e44930]/* 0x10e44930 */;
    if ( (unsigned int)MEMORY[0x10e44930]/* 0x10e44930 */(a1: v4, a2: v5, a3: 0, a4: v12) != 0 )
    {
      result = v10(a1: v6, a2: v7, a3: -1, a4: v11);
      if ( (_DWORD)result != 0 )
        return result;
      sub_28C1C40(a1: v8, a2: v9, a3: v2 + 366622808);
    }
    sub_28C1C40(a1: v6, a2: v7, a3: v2 + 366622808);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_27788C0();
  }
  return result;
}
