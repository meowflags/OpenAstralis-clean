// sub_2783440
// rva 0x02783440  size 197  section .text  group text
// window base 0x182783440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2783440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 result; // rax
  __int64 (__fastcall *v7)(__int64, _QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-28h]
  unsigned int v8; // [rsp+48h] [rbp-10h]

  if ( a5 != 0 )
    return sub_2783520(a1, a2, a3: a5, a4, a5: a5 == 0);
  v8 = MEMORY[0x10e44aa0]/* 0x10e44aa0 */;
  a4 = 283395344;
  if ( *(_BYTE *)(v5 + 376242736) == 0 )
    return sub_2783520(a1, a2, a3: a5, a4, a5: a5 == 0);
  v7 = MEMORY[0x10e44040]/* 0x10e44040 */;
  if ( MEMORY[0x10e44040]/* 0x10e44040 */(a1: MEMORY[0x10e44510]/* 0x10e44510 */, a2: MEMORY[0x10e44040]/* 0x10e44040 */, a3, a4: MEMORY[0x10e44510]/* 0x10e44510 */) != *(_QWORD *)(v5 + 376181296) )
  {
    a5 = 0;
    return sub_2783520(a1, a2, a3: a5, a4, a5: a5 == 0);
  }
  result = v7(a1, a2: v7, a3: v8, a4: v8);
  if ( result == 0 )
  {
    a5 = 0;
    return sub_2783520(a1, a2, a3: a5, a4, a5: a5 == 0);
  }
  return result;
}
