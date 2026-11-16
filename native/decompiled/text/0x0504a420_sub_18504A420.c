// sub_18504A420
// rva 0x0504a420  size 88  section .text  group text
// window base 0x18504a420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504A420(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v5 + 8) )
  {
    v9 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_6;
  }
  v6 = *(unsigned int *)(a3 + 20);
  if ( (_DWORD)v6 == 0 )
  {
LABEL_6:
    MEMORY[0x182771080]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18504A480();
  }
  v9 = a3;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v3
                                                              + *(_QWORD *)(v4
                                                                          + 8LL * (*(_DWORD *)(v4 + 8 * v6) >> 3)
                                                                          + 152)))(
             a1,
             a2,
             a3: v4 + 8 * v6);
  if ( *(int *)(v5 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
