// sub_18504E440
// rva 0x0504e440  size 126  section .text  group text
// window base 0x18504e440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504E440(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v10 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18504E4C0();
  }
  else
  {
    v7 = v5 + 94303224;
    if ( a5 == a3 )
    {
      result = 1;
    }
    else
    {
      if ( a5 == v5 )
        v8 = v5;
      else
        v8 = &v5[2 * (*a5 >> 3)];
      v10[2] = v5 + 94303212;
      result = v5 + 10827806 == v8;
      v7 = v5 + 94303212;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280](a1, a2, a3, a4: v7);
  }
  return result;
}
