// sub_503A580
// rva 0x0503a580  size 102  section .text  group text
// window base 0x18503a580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_503A580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rcx
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-18h] BYREF
  __int64 v12; // [rsp+8h] [rbp-10h]
  __int64 v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    v12 = a5;
    v13 = a3;
    sub_1EB84E0();
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_503A600();
  }
  v13 = a3;
  v9 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v5
                                                         + *(_QWORD *)(v6 + 8LL * (*(_DWORD *)(v6 + 8 * v8) >> 3) + 480));
  v12 = a5;
  result = v9(a1, a2, a3: v6 + 8 * v8);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
