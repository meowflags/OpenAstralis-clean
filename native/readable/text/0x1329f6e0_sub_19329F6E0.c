// sub_1329F6E0
// rva 0x1329f6e0  size 56  section .text  group text
// window base 0x19329f6e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1329F6E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi

  result = sub_1329F530(a1, a2, a3, a4, a5, a6);
  if ( (_DWORD)result != 0 )
  {
    v11 = sub_1932CA21B(a1: v9, a2: v10, a3: v8, a4: 2);
    sub_1932CA275(a1: v12, a2: v13, a3: v11, a4: a3);
    sub_1932CA1D9(a1: v15, a2: v16, a3: v14, a4: 1);
    JUMPOUT(0x19329F717LL);
  }
  return result;
}
