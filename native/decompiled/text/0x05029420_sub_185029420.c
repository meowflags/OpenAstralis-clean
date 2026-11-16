// sub_185029420
// rva 0x05029420  size 70  section .text  group text
// window base 0x185029420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185029420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  _QWORD v8[4]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+20h] [rbp-8h]
  unsigned int v10; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v8[3] = a3;
  v10 = a5;
  v9 = a6;
  v8[2] = a1;
  result = MEMORY[0x184FCAF20](a1, a2, a3: a5, a4, a5: a6, a6: a1);
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
