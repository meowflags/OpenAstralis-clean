// JNU_ClassString
// rva 0x132b09d4  size 142  section .text  group text
// window base 0x1932b09d4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_ClassString(__int64 a1, __int64 a2, _DWORD a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi

  result = MEMORY[0x337628]/* 0x337628 */;
  if ( MEMORY[0x337628]/* 0x337628 */ == 0 )
  {
    if ( (*(int (__fastcall **)(__int64, __int64, __int64))(*a4 + 208))(a1, a2, a3: 1) >= 0
      && (v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*a4 + 48))(
                 a1: v6,
                 a2: v7,
                 a3: 543272,
                 a4)) != 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*a4 + 168))(a1: v8, a2: v9, a3: v8, a4);
      v11 = *a4;
      MEMORY[0x337628]/* 0x337628 */ = v10;
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(v11 + 184))(a1: v12, a2: v13, a3: v12, a4);
      return MEMORY[0x337628]/* 0x337628 */;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
