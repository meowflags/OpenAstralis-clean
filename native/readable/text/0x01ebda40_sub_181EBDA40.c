// sub_1EBDA40
// rva 0x01ebda40  size 140  section .text  group text
// window base 0x181ebda40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1EBDA40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *result; // rax
  int v14; // [rsp+0h] [rbp-18h] BYREF
  __int64 v15; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v14);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_1EBDAE0();
  }
  else
  {
    v15 = a3;
    *(_QWORD *)(a3 + 8) = v6;
    __faststorefence();
    if ( *(_BYTE *)(a3 + 4) == 0 )
    {
      do
      {
        sub_1EBE3C0();
        sub_1EBDB40();
        result = sub_1EBD7A0(a1: v9, a2: v10, a3: v7, a4: v8, a5: v11, a6: v12);
      }
      while ( *(_BYTE *)(v15 + 4) == 0 );
    }
    if ( *(int *)(v6 + 16) <= 0 )
      return (_DWORD *)sub_277F280();
  }
  return result;
}
