// sub_1EC7960
// rva 0x01ec7960  size 53  section .text  group text
// window base 0x181ec7960: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC7960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  char v10; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v10);
    goto LABEL_7;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_7:
    sub_2771080();
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
    return sub_1EC79A0();
  }
  if ( *(int *)(v7 + 16) <= 0 )
    v8 = sub_277F280();
  return *(unsigned __int16 *)(v6 + 8 * v8 + 56);
}
