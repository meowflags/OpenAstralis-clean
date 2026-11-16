// sub_4F4C460
// rva 0x04f4c460  size 166  section .text  group text
// window base 0x184f4c460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F4C460(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-18h] BYREF
  int v7; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v6 <= *(_QWORD *)(v4 + 8) )
  {
    v7 = a3;
    sub_1EB84E0();
    goto LABEL_13;
  }
  if ( a3 >= 128 )
  {
    result = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v4 + 32) )
    {
      v7 = a3;
      result = sub_1EAA920(a1, a2, a3: 34307848);
      LOWORD(a3) = v7;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = result + 16;
      *(_DWORD *)result = 34307848;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
    }
    *(_WORD *)(result + 4) = a3;
    goto LABEL_5;
  }
  if ( (unsigned int)a3 >= 0x80 )
  {
LABEL_13:
    sub_2770B00();
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F4C520();
  }
  result = v3 + 8LL * *(unsigned int *)(v3 + 4LL * (unsigned int)a3 + 376429804);
LABEL_5:
  if ( *(int *)(v4 + 16) <= 0 )
    return sub_277F280();
  return result;
}
