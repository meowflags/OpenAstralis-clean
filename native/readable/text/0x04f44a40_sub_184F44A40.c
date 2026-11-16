// sub_4F44A40
// rva 0x04f44a40  size 77  section .text  group text
// window base 0x184f44a40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F44A40(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v7; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v6 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
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
    return sub_4F44AA0();
  }
  else
  {
    result = *(unsigned int *)((char *)a3 + *(int *)(v3 + 8LL * (*a3 >> 3) + 52));
    if ( (_DWORD)result == 0 )
    {
      v7 = a3;
      result = sub_1ED7320();
      a3 = v7;
    }
    if ( *(int *)(v4 + 16) <= 0 )
    {
      v7 = a3;
      return sub_277F280();
    }
  }
  return result;
}
