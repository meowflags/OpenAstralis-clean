// sub_1EC52E0
// rva 0x01ec52e0  size 79  section .text  group text
// window base 0x181ec52e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC52E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  char v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    v12 = a5;
    v11 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v10);
    goto LABEL_6;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_6:
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EC5340();
  }
  v12 = a5;
  v11 = a3;
  result = sub_28A23C0(a1, a2, a3: v6 + 8 * v8);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
