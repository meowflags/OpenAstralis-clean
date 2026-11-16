// sub_181EC5B40
// rva 0x01ec5b40  size 198  section .text  group text
// window base 0x181ec5b40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC5B40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // r9
  __int64 result; // rax
  unsigned __int64 i; // rdx
  char v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+8h] [rbp-30h]
  __int64 v12; // [rsp+10h] [rbp-28h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]
  int v14; // [rsp+24h] [rbp-14h]
  unsigned __int64 v15; // [rsp+28h] [rbp-10h]
  unsigned __int64 v16; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v10);
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
    return sub_181EC5C20();
  }
  else
  {
    v12 = a3;
    v16 = a5;
    v7 = 4LL * (unsigned int)a4;
    result = v7 + a5;
    v15 = v7 + a5;
    if ( v7 + a5 > a5 )
    {
      v14 = a4;
      v11 = a2;
      sub_181EC5AA0(a1, a2, a3, a4, a5, a6: 1);
      for ( i = v16 + 4; ; i = v13 + 4 )
      {
        result = v15;
        if ( v15 <= i )
          break;
        v13 = i;
        sub_181EC5AA0(a1, a2, a3: v12, a4: v12, a5: i, a6: 1);
      }
    }
    else
    {
      v14 = a4;
      v11 = a2;
      i = a5;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280](a1, a2, a3: i);
  }
  return result;
}
