// sub_4F22120
// rva 0x04f22120  size 88  section .text  group text
// window base 0x184f22120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F22120(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v4 + 8) )
  {
    v9 = a3;
    sub_1EB84E0();
    goto LABEL_7;
  }
  v5 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v5 == 0 )
  {
LABEL_7:
    v9 = a3;
    sub_2771080();
    goto LABEL_8;
  }
  v6 = *(unsigned int *)(v3 + 8 * v5 + 4);
  if ( (_DWORD)v6 == 0 )
  {
LABEL_8:
    sub_2771080();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F22180();
  }
  v9 = a3;
  result = sub_4EC81E0(a1, a2, a3: v3 + 8 * v6);
  if ( *(int *)(v4 + 16) <= 0 )
    return sub_277F280();
  return result;
}
