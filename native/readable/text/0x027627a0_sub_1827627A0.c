// sub_27627A0
// rva 0x027627a0  size 174  section .text  group text
// window base 0x1827627a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27627A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]
  __int64 v18; // [rsp+20h] [rbp-8h]

  v18 = a3;
  v17 = a5;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
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
    return sub_2762860();
  }
  else
  {
    result = sub_500AEA0(a1, a2, a3, a4: a5);
    v12 = v17;
    if ( v17 != v5 )
    {
      v13 = v5 + 8LL * *(unsigned int *)(v17 + 4);
      while ( 1 )
      {
        v16 = v13;
        if ( v13 == v12 )
        {
          v14 = v13;
        }
        else
        {
          sub_4F36F80(a1: v10, a2: v11, a3: v18, a4: v5 + 372638416, a5: v5 + 372638416);
          v14 = v16;
        }
        result = sub_500AEA0(a1: v10, a2: v11, a3: v18, a4: v9, a5: v14);
        v8 = v16;
        if ( v16 == v5 )
          break;
        v13 = v5 + 8LL * *(unsigned int *)(v16 + 4);
        v12 = v17;
      }
    }
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280(a1: v10, a2: v11, a3: v8);
  }
  return result;
}
