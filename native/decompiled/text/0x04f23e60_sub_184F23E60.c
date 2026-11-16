// sub_184F23E60
// rva 0x04f23e60  size 92  section .text  group text
// window base 0x184f23e60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F23E60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  _QWORD v11[3]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+18h] [rbp-10h]
  unsigned int v13; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v11 <= *(_QWORD *)(v6 + 8) )
  {
    v12 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v5 )
  {
    v13 = *(_DWORD *)(a5 + 8);
    v12 = a3;
    v11[2] = a5;
    result = sub_184F240C0(a1: v13, a2, a3, a4: a3, a5, a6: 0);
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v9, a2: v10, a3: v8, a4: v13);
    return result;
  }
  MEMORY[0x182771080]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_184F23EC0();
}
