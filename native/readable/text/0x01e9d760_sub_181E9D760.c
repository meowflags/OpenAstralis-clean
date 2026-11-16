// sub_1E9D760
// rva 0x01e9d760  size 93  section .text  group text
// window base 0x181e9d760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9D760(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v8; // [rsp+10h] [rbp-8h]

  if ( a3 == v3 )
  {
    sub_276EFE0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_1E9D7C0)();
  }
  else
  {
    if ( *(int *)(a3 + 48) < 16 )
      result = sub_1EA7AC0(a1, a2, a3: v3 + 376652784);
    else
      result = sub_1E9D7C0(a1, a2, a3: v3 + 376654168);
    if ( result != 0 )
    {
      v8 = result;
      sub_1E9FB20(a1: v5, a2: v6, a3, a4: a3, a5: result);
      return v8;
    }
  }
  return result;
}
