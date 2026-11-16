// sub_184F17BE0
// rva 0x04f17be0  size 104  section .text  group text
// window base 0x184f17be0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F17BE0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned int (*v6)(void); // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+8h] [rbp-10h]
  unsigned int v12; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_184F17C60();
  }
  else
  {
    v6 = (unsigned int (*)(void))(v3 + *(_QWORD *)(v4 + 8LL * (*a3 >> 3) + 176));
    v12 = *a3 >> 3;
    v11 = a3;
    if ( v6() != 0 )
      result = v4;
    else
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v3 + *(_QWORD *)(v4 + 8LL * v12 + 144)))(
                 a1: v7,
                 a2: v8,
                 a3: v11);
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
