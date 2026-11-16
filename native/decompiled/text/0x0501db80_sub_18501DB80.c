// sub_18501DB80
// rva 0x0501db80  size 134  section .text  group text
// window base 0x18501db80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501DB80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    v11 = a5;
    v12 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v5 )
  {
    v7 = *(_DWORD *)(a3 + 8) >> 1;
    if ( a5 == v5 )
    {
LABEL_8:
      MEMORY[0x182771080](a1, a2, a3, a4, a5, a6: v7);
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
      return ((__int64 (*)(void))sub_18501DC20)();
    }
    v8 = *(_DWORD *)(a5 + 8) >> 1;
    v12 = a3;
    v11 = a5;
    result = sub_18501DC20(a1: a5, a2: 0, a3, a4: v8, a5: 0, a6: v7);
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_8;
}
