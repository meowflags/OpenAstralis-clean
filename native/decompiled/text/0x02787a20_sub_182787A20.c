// sub_182787A20
// rva 0x02787a20  size 166  section .text  group text
// window base 0x182787a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182787A20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-238h] BYREF
  _BYTE v14[532]; // [rsp+10h] [rbp-228h] BYREF
  unsigned int v15; // [rsp+224h] [rbp-14h]
  _BYTE *v16; // [rsp+228h] [rbp-10h]
  __int64 v17; // [rsp+230h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v4 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182787AE0();
  }
  else
  {
    v17 = a3;
    v16 = v14;
    v5 = sub_18278AC00(a1, a2, a3, a4: a3, a5: v14, a6: 260);
    if ( v5 == 0 || v5 == 260 )
    {
      v15 = v5;
      if ( *(int *)(v4 + 16) <= 0 )
        sub_18277F280(a1: v8, a2: v9, a3: v6, a4: v7);
      return v3;
    }
    else
    {
      v15 = v5;
      result = sub_182789660(a1: v8, a2: v9, a3: v16, a4: v7, a5: v5);
      if ( *(int *)(v4 + 16) <= 0 )
        return sub_18277F280(a1: v11, a2: v12, a3: (__int64)v16, a4: v15);
    }
  }
  return result;
}
